
#include <Arduino.h>                                       
const uint8_t firmware_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xDF, 0x2B, 0x26, 0x5D, 0x04, 0x03, 0x66, 0x69, 0x72, 0x6D, 0x77, 0x61, 
0x72, 0x65, 0x2E, 0x68, 0x74, 0x6D, 0x6C, 0x00, 0x6D, 0x52, 0x4B, 0x6A, 0xE4, 0x30, 0x10, 0xBD, 
0x4A, 0xA1, 0xBD, 0x30, 0x33, 0xD9, 0xBA, 0x0D, 0xCD, 0x30, 0x03, 0x0D, 0x03, 0x33, 0xE4, 0xB7, 
0xC8, 0xAE, 0x6C, 0xC9, 0xB1, 0x40, 0x96, 0x4C, 0xA9, 0xDC, 0x9D, 0x9C, 0x27, 0x47, 0xC9, 0xC5, 
0x52, 0xB2, 0xDD, 0xDD, 0xC1, 0xED, 0x85, 0x0A, 0x51, 0xDF, 0xF7, 0xEA, 0x55, 0x69, 0xDC, 0x11, 
0x1A, 0x8F, 0x29, 0xED, 0x54, 0x1D, 0xDF, 0x40, 0x9E, 0x1E, 0xC8, 0xF5, 0x48, 0xEF, 0xAA, 0x82, 
0x55, 0x54, 0x77, 0x16, 0x8D, 0x25, 0x38, 0x39, 0xEE, 0x74, 0x1D, 0x49, 0xFE, 0xAA, 0x2A, 0xBB, 
0xBB, 0xEF, 0x29, 0xEC, 0xD8, 0x5B, 0xF1, 0xA6, 0x01, 0xC3, 0xD9, 0xEF, 0x31, 0xBC, 0xEA, 0x71, 
0x30, 0xC8, 0x12, 0xD9, 0xFF, 0x7A, 0x7C, 0xDA, 0xFF, 0x3D, 0xBC, 0xEC, 0xEF, 0xA1, 0x2C, 0x72, 
0x56, 0x55, 0x16, 0xDD, 0x9D, 0x18, 0x99, 0x55, 0x95, 0x6D, 0xA4, 0x1E, 0x28, 0x7A, 0xBB, 0x53, 
0xF9, 0xAB, 0xA0, 0xB7, 0xDC, 0x45, 0xB3, 0x53, 0xFF, 0xFF, 0x3D, 0x3C, 0x2A, 0xC0, 0x86, 0x5D, 
0x0C, 0x3B, 0x55, 0x2C, 0xDD, 0xC0, 0x86, 0x86, 0xDF, 0x07, 0xC9, 0xEE, 0x47, 0xCF, 0x6E, 0x40, 
0xE2, 0x22, 0xD7, 0x69, 0x89, 0x62, 0x26, 0xD0, 0x3A, 0xEB, 0x4D, 0xB2, 0x0C, 0xCE, 0x48, 0xC7, 
0x56, 0x81, 0x71, 0x09, 0x6B, 0x6F, 0xCD, 0x0D, 0x39, 0x21, 0x64, 0xD6, 0x9C, 0x29, 0x9E, 0x56, 
0x9E, 0x26, 0x7A, 0xFD, 0x96, 0xF4, 0x8F, 0x9F, 0x5B, 0x14, 0x9B, 0x91, 0xC8, 0x06, 0xD6, 0x47, 
0x4B, 0x49, 0x60, 0xAA, 0xEA, 0x59, 0x3E, 0x9F, 0x1F, 0x11, 0x90, 0x47, 0xF4, 0x0B, 0x5B, 0x98, 
0xEA, 0x66, 0x3C, 0x8E, 0xFA, 0x13, 0x92, 0x7D, 0x5E, 0xF2, 0xAF, 0xCD, 0x6A, 0xEB, 0x61, 0xB2, 
0xDA, 0x85, 0x36, 0xAA, 0x4A, 0x5F, 0x8A, 0x6B, 0x2A, 0xAA, 0xC9, 0xC0, 0xBC, 0xB1, 0x4D, 0x70, 
0x2B, 0xD0, 0xD3, 0x46, 0x5E, 0x29, 0x8E, 0x83, 0xA0, 0x9E, 0x9B, 0x8B, 0xEB, 0x3A, 0xFF, 0x10, 
0x86, 0x91, 0xFF, 0x38, 0x2F, 0xFB, 0xDC, 0x60, 0x15, 0xEC, 0x49, 0xB7, 0x39, 0x58, 0xFD, 0x4E, 
0x32, 0xA1, 0x93, 0x03, 0x88, 0xD0, 0xBA, 0xA6, 0xB3, 0x8E, 0x22, 0x18, 0x84, 0x10, 0x8F, 0x08, 
0xC7, 0x99, 0xEA, 0x45, 0xD2, 0x69, 0x8C, 0xC0, 0x70, 0xB9, 0xF7, 0xCC, 0xF6, 0x76, 0x5A, 0xC0, 
0x5E, 0xA4, 0x3B, 0x6B, 0x39, 0x0B, 0x39, 0x8D, 0x2A, 0x96, 0x7B, 0xB8, 0xB5, 0x6B, 0xD5, 0xDA, 
0x18, 0x59, 0xCE, 0x30, 0x6F, 0x66, 0x64, 0x8E, 0x61, 0xE9, 0x92, 0xC6, 0xBA, 0x77, 0xAC, 0x2E, 
0x99, 0x1C, 0x40, 0xDE, 0xF9, 0xB4, 0x61, 0x4B, 0x3D, 0x17, 0x12, 0xA3, 0xF7, 0x99, 0xEF, 0x55, 
0x41, 0x38, 0x4C, 0x5E, 0xA4, 0x6D, 0x96, 0xF3, 0xCC, 0x8B, 0x16, 0xC5, 0xF9, 0xDC, 0xB2, 0x27, 
0x6F, 0x7D, 0x01, 0xFD, 0x05, 0x1C, 0x64, 0xDF, 0x18, 0x66, 0x03, 0x00, 0x00, };
      
