#include "package.h"
#include<iostream>
#include<string>
using namespace std;


package::package(std::string nam, std::string ad, std::string cty, std::string stte, int stamp, int wei, int cost)
{
	name = nam;
	add = ad;
	city = cty;
	state = stte;
	stampnumber = stamp;
	if (wei <= 0){ cout << "重量应为正值" << endl; }
	else if (wei > 0) { weight = wei; }
	if (cost <= 0){ cout << "费用应为正值" << endl; }
    else if (cost > 0){ cost_per = cost; }

}


package::~package()
{
}

double package::calculateCost()
{
	return weight*cost_per;
}
int package::getweight()
{
	return weight;
}

int package::costper()
{
	return cost_per;
}
std::string package::getname()
{
	return name;
}
std::string package::getadd()
{
	return add;
}
std::string package::getcity()
{
	return city;
}
std::string package::getstate()
{
	return state;
}
