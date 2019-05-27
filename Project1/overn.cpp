#include "overn.h"
#include<iostream>
#include<string>
using namespace std;


overn::overn(std::string nam, std::string ad, std::string cty, std::string stte, int stamp, int wei, int cost, int ovc)
	:package(nam, ad, cty, stte, stamp, wei, cost)
{
	over_cost = ovc;
}


overn::~overn()
{
}

double overn::calculateCost()
{
	return (package::costper() + over_cost)*package::getweight();
}
std::string overn::getname()
{
	return package::getname();
}
std::string overn::getadd()
{
	return package::getadd();
}