const uint8_t mqtt_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xD9, 0x8D, 0x2C, 0x5D, 0x04, 0x03, 0x6D, 0x71, 0x74, 0x74, 0x2E, 0x68, 
0x74, 0x6D, 0x6C, 0x00, 0xB5, 0x94, 0xC1, 0x8E, 0xD3, 0x30, 0x10, 0x86, 0x5F, 0xC5, 0xF2, 0x09, 
0x0E, 0x69, 0xB6, 0x2D, 0x5A, 0x01, 0x4A, 0x73, 0x40, 0x2B, 0xA1, 0x95, 0x58, 0x54, 0xC4, 0xEE, 
0x19, 0x4D, 0xE2, 0x49, 0x62, 0xAD, 0x63, 0x1B, 0xDB, 0x69, 0xB3, 0xBC, 0x0E, 0x07, 0x1E, 0x64, 
0x5F, 0x8C, 0x49, 0xD3, 0x34, 0x25, 0x29, 0x12, 0x20, 0x71, 0x88, 0x95, 0xCC, 0x4C, 0xE6, 0xFF, 
0xE7, 0x93, 0xED, 0x44, 0xC8, 0x1D, 0xCB, 0x15, 0x78, 0xBF, 0xE1, 0x99, 0x69, 0x19, 0x3D, 0x91, 
0x75, 0xB2, 0x06, 0xF7, 0xC4, 0x53, 0x36, 0xC9, 0x46, 0x15, 0x82, 0x40, 0xC7, 0xF6, 0x32, 0x54, 
0x51, 0x66, 0x1C, 0xBD, 0xF3, 0x34, 0xA9, 0xD6, 0xE7, 0x25, 0x41, 0x06, 0x85, 0x3C, 0xBD, 0xFB, 
0x74, 0x7F, 0xCF, 0x92, 0xB8, 0x5A, 0xA7, 0x49, 0x4C, 0x4D, 0xD2, 0xA4, 0x30, 0xAE, 0xA6, 0x86, 
0x85, 0x44, 0x25, 0x3C, 0x06, 0x26, 0xC5, 0x86, 0x17, 0x05, 0x67, 0x42, 0x7A, 0xC8, 0x14, 0x8A, 
0x99, 0x18, 0x09, 0x88, 0xA9, 0x07, 0x67, 0xF6, 0x93, 0x48, 0x6E, 0x54, 0xD4, 0xFA, 0x68, 0xB9, 
0x9A, 0xC4, 0x3B, 0xB9, 0xA8, 0x74, 0xA6, 0xB1, 0xE4, 0x50, 0x41, 0x86, 0x8A, 0x51, 0x68, 0xC3, 
0xEB, 0xAF, 0x21, 0x7C, 0x91, 0x14, 0x7C, 0xE7, 0xCC, 0x23, 0x8D, 0x72, 0xBB, 0x65, 0x31, 0xBB, 
0xF9, 0xF8, 0x39, 0x89, 0x0F, 0x45, 0xD4, 0x44, 0x6A, 0xDB, 0x84, 0x5F, 0xDA, 0xE4, 0x46, 0x07, 
0x67, 0x14, 0x67, 0x1A, 0x6A, 0xEC, 0x5B, 0xDC, 0xDA, 0x1B, 0xED, 0x39, 0x0B, 0x4F, 0x96, 0x02, 
0x01, 0xDB, 0xC0, 0x59, 0x0D, 0xAD, 0x42, 0x5D, 0x86, 0x6A, 0xC3, 0x5F, 0x5D, 0x71, 0x9A, 0x6F, 
0x14, 0x63, 0x56, 0x41, 0x8E, 0x95, 0x51, 0x02, 0xC9, 0x02, 0xB6, 0x6F, 0xD9, 0xF2, 0xCD, 0x6A, 
0xB1, 0xBC, 0x7E, 0xBD, 0x58, 0x2E, 0xD6, 0x57, 0x3C, 0x26, 0xD5, 0x03, 0xA4, 0x7E, 0x9D, 0x8E, 
0x57, 0x8B, 0xE8, 0x9A, 0xFD, 0xD3, 0x9C, 0x8D, 0x47, 0xD7, 0x79, 0xA6, 0x94, 0xB7, 0xA0, 0x87, 
0x7F, 0x14, 0xE8, 0x32, 0x1A, 0x73, 0x0F, 0x41, 0x2A, 0xF9, 0x0D, 0x84, 0x71, 0x49, 0xDC, 0x95, 
0xA5, 0x7F, 0xC4, 0x02, 0x9A, 0x60, 0x72, 0x53, 0x5B, 0x85, 0x81, 0x10, 0x98, 0xA2, 0x38, 0xC7, 
0xF3, 0x70, 0x6C, 0xFE, 0x5B, 0x42, 0xAB, 0x91, 0xD0, 0x68, 0xF3, 0x02, 0x27, 0x09, 0x35, 0xE1, 
0xF9, 0x3F, 0x74, 0x2C, 0x95, 0xEC, 0x69, 0x13, 0x5F, 0xA2, 0x33, 0xE6, 0xB6, 0xA0, 0x60, 0xE7, 
0x80, 0x6D, 0x29, 0x82, 0x7F, 0x03, 0x68, 0xA4, 0xB1, 0x3D, 0x36, 0x9B, 0x10, 0x18, 0xE0, 0x9C, 
0xB4, 0xE6, 0x4C, 0xCF, 0x20, 0x9D, 0xAA, 0xE6, 0x90, 0x7C, 0x63, 0xD1, 0x79, 0x52, 0xD5, 0xE5, 
0x50, 0x35, 0xEE, 0xA9, 0xF9, 0x3A, 0x3D, 0x67, 0x85, 0x31, 0x81, 0x4E, 0x82, 0x87, 0x1D, 0x76, 
0xF8, 0xB2, 0x26, 0x04, 0xA3, 0x8F, 0xDE, 0x1C, 0xD2, 0x59, 0xE5, 0xA7, 0xEA, 0xA0, 0x19, 0x3D, 
0x91, 0xC0, 0x02, 0x1A, 0x15, 0x2E, 0x81, 0xCB, 0x15, 0x82, 0x8E, 0xFA, 0x53, 0xCE, 0xD3, 0x0F, 
0xB2, 0xB6, 0xE0, 0x18, 0x31, 0x29, 0x64, 0xD9, 0x38, 0x78, 0xFE, 0xF1, 0xFC, 0xDD, 0xF4, 0x10, 
0x3B, 0x7F, 0xBD, 0xD4, 0x54, 0xB3, 0xFF, 0xE0, 0xCC, 0xE8, 0x5C, 0xC9, 0xFC, 0x71, 0xC3, 0x3B, 
0x67, 0x77, 0xC4, 0xE0, 0xC5, 0xCB, 0xA9, 0x93, 0xF1, 0xAA, 0x9A, 0x3B, 0xE9, 0xE7, 0x79, 0xDF, 
0x80, 0x13, 0x30, 0xEC, 0xEC, 0x41, 0x72, 0x84, 0x33, 0xDC, 0x47, 0x5D, 0xE4, 0x70, 0x45, 0xF5, 
0x89, 0x9F, 0x7A, 0x00, 0x3D, 0x66, 0x17, 0x05, 0x00, 0x00, };
                  
