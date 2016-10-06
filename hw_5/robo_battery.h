#include "std_lib_facilities.h"
#ifndef _ROBO_BATTERY_H
#define _ROBO_BATTERY_H 2016
class robo_battery
{
public:
	void setname(string n);
	void setpartn(string pn);
	void setweight(string w);
	void setdescrip(char* x);
	void setcost(double c);
	string getname();
	string getpartn();
	string getweight();
	char* getdescrip();
	double getcost();



private:
	string name, partn, weight,energy;
	double cost;
	char descrip[250];

};
#endif