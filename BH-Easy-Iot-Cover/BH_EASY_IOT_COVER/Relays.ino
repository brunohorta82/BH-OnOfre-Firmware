
#define RELAY_DEVICE "relay"
#define NORMAL false
#define INVERTED true

JsonArray& rls = getJsonArray();


const String relaysFilename = "relays.json";

void removeRelay(String _id){
  int relayFound = false;
  int index = 0;
  for (unsigned int i=0; i < rls.size(); i++) {
    JsonObject& relayJson = rls.get<JsonVariant>(i);   
    if(relayJson.get<String>("id").equals(_id)){
      relayFound = true;
      index  = i;
    }
  }
  if(relayFound){
    rls.remove(index);
     
    }

  saveRelays();
  applyJsonRelays();
}
JsonArray& saveRelay(String _id,JsonObject& _relay){
  bool relayFound = false;
  for (unsigned int i=0; i < rls.size(); i++) {
    JsonObject& relayJson = rls.get<JsonVariant>(i);  
    if(relayJson.get<String>("id").equals(_id)){
      relayFound = true;
      relayJson.set("gpio",_relay.get<unsigned int>("gpio"));
       relayJson.set("name",_relay.get<String>("name"));
      relayJson.set("inverted",_relay.get<bool>("inverted"));
    }
  }
  if(!relayFound){
      String _id = "R"+String(millis());
     relayJson(_id,_relay.get<unsigned int>("gpio"),_relay.get<bool>("inverted"),_relay.get<String>("name"),_relay.get<unsigned int>("maxAmp"),"fa-circle-o-notch");
    }
  saveRelays();
  applyJsonRelays();
  return rls;
}
 void openAction(JsonObject& switchJson){
  int gpioOpenClose =switchJson.get<unsigned int>("gpioControlOpenClose");
  int gpioStop = switchJson.get<unsigned int>("gpioControlStop");
  delay(10);
  _turnOff(getRelay(gpioStop));  
  delay(50);
  logger("[SWITCH] OPEN");
  _turnOn( getRelay(gpioOpenClose));
  delay(50);
  _turnOn( getRelay(gpioStop));
  switchJson.set("positionControlCover",100);
  switchJson.set("stateControlCover","OPEN");
  switchJson.set("statePayload","open");
  publishState( switchJson);  
}

void closeAction(JsonObject& switchJson){
  int gpioOpenClose =switchJson.get<unsigned int>("gpioControlOpenClose");
  int gpioStop = switchJson.get<unsigned int>("gpioControlStop");
  delay(10);
  _turnOff(getRelay(gpioStop));
  delay(50);  
  logger("[SWITCH] CLOSE");
  _turnOff(getRelay(gpioOpenClose));
  delay(50);
  _turnOn( getRelay(gpioStop));
  switchJson.set("positionControlCover",0);
  switchJson.set("stateControlCover","CLOSE");
  switchJson.set("statePayload","closed");
  publishState( switchJson);  
}

void stopAction(JsonObject& switchJson){
  int gpioOpenClose =switchJson.get<unsigned int>("gpioControlOpenClose");
  int gpioStop = switchJson.get<unsigned int>("gpioControlStop");
  logger("[SWITCH] STOP.");
  _turnOff(getRelay(gpioStop)); 
  switchJson.set("positionControlCover",50); 
  switchJson.set("stateControlCover","STOP");
  switchJson.set("statePayload","");
  
  publishState( switchJson);  
}

void turnOn( JsonObject& switchJson) {
  JsonObject& relay = getRelay(switchJson.get<unsigned int>("gpioControl")); 
  bool state =_turnOn(relay); 
  switchJson.set("stateControl",state);
  switchJson.set("statePayload",state ? "ON" : "OFF");
  publishState( switchJson);   
}

void turnOff( JsonObject& switchJson) {
  JsonObject& relay = getRelay(switchJson.get<unsigned int>("gpioControl"));
    bool state =_turnOff(relay); 
  switchJson.set("stateControl",state);
  switchJson.set("statePayload",state ? "ON" : "OFF");
  publishState( switchJson);  
}
bool _turnOn( JsonObject& relay) {
  int gpio = relay.get<unsigned int>("gpio");
  bool inverted = relay.get<bool>("inverted");
  String name = relay.get<String>("name");
  digitalWrite( gpio,inverted ? LOW : HIGH);
  logger("[RELAY "+name+" GPIO: "+String(gpio)+"] ON");
  return inverted ? !digitalRead(gpio) : digitalRead(gpio);
}