const uint8_t wifi_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xF8, 0x8D, 0x2C, 0x5D, 0x04, 0x03, 0x77, 0x69, 0x66, 0x69, 0x2E, 0x68, 
0x74, 0x6D, 0x6C, 0x00, 0xC5, 0x56, 0xCB, 0x8E, 0x9B, 0x30, 0x14, 0xFD, 0x15, 0xCB, 0xAB, 0x76, 
0x41, 0x5E, 0x93, 0x44, 0xED, 0x88, 0x20, 0x55, 0x1D, 0x35, 0xCD, 0x62, 0xA4, 0xA8, 0x59, 0xCC, 
0x72, 0x64, 0xF0, 0x4D, 0xB0, 0x62, 0xB0, 0x65, 0x9B, 0x40, 0x3E, 0xA7, 0xDF, 0xD2, 0x1F, 0xAB, 
0x4D, 0x20, 0x84, 0x90, 0x56, 0xA4, 0x6A, 0x3B, 0x0B, 0xC0, 0x2F, 0xCE, 0xBD, 0xE7, 0x9C, 0x7B, 
0x05, 0x3E, 0x65, 0x07, 0x14, 0x71, 0xA2, 0xF5, 0x02, 0x87, 0xA2, 0x40, 0xF6, 0xF2, 0xA4, 0x62, 
0x09, 0x51, 0x47, 0x1C, 0x20, 0x7F, 0x2B, 0x54, 0xE2, 0x1E, 0x0C, 0x38, 0xD5, 0x60, 0x10, 0xA3, 
0x0B, 0xBC, 0xDD, 0x62, 0x44, 0x99, 0x26, 0x21, 0x07, 0x6A, 0xF7, 0xDA, 0x00, 0x5E, 0x0C, 0x84, 
0x82, 0x42, 0x39, 0x33, 0xB1, 0x17, 0x0A, 0x65, 0xC7, 0x38, 0xF0, 0xE3, 0x87, 0xCB, 0x23, 0x86, 
0x19, 0x0E, 0x38, 0xF8, 0xB4, 0x46, 0x2F, 0x2B, 0xEF, 0xCB, 0x0A, 0xF9, 0xC3, 0xF8, 0x21, 0xF0, 
0x87, 0x16, 0x28, 0xB8, 0x42, 0xB3, 0x08, 0xD4, 0xE5, 0x71, 0xB9, 0xAC, 0x44, 0x7E, 0xB5, 0x12, 
0x09, 0xEE, 0x25, 0xD4, 0x9B, 0x22, 0x37, 0x28, 0xB4, 0x37, 0x9E, 0x5C, 0x1D, 0x70, 0x2C, 0xBC, 
0x9D, 0x12, 0x99, 0xB4, 0xB9, 0x70, 0x12, 0x02, 0x47, 0x76, 0x69, 0x81, 0x89, 0xDC, 0x40, 0xA4, 
0xC0, 0xE0, 0x60, 0x6D, 0xCF, 0xE5, 0x36, 0x5B, 0x7F, 0x58, 0x6E, 0xDB, 0xD7, 0x59, 0x2A, 0x33, 
0x83, 0x48, 0x66, 0x44, 0x24, 0x12, 0xC9, 0xC1, 0xC0, 0x02, 0x0B, 0x4B, 0xBD, 0x85, 0x19, 0x89, 
0xD4, 0x28, 0xC1, 0x31, 0x32, 0x47, 0x69, 0xF7, 0x65, 0x85, 0x82, 0x51, 0x4A, 0x12, 0xB8, 0xC0, 
0x2F, 0x75, 0x6B, 0x66, 0x92, 0x93, 0x08, 0x62, 0xC1, 0x29, 0xD8, 0x24, 0xA0, 0x78, 0x44, 0x3A, 
0x93, 0xA0, 0xD6, 0xF5, 0xDB, 0x43, 0x1B, 0xBE, 0x54, 0xA3, 0x7B, 0xFF, 0x73, 0xB5, 0x6F, 0x4A, 
0x5D, 0xE6, 0x95, 0xB3, 0x2D, 0x7B, 0xE5, 0x62, 0xF7, 0x6A, 0x4F, 0x9F, 0xE9, 0xC5, 0x8C, 0x52, 
0x48, 0xD1, 0xAF, 0x63, 0xCC, 0x6F, 0xC4, 0xF0, 0xB5, 0x24, 0x69, 0x1B, 0x93, 0x87, 0xDC, 0xAE, 
0x0F, 0xDD, 0x86, 0x7D, 0xC4, 0xF3, 0x37, 0xF1, 0x59, 0x6B, 0x46, 0x71, 0xB0, 0xD9, 0xAC, 0x9E, 
0xAE, 0xFC, 0xBD, 0x6D, 0x66, 0x42, 0x0A, 0x0E, 0xE9, 0xCE, 0xC4, 0x0B, 0x3C, 0x19, 0xE1, 0x6E, 
0x0D, 0xD4, 0x76, 0x1B, 0x28, 0xCC, 0xC9, 0xEA, 0x13, 0x61, 0x17, 0xC0, 0x59, 0x5D, 0x05, 0xEC, 
0xDA, 0x9C, 0x40, 0xE6, 0xCE, 0xE1, 0x61, 0xCB, 0xD3, 0xBF, 0x42, 0xB1, 0x14, 0x5C, 0x97, 0xF5, 
0x55, 0xF9, 0x50, 0xBF, 0xC1, 0x49, 0xBA, 0xF3, 0xEA, 0xCA, 0x74, 0x95, 0xCE, 0xC9, 0x41, 0x11, 
0xE4, 0xAA, 0x0D, 0x2A, 0x63, 0x7A, 0xA9, 0x72, 0xC1, 0xB3, 0x0C, 0xD3, 0x5F, 0xA7, 0x73, 0xF0, 
0xA6, 0x34, 0xF4, 0x6F, 0x3B, 0x41, 0x5E, 0x74, 0xC2, 0x3D, 0x4A, 0xB5, 0x3C, 0x37, 0xC4, 0xB0, 
0x68, 0x65, 0x65, 0x7A, 0xFA, 0xFA, 0x79, 0xDD, 0x8B, 0xA1, 0x36, 0x47, 0x5E, 0x52, 0xA4, 0x26, 
0x7E, 0x44, 0xD3, 0x91, 0x2C, 0x6A, 0x06, 0x51, 0x0C, 0xD1, 0xDE, 0xD6, 0xA9, 0x63, 0xD0, 0x40, 
0xD7, 0x9A, 0x34, 0xF3, 0x03, 0xE1, 0x99, 0x2B, 0x0C, 0x95, 0xB9, 0x6E, 0x08, 0x55, 0x8F, 0x0E, 
0xFE, 0x1F, 0x95, 0xBF, 0xEA, 0xC7, 0xFF, 0x76, 0x55, 0xAF, 0xA4, 0x63, 0x5D, 0x8F, 0x5B, 0xAE, 
0x8F, 0x67, 0x37, 0x1C, 0x1C, 0x7F, 0x9C, 0x0C, 0xC6, 0xF3, 0x0F, 0x83, 0xF1, 0x60, 0x32, 0xBA, 
0xD7, 0xC0, 0x5E, 0x9C, 0x5A, 0xA5, 0xBE, 0x24, 0x06, 0x72, 0x72, 0xEC, 0xC5, 0xAF, 0xE1, 0xB4, 
0xCC, 0x1D, 0xA7, 0x7A, 0x7C, 0x17, 0xA7, 0xD9, 0xF4, 0xDF, 0x93, 0xEA, 0xF6, 0x6F, 0x0A, 0x26, 
0x21, 0x7A, 0x8F, 0x83, 0xE7, 0x1F, 0xDF, 0x75, 0x44, 0x6C, 0xFF, 0x52, 0x40, 0xDF, 0x80, 0xDE, 
0xD5, 0xC1, 0x57, 0x2C, 0x1B, 0x39, 0x9E, 0x2D, 0x74, 0x29, 0x48, 0x33, 0xEB, 0x6A, 0x30, 0x99, 
0xCD, 0x06, 0xF5, 0x35, 0xBA, 0xE7, 0x1B, 0xB5, 0x15, 0xC2, 0xD8, 0xEF, 0x87, 0x26, 0x07, 0x70, 
0x62, 0x84, 0x99, 0x31, 0x22, 0xAD, 0x8A, 0xED, 0x34, 0xC1, 0x48, 0xA4, 0x11, 0x67, 0xD1, 0x7E, 
0x81, 0xDD, 0xA9, 0x17, 0x9B, 0xC4, 0xBB, 0xF7, 0xF8, 0x8C, 0x61, 0x52, 0x64, 0xAF, 0xE6, 0xB7, 
0xA4, 0x2B, 0xCF, 0x09, 0x7B, 0x99, 0x11, 0x45, 0x89, 0x3A, 0x4B, 0x72, 0x02, 0x6F, 0x12, 0xAD, 
0xFF, 0x62, 0xDC, 0x8A, 0x53, 0xA6, 0xCA, 0xF7, 0x27, 0x87, 0xB5, 0xC7, 0x4F, 0x03, 0x09, 0x00, 
0x00, };

