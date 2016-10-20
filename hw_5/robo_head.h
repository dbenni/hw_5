#include "std_lib_facilities.h"

#ifndef _ROBO_HEAD_H
#define _ROBO_HEAD_H 2016 



class robo_head
{
public:   
	void setname(string n);
	void setpartn(string pn);  
	void setweight(string w); 
	void setdescrip(string);
	void setcost(double c);
	string getname();
	string getpartn();
	string getweight();
	string getdescrip();
	double getcost();
	void headdump();

	

private:
	string name, partn, weight;
	double cost{0};
	string descrip;
	


};
#endif
