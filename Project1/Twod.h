#pragma once
#include "package.h"
class Twod :
	public package
{
public:
	Twod(std::string, std::string, std::string, std::string, int, int, int,int);
	~Twod();
	double calculateCost();
	std::string getname();
	std::string getadd();
	std::string getcity();
	std::string getstate();
private:
	int two_cost;
};

