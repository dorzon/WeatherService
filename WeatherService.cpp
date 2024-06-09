#include <iostream>
#include "JsonService.h"
#include "Weather.h"

int main() {
    JsonService js;
    Weather wj = js.getWeather("weather.json");
}