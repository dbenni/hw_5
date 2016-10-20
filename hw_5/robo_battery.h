#include "std_lib_facilities.h"
#ifndef _ROBO_BATTERY_H
#define _ROBO_BATTERY_H 2016
class robo_battery
{
public: 
	void setname(string n);  
	void setpartn(string pn);  
	void setweight(string w);  
	void setdescrip(string x);
	void setcost(double c);
	void setenergy(string e); 
	string getenergy();
	string getname();
	string getpartn();
	string getweight();
	string getdescrip();
	double getcost();
	void  battdump();



private:
	string name, partn, weight,energy;
	double cost{0};
	string descrip;

};
#endif