const uint8_t devices_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xB4, 0x8D, 0x2C, 0x5D, 0x04, 0x03, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 
0x73, 0x2E, 0x68, 0x74, 0x6D, 0x6C, 0x00, 0x5D, 0x51, 0x3D, 0x6F, 0xC2, 0x30, 0x10, 0xFD, 0x2B, 
0x96, 0xBB, 0xB4, 0x52, 0x23, 0x30, 0x81, 0x81, 0x96, 0x64, 0xE8, 0x44, 0x87, 0x4E, 0xAD, 0x18, 
0xBA, 0x54, 0x4E, 0x7C, 0xC4, 0xA7, 0x9A, 0x38, 0xB2, 0x8F, 0x00, 0xFF, 0xBE, 0x67, 0x23, 0x2A, 
0xC0, 0xF2, 0x9D, 0x9F, 0x9E, 0xEF, 0xC3, 0xF7, 0xBC, 0x32, 0x38, 0x8A, 0xD6, 0xE9, 0x18, 0x2B, 
0xD9, 0xF8, 0xA3, 0x60, 0x2B, 0xA2, 0x77, 0x68, 0x84, 0x81, 0x11, 0x5B, 0x28, 0x12, 0xD1, 0x74, 
0xB2, 0x16, 0x77, 0x91, 0x85, 0x05, 0x6D, 0x20, 0xA4, 0x0B, 0x5B, 0x5E, 0xF3, 0x84, 0xE4, 0x40, 
0xD6, 0xAB, 0x38, 0xE8, 0xFE, 0xC2, 0x3B, 0xDD, 0x77, 0x45, 0x3C, 0x20, 0xB5, 0x16, 0xA2, 0xAC, 
0xDF, 0x7B, 0x82, 0x10, 0xF6, 0x03, 0xF9, 0x00, 0x71, 0x35, 0x49, 0x91, 0x5C, 0xA6, 0xD9, 0x13, 
0xF9, 0xFF, 0x94, 0x86, 0x7A, 0xC1, 0x56, 0x0C, 0x01, 0x77, 0x3A, 0x9C, 0x32, 0x6E, 0x7D, 0x4F, 
0xC1, 0x3B, 0x29, 0x7C, 0xDF, 0x3A, 0x6C, 0x7F, 0x39, 0x6A, 0x8F, 0xCE, 0x7C, 0xE6, 0xC2, 0x5F, 
0xB0, 0x1B, 0x9C, 0x26, 0x78, 0x7C, 0x4A, 0x6F, 0x8A, 0x63, 0x27, 0x22, 0x9D, 0x1C, 0x54, 0xF2, 
0x80, 0x86, 0xEC, 0xCB, 0x6C, 0x3E, 0x1C, 0x5F, 0x2D, 0x60, 0x67, 0x29, 0x63, 0x29, 0x46, 0x84, 
0xC3, 0x9B, 0x3F, 0x56, 0x72, 0x2A, 0xA6, 0x62, 0x36, 0xE7, 0x9D, 0x12, 0x07, 0x4D, 0x56, 0x6C, 
0xD1, 0xB9, 0x4A, 0x3E, 0x4C, 0xF3, 0x92, 0xC2, 0x54, 0xF2, 0x43, 0x2D, 0x9F, 0x55, 0xB9, 0x56, 
0xE5, 0x46, 0x2D, 0xD7, 0x4A, 0x6D, 0x18, 0x2F, 0x36, 0x4A, 0x25, 0xB8, 0x60, 0x36, 0xC3, 0x25, 
0xB3, 0xDF, 0x72, 0xC2, 0x45, 0x26, 0xDC, 0x3E, 0x1D, 0xE7, 0x91, 0x12, 0xB2, 0x65, 0xF2, 0x2C, 
0x61, 0x7D, 0xAF, 0x63, 0xE3, 0xCD, 0xE9, 0x22, 0x2F, 0x72, 0xA7, 0xB3, 0x4C, 0x3F, 0x3C, 0xEB, 
0x16, 0x3B, 0x79, 0x1D, 0x99, 0x7F, 0x24, 0xE9, 0x97, 0x0B, 0xDD, 0xF8, 0x3F, 0x63, 0xAA, 0x9B, 
0xF8, 0xC7, 0x01, 0x00, 0x00, };


