#include <iostream>
#include "JsonService.h"
#include "Weather.h"

int main() {
    JsonService js;
    Weather w = js.getWeather("weather.json");
}