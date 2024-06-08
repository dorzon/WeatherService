#pragma once
#include <string>

using namespace std;

class Weather {
private:
	string city;
	double lon;
	double lat;
	double temperature;
	string weather;
	double windSpeed;
	int clouds;
public:
	Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) {
		this->city = city;
		this->lon = lon;
		this->lat = lat;
		this->temperature = temperature;
		this->weather = weather;
		this->windSpeed = windSpeed;
		this->clouds = clouds;
	}
};

