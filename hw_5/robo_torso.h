#include"std_lib_facilities.h"
#include"robo_battery.h"
#ifndef _ROBO_TORSO_H
#define _ROBO_TORSO_H 2016
class robo_torso
{
public:  
	void setname(string n);
	void setpartn(string pn);
	void setweight(string w);
	void setdescrip(string x);
	void setcost(double c); 
	string getname();  
	string getpartn();
	string getweight();   
	string getdescrip(); 
	double getcost();
	void setbatn(int i);
	int getbatn();
	robo_battery one, two, three;
	void torsodump();



private:
	string name, partn, weight;
	double cost{0};
	string descrip;
	int batnum{0};
	

};
#endif

