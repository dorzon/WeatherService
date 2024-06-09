#include "JsonService.h"

Weather JsonService::getWeather(std::string s) {
    ifstream reader(s);
    if (!reader)
        throw exception("error");

    json j;
    j = json::parse(reader);
    std::string city = j["name"]; //  Киров
    double lon = j["coord"]["lon"]; // 49.6601
    double lat = j["coord"]["lat"]; // 58.5966  
    double temperature = j["main"]["temp"]; // 5.69
    std::string weather = j["weather"]["main"]; // дождь
    double windSpeed = j["wind"]["speed"]; // 4.27
    int clouds = j["clouds"]["all"]; // 100
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}

