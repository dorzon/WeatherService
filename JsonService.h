#pragma once
#include <fstream>
#include "Service.h"
#include "nlohmann/json.hpp"

using nlohmann::json;
using namespace std;

class JsonService : public Service {
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

