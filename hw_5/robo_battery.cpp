#include "robo_battery.h"
#include "std_lib_facilities.h"




void robo_battery::setname(string n)
{
	name = n;
}

void robo_battery::setpartn(string pn)
{
	partn = pn;
}

void robo_battery::setweight(string w)
{
	weight = w;
}

void robo_battery::setdescrip(char * x)
{
	strcpy(descrip, x);
}

void robo_battery::setcost(double c)
{
	cost = c;
}

void robo_battery::setenergy(string e)
{
	energy = e;
	energy = energy + " kilowatts";
}

string robo_battery::getenergy()
{
	string e;
	e = energy;
	return e;
}

string robo_battery::getname()
{
	string n;
	n = name;
	return n;
}

string robo_battery::getpartn()
{
	string pn;
	pn = partn;
	return pn;
}

string robo_battery::getweight()
{
	string w;
	w = weight;
	return w;
}

char * robo_battery::getdescrip()
{
	char* a = descrip;

	return a;
}

double robo_battery::getcost()
{
	double c;
	c = cost;
	return c;
}