const uint8_t index_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xCC, 0x8D, 0x2C, 0x5D, 0x04, 0x03, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x2E, 
0x68, 0x74, 0x6D, 0x6C, 0x00, 0xAD, 0x56, 0x6B, 0x8E, 0xD3, 0x30, 0x10, 0xBE, 0x8A, 0x09, 0x42, 
0x80, 0x84, 0x09, 0x20, 0x10, 0x4B, 0x69, 0x0A, 0x05, 0x8A, 0xA8, 0xC4, 0xA3, 0x40, 0x79, 0xFE, 
0x41, 0x4E, 0x3C, 0x49, 0x0C, 0x8E, 0x1D, 0xFC, 0x68, 0x29, 0x17, 0xE0, 0x00, 0x88, 0x13, 0x70, 
0x94, 0xBD, 0x18, 0x63, 0x27, 0x69, 0xCB, 0xEE, 0x82, 0x10, 0xF0, 0xA3, 0x71, 0x32, 0xDF, 0x3C, 
0xBE, 0x19, 0x8F, 0xC7, 0x1D, 0x9F, 0xBA, 0xF7, 0xE4, 0xEE, 0xF2, 0xCD, 0x62, 0x46, 0x6A, 0xD7, 
0xC8, 0xC9, 0xB8, 0x7F, 0x02, 0xE3, 0x13, 0x32, 0x6E, 0xC0, 0x31, 0x52, 0xD4, 0xCC, 0x58, 0x70, 
0x59, 0xE2, 0x5D, 0x49, 0x0F, 0x92, 0x5E, 0x8C, 0xEA, 0xAE, 0xA5, 0xF0, 0xD1, 0x8B, 0x55, 0x96, 
0xBC, 0xA6, 0x2F, 0xA6, 0xF4, 0xAE, 0x6E, 0x5A, 0xE6, 0x44, 0x2E, 0x21, 0x21, 0x85, 0x56, 0x0E, 
0x14, 0xDA, 0xCC, 0x67, 0x19, 0xF0, 0x0A, 0x82, 0x95, 0x13, 0x4E, 0xC2, 0xE4, 0xCE, 0x03, 0x32, 
0x63, 0x76, 0x43, 0xE6, 0x4F, 0x96, 0xE3, 0x34, 0x8A, 0x10, 0x92, 0x42, 0x7D, 0x20, 0x06, 0x64, 
0x96, 0x08, 0xB4, 0x4C, 0x48, 0x6D, 0xA0, 0xCC, 0x12, 0xCE, 0x1C, 0x1B, 0x5D, 0x18, 0x02, 0xEE, 
0x7C, 0xAE, 0x05, 0x77, 0x75, 0xC6, 0x61, 0x25, 0x0A, 0xA0, 0xF1, 0xE3, 0x02, 0x11, 0x4A, 0x38, 
0xC1, 0x24, 0xB5, 0x05, 0x93, 0x90, 0x5D, 0xBE, 0x40, 0x1A, 0xF6, 0x49, 0x34, 0xBE, 0xD9, 0x09, 
0xBC, 0x05, 0x13, 0xBF, 0x58, 0x8E, 0x02, 0xA5, 0x13, 0xA2, 0x58, 0x03, 0x59, 0xB2, 0x12, 0xB0, 
0x6E, 0xB5, 0x71, 0xC9, 0x4F, 0x3C, 0xAC, 0xDB, 0x48, 0xB0, 0x35, 0x80, 0x1B, 0xD8, 0x14, 0xD6, 
0xA6, 0x53, 0xDE, 0x08, 0xF5, 0x70, 0x39, 0xBB, 0x88, 0xCB, 0x45, 0x14, 0xDC, 0xBA, 0x9E, 0x4C, 
0xC6, 0x69, 0x2C, 0xD6, 0x38, 0xD7, 0x7C, 0x43, 0x0A, 0xC9, 0xAC, 0xCD, 0x12, 0x62, 0x3F, 0x08, 
0x45, 0x73, 0xE9, 0x81, 0x58, 0xC1, 0x21, 0x67, 0x86, 0xA2, 0x85, 0x40, 0x65, 0x2E, 0x56, 0x18, 
0x27, 0x58, 0x80, 0x19, 0xB4, 0x1B, 0x86, 0xCA, 0x9D, 0x28, 0x90, 0x50, 0x6C, 0x35, 0x20, 0xF8, 
0x8A, 0xB6, 0x24, 0x2E, 0x48, 0xDE, 0x61, 0x79, 0x0B, 0xEA, 0x74, 0x9B, 0x10, 0xA3, 0x25, 0x44, 
0x5C, 0x54, 0x28, 0xD4, 0x2A, 0x18, 0x7A, 0x39, 0xD8, 0x6D, 0x83, 0x82, 0xF2, 0x09, 0x09, 0x75, 
0x0C, 0x75, 0xAA, 0xC2, 0x26, 0x3A, 0x03, 0xD0, 0xA5, 0x3A, 0x28, 0x23, 0x2B, 0xD6, 0xE7, 0x78, 
0x3A, 0x19, 0x84, 0xC1, 0x92, 0x0A, 0x07, 0x4D, 0x6F, 0x1E, 0xBE, 0x31, 0x9E, 0xE6, 0xD1, 0xD8, 
0xB6, 0x4C, 0x0D, 0x9A, 0x92, 0xA9, 0x8A, 0x76, 0xC0, 0xE3, 0xC3, 0xAF, 0xE3, 0x34, 0x60, 0x58, 
0x14, 0x86, 0x3F, 0x29, 0x26, 0x18, 0xE7, 0xCF, 0xDD, 0x77, 0x5B, 0x6A, 0x4F, 0x8C, 0x50, 0x02, 
0x73, 0xDE, 0x04, 0xF0, 0xFE, 0x8B, 0xC7, 0x87, 0x5F, 0x0E, 0xBF, 0xCD, 0x9E, 0xEF, 0xC5, 0x22, 
0x31, 0xD8, 0xDF, 0x25, 0xB5, 0x16, 0xA5, 0x18, 0x42, 0x4E, 0x5E, 0xCD, 0xE9, 0x7D, 0xB1, 0xE7, 
0xF8, 0x1F, 0xFC, 0x36, 0x1F, 0x9D, 0xDB, 0xFA, 0x7D, 0xF4, 0x74, 0xB9, 0xFC, 0x3F, 0x6E, 0x4B, 
0x61, 0x9A, 0x35, 0x33, 0x27, 0xEF, 0x83, 0x6F, 0x51, 0x13, 0xA1, 0xE9, 0xF2, 0xC5, 0xF4, 0xE1, 
0xFC, 0xED, 0xF4, 0xD9, 0xB1, 0x98, 0xA9, 0x97, 0xA1, 0x5A, 0xD8, 0x39, 0x61, 0xE9, 0xBA, 0x0E, 
0xDF, 0xB0, 0x2F, 0x07, 0x47, 0xF1, 0xA0, 0xA0, 0x11, 0xC8, 0xE4, 0x67, 0xA0, 0xF5, 0x52, 0x52, 
0x09, 0x25, 0x1E, 0x89, 0x78, 0x3C, 0xF0, 0x4C, 0x68, 0xA9, 0xCD, 0x88, 0xAC, 0x6B, 0x64, 0x79, 
0x93, 0xD4, 0x20, 0xAA, 0xDA, 0x8D, 0xC8, 0xE5, 0x4B, 0xED, 0xA7, 0x9B, 0xBD, 0xED, 0xA0, 0xD9, 
0x32, 0xCE, 0x85, 0xAA, 0x46, 0xE4, 0x5A, 0xC4, 0x22, 0xF3, 0x9F, 0xBD, 0x9C, 0x3E, 0x38, 0xC8, 
0xCB, 0x1B, 0x05, 0x82, 0xAF, 0x04, 0xEE, 0xC1, 0x88, 0x74, 0xD4, 0x87, 0x2C, 0x05, 0xC7, 0xB6, 
0xC6, 0xBE, 0x7E, 0x27, 0x73, 0xE4, 0x45, 0x29, 0x3D, 0x0A, 0x77, 0x1B, 0x49, 0xAD, 0xA8, 0x14, 
0x43, 0x8D, 0x4B, 0x67, 0xB6, 0xA9, 0x23, 0x8D, 0xFE, 0x79, 0x2C, 0x1B, 0x83, 0x8C, 0x77, 0xE9, 
0x94, 0x38, 0x61, 0xD0, 0xC1, 0x67, 0xC0, 0x1C, 0xAE, 0x22, 0x4F, 0xB2, 0x9F, 0x5F, 0xCC, 0x28, 
0xF7, 0xCE, 0xE9, 0x2D, 0xF1, 0x5C, 0x1B, 0x8E, 0xB5, 0xCA, 0x35, 0x0A, 0x9B, 0x58, 0x19, 0x6A, 
0x18, 0x17, 0xDE, 0xF6, 0x35, 0x20, 0x39, 0x2B, 0x3E, 0x54, 0x46, 0x7B, 0xC5, 0x69, 0xEF, 0x6A, 
0xC8, 0x92, 0x44, 0x5B, 0x14, 0x28, 0xAD, 0xD0, 0x35, 0xD1, 0xAA, 0x90, 0xA2, 0xF8, 0x80, 0xDB, 
0xA8, 0x19, 0xB7, 0x0F, 0x71, 0x2F, 0x3D, 0xAB, 0xE0, 0xDC, 0xD9, 0xC5, 0xF2, 0xEC, 0x79, 0x8C, 
0xBC, 0x58, 0x62, 0x39, 0xBA, 0xE0, 0xBF, 0x67, 0x11, 0x33, 0x3A, 0x42, 0xE3, 0xDF, 0x59, 0xCC, 
0x1E, 0x47, 0x16, 0xB3, 0xC7, 0x7B, 0x2C, 0x7E, 0x55, 0xD7, 0x7E, 0x4C, 0xD3, 0xB5, 0x61, 0x6D, 
0xDB, 0x4D, 0x34, 0x0B, 0x45, 0x98, 0x51, 0x47, 0x34, 0xE2, 0x40, 0xC7, 0xD1, 0x87, 0xDC, 0x4B, 
0xE9, 0x05, 0xC7, 0x26, 0xB7, 0x75, 0xAE, 0x99, 0xE1, 0x74, 0x8B, 0x84, 0xF1, 0xDA, 0x59, 0xEF, 
0x22, 0x96, 0x5A, 0xBB, 0x23, 0xC3, 0x33, 0x88, 0x62, 0xA8, 0x93, 0x37, 0x98, 0xD4, 0x82, 0x73, 
0x50, 0xF4, 0x13, 0x4E, 0x8F, 0xE3, 0x67, 0x66, 0x05, 0xC6, 0xC6, 0x09, 0xFA, 0x12, 0x5F, 0x0E, 
0xBF, 0xEB, 0x13, 0x1A, 0xAF, 0x57, 0xE9, 0x7B, 0x2F, 0xE2, 0x3B, 0x3E, 0xD6, 0x19, 0xAD, 0xAA, 
0x49, 0xB8, 0xD5, 0xE6, 0xDA, 0x11, 0x4A, 0x16, 0x7A, 0x0D, 0x06, 0x38, 0xC9, 0x37, 0x64, 0x7B, 
0xAA, 0xC3, 0x6D, 0x69, 0x47, 0x69, 0x5A, 0x09, 0x57, 0xFB, 0xFC, 0x62, 0xA1, 0x9B, 0x34, 0x37, 
0x5E, 0xE9, 0x1A, 0x6F, 0x1E, 0x76, 0x70, 0x25, 0xBD, 0xF3, 0x80, 0x06, 0x07, 0x14, 0x3D, 0x24, 
0x93, 0x3B, 0x01, 0x21, 0x0F, 0x02, 0x14, 0x87, 0xDB, 0x6D, 0x72, 0xE5, 0xD2, 0xE5, 0x03, 0xBC, 
0xE3, 0xC8, 0x02, 0x65, 0xBE, 0x62, 0x72, 0x9C, 0xF6, 0x51, 0xC7, 0x69, 0x97, 0xFB, 0x64, 0x20, 
0x53, 0x18, 0xD1, 0x3A, 0x62, 0x4D, 0x91, 0x25, 0xEF, 0x6D, 0xFA, 0xFE, 0xA3, 0x07, 0xB3, 0x89, 
0xD7, 0xD5, 0xFB, 0x90, 0x7C, 0xDA, 0xE1, 0xC7, 0xF4, 0x84, 0xE2, 0xF0, 0x09, 0x55, 0x6E, 0x5D, 
0xDF, 0x57, 0x4A, 0xC3, 0x9D, 0x86, 0x4B, 0xFC, 0x4F, 0xF0, 0x03, 0x4A, 0x1D, 0xF3, 0xE0, 0x29, 
0x08, 0x00, 0x00, };


