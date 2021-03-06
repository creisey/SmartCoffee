#ifndef __WEB_GLOBAL__
#define __WEB_GLOBAL__

#define DEVICENAME  "SmartCoffee"


enum INTERFACETYPE { MQTT, WEBPAGE };

const char ssid[]     = "";
const char password[] = "";

#define FHEM_SERVER_URL                "http://xxx"
#define FHEM_POST_MESSAGE_ON           "attr notify_SmartCoffee disable 1;set SmartCoffee on;attr notify_SmartCoffee disable 0"
#define FHEM_POST_MESSAGE_OFF          "attr notify_SmartCoffee disable 1;set SmartCoffee off;attr notify_SmartCoffee disable 0"

#define MQTT_BROCKER_IP                "xx"
#define MQTT_PORT                       1883
#define MQTT_PASSWORD                   "xxx"

// extern String getValueForInterface  (String name);
extern void   setValueByInterface   (String name, String value);
extern void   pushValueToInterface (String name, String value);

#endif
