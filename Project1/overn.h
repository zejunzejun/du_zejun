#pragma once
#include "package.h"
class overn :
	public package
{
public:
	overn(std::string, std::string, std::string, std::string, int, int, int, int);
	~overn();
	double calculateCost();
	std::string getname();
	std::string getadd();
	std::string getcity();
	std::string getstate();
private:
	int over_cost;
};
//#endif // PACKAGE_H
