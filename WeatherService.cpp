#include <iostream>
#include "JsonService.h"
#include "XmlService.h"
#include "Weather.h"

int main() {
    JsonService js;
    Weather wj = js.getWeather("weather.json");
    XmlService xs;
    Weather wx = xs.getWeather("weather.xml");
}