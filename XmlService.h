#pragma once
#include "Service.h"
#include "packages/pugixml.1.14.0/build/native/include/pugixml.hpp"
#include <string>

using namespace std;
using namespace pugi;

class XmlService: public Service {
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};

