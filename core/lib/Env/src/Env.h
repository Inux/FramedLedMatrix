#include <string>

class Env {
public:
    static std::string getHostname();
    static std::string getWiFiClientSsid();
    static std::string getWiFiClientPw();
    static std::string getWiFiStaSsid();
    static std::string getWiFiStaPw();
};
