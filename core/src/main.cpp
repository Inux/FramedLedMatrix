#include <Env.h>
#include <ESP8266WiFi.h>
#include <FramedLed.h>

FramedLed led;

void setup()
{
    led.start();

    //WiFi.hostname(Env::getHostname().c_str());
    //WiFi.mode(WIFI_STA);
    //WiFi.begin(Env::getWiFiClientSsid().c_str(), Env::getWiFiClientPw().c_str());
    //if (WiFi.waitForConnectResult() != WL_CONNECTED) {
    //    WiFi.mode(WIFI_AP_STA);
    //    WiFi.begin(Env::getWiFiStaSsid().c_str(), Env::getWiFiStaPw().c_str());
    //    return;
    //}
}

void loop()
{
    led.update();
}
