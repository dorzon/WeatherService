#include <iostream>
#include "XmlService.h"
#include "Weather.h"

int main() {
    XmlService xs;
    xs.getWeather("weather.xml");
}