#include"std_lib_facilities.h"
#ifndef _ROBO_ARM_H
#define _ROBO_ARM_H 2016
class robo_arm
{
public:
	void setname(string n);
	void setpartn(string pn);
	void setweight(string w);
	void setdescrip(char* x);
	void setcost(double c); 
	void setpower(string e);
	string getpower();
	string getname();
	string getpartn();
	string getweight();
	char* getdescrip();
	double getcost();
	void armdump();



private:
	string name, partn, weight, Power;
	double cost;
	char descrip[250];
};
#endif

