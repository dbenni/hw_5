#include "std_lib_facilities.h"

#ifndef _ROBO_MOTOR_H
#define _ROBO_MOTOR_H 2016
class robo_motor
{
public:
	void setname(string n);
	void setpartn(string pn);
	void setweight(string w);
	void setdescrip(char* x);
	void setcost(double c);
	void setpower(string e); 
	void setmph(string m);
	string getmph();
	string getpower();
	string getname();
	string getpartn();
	string getweight();
	char* getdescrip();
	double getcost();
	void motordump();



private:
	string name, partn, weight, Power, MPH;
	double cost;
	char descrip[250];
};
#endif
