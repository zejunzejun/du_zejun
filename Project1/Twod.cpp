#include "Twod.h"
#include<iostream>
#include<string>
using namespace std;


Twod::Twod(std::string nam, std::string ad, std::string cty, std::string stte, int stamp, int wei, int cost, int twoc)
	:package(nam,ad,cty,stte,stamp,wei,cost)
{
	two_cost = twoc;
}


Twod::~Twod()
{
}
double Twod::calculateCost()
{
	return package::calculateCost() + two_cost;
}
std::string Twod::getname()
{
	return package::getname();
}
std::string Twod::getadd()
{
	return package::getadd();
}




