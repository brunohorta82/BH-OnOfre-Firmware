
fauxmoESP fauxmo;

void startAlexaDiscovery()
{
  fauxmo.createServer(false);
  fauxmo.setPort(80); // required for gen3 devices
  fauxmo.enable(true);
  fauxmo.onSetState([](unsigned char device_id, const char *device_name, bool state, unsigned char value) {
    JsonArray _devices = getStoredSwitchs();
    for (int i = 0; i < _devices.size(); i++)
    {
      JsonObject switchJson = _devices[i];
      if (switchJson.getMember.as<String>()("name").equals(String(device_name)))
      {
        stateSwitch(switchJson, state ? "ON" : "OFF");
        break;
      }
    }
  });
}

void reloadAlexaDiscoveryServices()
{
  JsonArray _devices = getStoredSwitchs();
  for (int i = 0; i < _devices.size(); i++)
  {
    JsonObject &switchJson = _devices[i];
    String _name = switchJson.getMember.as<String>()("name");
    fauxmo.removeDevice(_name.c_str());
    fauxmo.addDevice(_name.c_str());
  }
}

void  rebuildDiscoverySwitchMqttTopics(JsonObject switchJson)
{
  String ipMqtt = getConfigJson().getMember.as<String>()("mqttIpDns");
  if (ipMqtt == "")
    return;
  String prefix = getConfigJson().getMember.as<String>()("homeAssistantAutoDiscoveryPrefix");
    String _id = switchJson.getMember.as<String>()("id");
    String _name = switchJson.getMember.as<String>()("name");
    String type = switchJson.getMember.as<String>()("type");
    if (type.equals("cover"))
    {
      publishOnMqttQueue(prefix + "/cover/" + String(ESP.getChipId())  + _id + "/config", createHaCover(switchJson), true);
      
    
      subscribeOnMqtt(switchJson.getMember.as<String>()("mqttCommandTopic"));
    }
    else if (type.equals("light"))
    {
      publishOnMqttQueue(prefix + "/light/" + String(ESP.getChipId()) + _id + "/config", createHaLight(switchJson), true);
      
      
      subscribeOnMqtt(switchJson.getMember.as<String>()("mqttCommandTopic"));
    }
    else if (type.equals("switch"))
    {
      publishOnMqttQueue(prefix + "/switch/" + String(ESP.getChipId())  + _id + "/config", createHaSwitch(switchJson), true);
     
      
      subscribeOnMqtt(switchJson.getMember.as<String>()("mqttCommandTopic"));
    }
    else if (type.equals("lock"))
    {
      publishOnMqtt(prefix + "/lock/" + String(ESP.getChipId())  + _id + "/config", createHaLock(switchJson), true);
      
       
      subscribeOnMqtt(switchJson.getMember.as<String>()("mqttCommandTopic"));
    }
    else if (type.equals("sensor"))
    {  
      publishOnMqtt(prefix + "/binary_sensor/" + String(ESP.getChipId())  + _id + "/config", createHaBinarySensor(switchJson), true);
    
    
    }
    logger("[MQTT] RELOAD MQTT SWITCH DISCOVERY OK");
}
void  rebuildDiscoverySensorMqttTopics( JsonObject &sensorJson )
{  
   String ipMqtt = getConfigJson().getMember.as<String>()("mqttIpDns");
   if (ipMqtt == "")
    return;
  String prefix = getConfigJson().getMember.as<String>()("homeAssistantAutoDiscoveryPrefix");
    String _class = sensorJson.getMember.as<String>()("class");
    JsonArray functions = sensorJson.getMember.as<JsonVariant>("functions");
    for (int i = 0; i < functions.size(); i++)
    {
      JsonObject f = functions.getMember.as<JsonVariant>(i);
      String _id = normalize(f.getMember.as<String>()("name"));
      if (_class.equals("binary_sensor"))
      {
        publishOnMqtt(prefix + "/binary_sensor/" + String(ESP.getChipId())  + _id + "/config", createHaBinarySensor(sensorJson), true);
  
      }
      else if (_class.equals("sensor"))
      { 
        
        publishOnMqtt(prefix + "/sensor/" + String(ESP.getChipId()) + _id + "/config", createHaSensor(sensorJson, f), true);
        
        
      
      }
    }
      logger("[MQTT] RELOAD MQTT SENSOR DISCOVERY OK");
  }


void loopDiscovery()
{
  fauxmo.handle();
}