bool _turnOff( JsonObject& relay) {
  int gpio = relay.get<unsigned int>("gpio");
   bool inverted = relay.get<bool>("inverted");
  String name = relay.get<String>("name");
  digitalWrite( gpio,inverted ? HIGH : LOW);
  logger("[RELAY "+name+" GPIO: "+String(gpio)+"] OFF");
  return inverted ? !digitalRead(gpio) : digitalRead(gpio);
}
void initNormal(bool state,int gpio){
  if(state){
    turnOn(getRelay(gpio));
   }else{
    turnOff(getRelay(gpio));
   }
}
 
bool toogleNormal(int gpio){
  if(digitalRead(gpio)){
    turnOff(getRelay(gpio));
   }else{
    turnOn(getRelay(gpio));
   }
   return digitalRead(gpio);
}
bool turnOnRelayNormal(int gpio){
   turnOn(getRelay(gpio));
   return digitalRead(gpio);
}
JsonObject& getRelay(int gpio){
    for (unsigned int i=0; i < rls.size(); i++) {
    JsonObject& relayJson = rls.get<JsonVariant>(i);
    if(relayJson.get<unsigned int>("gpio") == gpio){
      return relayJson ;
     }
    }
  return getJsonObject();
}

JsonArray& getStoredRelays(){
  return rls;
}


void loadStoredRelays(){
  bool loadDefaults = false;
  if(SPIFFS.begin()){
    File cFile;
    
    if(SPIFFS.exists(relaysFilename)){
      cFile = SPIFFS.open(relaysFilename,"r+"); 
      if(!cFile){
        logger("[RELAY] Create file relays Error!");
        return;
      }
        logger("[RELAY] Read stored file config...");
        JsonArray &storedRelays = getJsonArray(cFile);
        if (!storedRelays.success()) {
         logger("[RELAY] Json file parse Error!");
          loadDefaults = true;
        }else{
          logger("[RELAY] Apply stored file config...");
           for(int i = 0 ; i< storedRelays.size(); i++){
            rls.add(storedRelays.get<JsonVariant>(i));
            }
          applyJsonRelays();
        }
        
     }else{
        loadDefaults = true;
     }
    cFile.close();
     if(loadDefaults){
      logger("[RELAY] Apply default config...");
      cFile = SPIFFS.open(relaysFilename,"w+"); 
      createDefaultRelays();
      rls.printTo(cFile);
      applyJsonRelays();
      cFile.close();
      }
     
  }else{
     logger("[RELAY] Open file system Error!");
  }
   SPIFFS.end(); 
   
}
void applyJsonRelays(){
  for(int i  = 0 ; i < rls.size() ; i++){ 
  JsonObject& relayJson = rls.get<JsonVariant>(i);     
    int gpio = relayJson.get<unsigned int>("gpio");
    configGpio(gpio, OUTPUT);
  }
}
void saveRelays(){
   if(SPIFFS.begin()){
      logger("[RELAY] Open "+relaysFilename);
      File rFile = SPIFFS.open(relaysFilename,"w+");
      if(!rFile){
        logger("[RELAY] Open relays file Error!");
      } else {
       
      rls.printTo(rFile);
      }
      rFile.close();
   }else{
     logger("[RELAY] Open file system Error!");
  }
  SPIFFS.end();
  logger("[RELAY] New relays config loaded.");
}
void relayJson(String _id,long _gpio, bool _inverted, String _name, int _maxAmp, String _icon){
      JsonObject& relayJson =getJsonObject();
      relayJson.set("id" , _id);
      relayJson.set("gpio" , _gpio);
      relayJson.set("inverted" , _inverted);
      relayJson.set("icon" , _icon);
      relayJson.set("name" , _name);
      relayJson.set("maxAmp", _maxAmp);
      relayJson.set("state", false);
      relayJson.set("class", RELAY_DEVICE);
      rls.add(relayJson);
}

void createDefaultRelays(){
    relayJson("R1",RELAY_ONE,NORMAL,"Relé 1",2,"fa-circle-o-notch");
    relayJson("R2",RELAY_TWO,NORMAL,"Relé 2",2,"fa-circle-o-notch");
}
