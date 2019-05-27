#pragma once
#include<string>

class package
{
public:
	package(std::string,std::string,std::string,std::string,int,int,int);
	~package();
	double calculateCost();
	int getweight();
	int costper();
	std::string getname();
	std::string getadd();
	std::string getcity();
	std::string getstate();
private:
	std::string name;
	std::string add;
	std::string city;
	std::string state;
	int stampnumber;
	int weight;
	int cost_per;
};