String createHaSensor(JsonObject _sensorJson, JsonObject _f)
{
  String object = "";
  JsonObject sensorJson = getJsonObject();
  sensorJson.set("name", _f.getMember.as<String>()("name"));
  sensorJson.set("state_topic", _sensorJson.getMember.as<String>()("mqttStateTopic"));
  sensorJson.set("unit_of_measurement", _f.getMember.as<String>()("unit"));
  sensorJson.set("device_class", _f.getMember.as<String>()("uniqueName"));
  sensorJson.set("value_template", "{{ value_json."+_f.getMember.as<String>()("uniqueName")+"}}");
 
  sensorJson.printTo(object);
  return object;
}
String createHaBinarySensor(JsonObject _sensorJson)
{
  String object = "";
  JsonObject sensorJson = getJsonObject();
  sensorJson.set("name", _sensorJson.getMember.as<String>()("name"));
  sensorJson.set("state_topic", _sensorJson.getMember.as<String>()("mqttStateTopic"));
  sensorJson.set("payload_on", String(PAYLOAD_ON));
  sensorJson.set("payload_off", String(PAYLOAD_OFF));
  sensorJson.set("device_class", "opening");
  sensorJson.printTo(object);
  return object;
}
String createHaLock(JsonObject _switchJson)
{
  String object = "";
  JsonObject switchJson = getJsonObject();
  switchJson.set("name", _switchJson.getMember.as<String>()("name"));
  switchJson.set("command_topic", _switchJson.getMember.as<String>()("mqttCommandTopic"));
  switchJson.set("state_topic", _switchJson.getMember.as<String>()("mqttStateTopic"));
  switchJson.set("retain", _switchJson.getMember.as<bool>("retain"));
  switchJson.set("payload_lock", String(PAYLOAD_LOCK));
  switchJson.set("payload_unlock", String(PAYLOAD_UNLOCK));
  switchJson.printTo(object);
  return object;
}
String createHaSwitch(JsonObject _switchJson)
{
  String object = "";
  JsonObject switchJson = getJsonObject();
  switchJson.set("name", _switchJson.getMember.as<String>()("name"));
  switchJson.set("command_topic", _switchJson.getMember.as<String>()("mqttCommandTopic"));
  switchJson.set("state_topic", _switchJson.getMember.as<String>()("mqttStateTopic"));
  switchJson.set("retain", _switchJson.getMember.as<bool>("retain"));
  switchJson.set("payload_on", String(PAYLOAD_ON));
  switchJson.set("payload_off", String(PAYLOAD_OFF));
  switchJson.printTo(object);
  return object;
}
String createHaLight(JsonObject _switchJson)
{
  String object = "";
  JsonObject switchJson = getJsonObject();
  switchJson.set("name", _switchJson.getMember.as<String>()("name"));
  switchJson.set("command_topic", _switchJson.getMember.as<String>()("mqttCommandTopic"));
  switchJson.set("state_topic", _switchJson.getMember.as<String>()("mqttStateTopic"));
  switchJson.set("retain", _switchJson.getMember.as<bool>("retain"));
  switchJson.set("payload_on", String(PAYLOAD_ON));
  switchJson.set("payload_off", String(PAYLOAD_OFF));
  switchJson.printTo(object);
  return object;
}

void reloadMqttSubscriptions(){
  
  String ipMqtt = getConfigJson().getMember.as<String>()("mqttIpDns");
  if (ipMqtt == "")
    return;
   String prefix = getConfigJson().getMember.as<String>()("homeAssistantAutoDiscoveryPrefix");
    JsonArray switches = getStoredSwitchs();
  for (int i = 0; i < switches.size(); i++)
  {
    JsonObject switchJson = switches.getMember.as<JsonVariant>(i);
    String type = switchJson.getMember.as<String>()("type");
    if (type.equals("cover"))
    {  
      subscribeOnMqtt(switchJson.getMember.as<String>()("mqttCommandTopic"));
    }
    else if (type.equals("light"))
    {
      subscribeOnMqtt(switchJson.getMember.as<String>()("mqttCommandTopic"));
    }
    else if (type.equals("switch"))
    {
      subscribeOnMqtt(switchJson.getMember.as<String>()("mqttCommandTopic"));
    }
    else if (type.equals("lock"))
    { 
      subscribeOnMqtt(switchJson.getMember.as<String>()("mqttCommandTopic"));
    }
  }
    logger("[MQTT] RELOAD MQTT SUBSCRIPTIONS OK");
}
String createHaCover(JsonObject &_switchJson)
{
  String object = "";
  JsonObject switchJson = getJsonObject();
  switchJson.set("name", _switchJson.getMember.as<String>()("name"));
  switchJson.set("command_topic", _switchJson.getMember.as<String>()("mqttCommandTopic"));
  switchJson.set("position_topic", _switchJson.getMember.as<String>()("mqttPositionStateTopic"));
  switchJson.set("retain", _switchJson.getMember.as<bool>("retain"));
  switchJson.set("position_open", 100);
  switchJson.set("position_closed", 0);
  switchJson.set("payload_open", String(PAYLOAD_OPEN));
  switchJson.set("payload_close", String(PAYLOAD_CLOSE));
  switchJson.set("payload_stop", String(PAYLOAD_STOP));
  switchJson.printTo(object);
  return object;
}

void removeFromAlexaDiscovery(String _name)
{
  fauxmo.removeDevice(_name.c_str());
}

void removeFromHaDiscovery(String type, String _id)
{
  publishOnMqtt(getConfigJson().getMember.as<String>()("homeAssistantAutoDiscoveryPrefix") + "/" + type +"/"+ String(ESP.getChipId()) + _id + "/config", "", false);
}