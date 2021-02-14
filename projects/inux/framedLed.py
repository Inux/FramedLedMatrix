Import("env")

env.Append(CPPDEFINES=[
    ("ESP_HOSTNAME", "FramedLed"),
    ("ESP_WIFI_CLIENT_SSID", "unityseekersIoT"),
    ("ESP_WIFI_CLIENT_PASS", "unityseekersIoT"),
    ("ESP_WIFI_STATION_SSID", "FramedLedAp"),
    ("ESP_WIFI_STATION_PASS", "FramedLedApPw")
])
