#include "Env.h"
#include <stdio.h>
#include <string.h>

#define STRX(arg)     #arg
#define STR(arg)      STRX(arg)

std::string Env::getHostname()
{
#ifdef ESP_HOSTNAME
   #define ESP_HOSTNAME_STRING STR(ESP_HOSTNAME)
   static_assert(strlen(ESP_HOSTNAME_STRING) > 5, "Hostname must be at least 4 characters!");
   return ESP_HOSTNAME_STRING;
#else
    #error Please define ESP_HOSTNAME as environment variable!
#endif
}

std::string Env::getWiFiClientSsid()
{
#ifdef ESP_WIFI_CLIENT_SSID
   #define ESP_WIFI_CLIENT_SSID_STRING STR(ESP_WIFI_CLIENT_SSID)
   static_assert(strlen(ESP_WIFI_CLIENT_SSID_STRING) > 5, "WiFi client SSID must be at least 4 characters!");
   return ESP_WIFI_CLIENT_SSID_STRING;
#else
    #error Please define ESP_WIFI_CLIENT_SSID as environment variable!
#endif
}

std::string Env::getWiFiClientPw()
{
#ifdef ESP_WIFI_CLIENT_PASS
   #define ESP_WIFI_CLIENT_PASS_STRING STR(ESP_WIFI_CLIENT_PASS)
   static_assert(strlen(ESP_WIFI_CLIENT_PASS_STRING) > 8, "WiFi client password must be at least 7 characters!");
   return ESP_WIFI_CLIENT_PASS_STRING;
#else
    #error Please define ESP_WIFI_CLIENT_PASS as environment variable!
#endif
}

std::string Env::getWiFiStaSsid()
{
#ifdef ESP_WIFI_STATION_SSID
   #define ESP_WIFI_STATION_SSID_STRING STR(ESP_WIFI_STATION_SSID)
   static_assert(strlen(ESP_WIFI_STATION_SSID_STRING) > 5, "WiFi station SSID must be at least 4 characters!");
   return ESP_WIFI_STATION_SSID_STRING;
#else
    #error Please define ESP_WIFI_STATION_SSID as environment variable!
#endif
}

std::string Env::getWiFiStaPw()
{
#ifdef ESP_WIFI_STATION_PASS
   #define ESP_WIFI_STATION_PASS_STRING STR(ESP_WIFI_STATION_PASS)
   static_assert(strlen(ESP_WIFI_STATION_PASS_STRING) > 8, "WiFi station password must be at least 7 characters!");
   return ESP_WIFI_STATION_PASS_STRING;
#else
    #error Please define ESP_WIFI_STATION_PASS as environment variable!
#endif
}