const uint8_t node_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xEB, 0x8D, 0x2C, 0x5D, 0x04, 0x03, 0x6E, 0x6F, 0x64, 0x65, 0x2E, 0x68, 
0x74, 0x6D, 0x6C, 0x00, 0x85, 0x52, 0x41, 0x92, 0xD4, 0x30, 0x0C, 0xFC, 0x8A, 0xCB, 0x27, 0x38, 
0xA4, 0x06, 0x98, 0x2A, 0x0E, 0x54, 0x92, 0xCB, 0x52, 0x50, 0x5C, 0xF6, 0x00, 0x2F, 0x50, 0x6C, 
0x25, 0x71, 0xAD, 0x63, 0x07, 0x45, 0xD9, 0xC9, 0xBC, 0x83, 0x17, 0x50, 0x1C, 0x78, 0xC8, 0x7C, 
0x0C, 0x79, 0x27, 0x93, 0x65, 0x33, 0x99, 0xDA, 0x83, 0x1D, 0x5B, 0x56, 0xBA, 0x5B, 0x2D, 0xE5, 
0xD6, 0x3D, 0x2A, 0xE3, 0x61, 0x18, 0x0A, 0x5D, 0xC5, 0x49, 0xC9, 0xCA, 0x7A, 0x72, 0x1D, 0xD0, 
0x51, 0x97, 0x6A, 0xF5, 0x9A, 0xB5, 0x08, 0x16, 0x49, 0x1D, 0x1C, 0xB7, 0x59, 0x15, 0x49, 0xCE, 
0xBA, 0xCC, 0xDB, 0xFD, 0xFF, 0x29, 0xEC, 0xD8, 0xA3, 0x92, 0xF0, 0xD0, 0x43, 0xB8, 0x3C, 0x78, 
0x08, 0x4D, 0x16, 0xA2, 0x45, 0x5D, 0xDE, 0x9F, 0x7E, 0xE5, 0xBB, 0xF4, 0x56, 0xE6, 0xBB, 0x76, 
0x2F, 0x9B, 0x50, 0x94, 0x79, 0x1D, 0xA9, 0x13, 0xBA, 0xDA, 0xA1, 0xB7, 0x03, 0xB2, 0x72, 0xB6, 
0xD0, 0x75, 0xAD, 0x95, 0x75, 0x03, 0x54, 0x1E, 0xED, 0x95, 0x14, 0xA1, 0xB7, 0x6B, 0x85, 0x14, 
0x0F, 0xAB, 0x88, 0x89, 0x3E, 0xEB, 0x6C, 0xF6, 0x51, 0xA5, 0xC3, 0x34, 0x64, 0xEF, 0x3F, 0xAC, 
0x12, 0x12, 0x6F, 0xD6, 0x50, 0x1C, 0x7B, 0x51, 0xEC, 0xA1, 0x42, 0xAF, 0x24, 0x54, 0xE8, 0xA4, 
0xF5, 0x9B, 0xDD, 0xAC, 0x02, 0xBA, 0x54, 0x45, 0xEC, 0x70, 0x29, 0xE3, 0xE9, 0x3F, 0xC1, 0x75, 
0xA1, 0x1F, 0xF9, 0x05, 0xB2, 0x89, 0x81, 0x29, 0x7A, 0xAD, 0x3A, 0x98, 0x3C, 0x86, 0x86, 0xDB, 
0x42, 0xEF, 0xDF, 0x69, 0xC5, 0xC7, 0x1E, 0x0B, 0xCD, 0x38, 0xB1, 0x56, 0x09, 0x70, 0x21, 0x94, 
0xC2, 0x9F, 0xCF, 0xBD, 0x07, 0x83, 0x6D, 0xF4, 0x16, 0x45, 0x11, 0x4E, 0x9F, 0xD4, 0x83, 0x63, 
0xD3, 0x62, 0xD0, 0x8A, 0xF0, 0xE7, 0xE8, 0x08, 0xED, 0x6E, 0xF6, 0xEF, 0x7A, 0x5F, 0xDB, 0x55, 
0xC7, 0xC8, 0xD2, 0xB9, 0x01, 0x1E, 0x31, 0x59, 0x50, 0x8D, 0xCC, 0x31, 0xCC, 0x3A, 0x9E, 0x2E, 
0x82, 0x1A, 0x83, 0xF1, 0xCE, 0x3C, 0x14, 0x3A, 0x65, 0xDD, 0x8B, 0x88, 0x37, 0x6F, 0xF5, 0x82, 
0xC1, 0x41, 0xC9, 0x7A, 0x9E, 0x8D, 0x6B, 0x67, 0xCE, 0xD8, 0x5F, 0x47, 0x20, 0x0B, 0xB4, 0x98, 
0x73, 0x06, 0x17, 0xCA, 0x59, 0xDC, 0xA5, 0xC5, 0x29, 0x32, 0x77, 0xFD, 0x7A, 0xC8, 0x6E, 0x0E, 
0xD6, 0x26, 0xEF, 0x71, 0x60, 0xEC, 0x74, 0xF9, 0xC3, 0xA5, 0x2F, 0xDC, 0x9C, 0xAE, 0x6D, 0x4B, 
0x5E, 0x77, 0xC3, 0x47, 0xB0, 0x9F, 0xB1, 0x86, 0xD1, 0xF3, 0xB0, 0xE1, 0xC8, 0x01, 0x28, 0xB8, 
0xD0, 0x6C, 0x29, 0x23, 0x94, 0x42, 0xB3, 0x1A, 0x0C, 0xC7, 0x64, 0xD9, 0x1D, 0x10, 0x61, 0x03, 
0xA4, 0xEE, 0x62, 0xA8, 0x5D, 0x33, 0x12, 0x9C, 0xFE, 0x9E, 0xFE, 0x44, 0x65, 0x51, 0x7D, 0x39, 
0xFD, 0xAE, 0xC8, 0x99, 0x8B, 0x78, 0x75, 0xF1, 0xED, 0x55, 0x71, 0x84, 0x95, 0x94, 0xB1, 0x21, 
0xCB, 0x8A, 0x00, 0xA4, 0x1B, 0xAA, 0x18, 0x88, 0x75, 0xF9, 0x1D, 0x5D, 0x70, 0xC6, 0x2D, 0xCD, 
0x52, 0xEB, 0x6E, 0xCD, 0x1D, 0x3A, 0x5F, 0xFE, 0x01, 0x3A, 0xE8, 0x2A, 0x73, 0x2A, 0x04, 0x00, 
0x00, };