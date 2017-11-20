/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME    "BenDeLathouwer"
#define IO_KEY         "0273a4c6c5c6408e8f8782fb0c8f5863"



#define WIFI_SSID       "The Hefty Network"
#define WIFI_PASS       "0208196700"

// comment out the following two lines if you are using fona or ethernet
#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);



