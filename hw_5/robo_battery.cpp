#include "robo_battery.h"
#include "std_lib_facilities.h"
#include <string.h>
 



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
	strcpy_s(descrip, x);
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

void robo_battery::battdump()
{
	cout << " Battery Name  " << name << "\n";
	cout << "Part Number  " << partn << "\n";
	cout << "Cost  " << cost << "\n";
	cout << "Energy  " << energy << "\n";
	cout << "Weight  " << weight << "\n";
	cout << "Short Description  " << "\n" << descrip << "\n";
}
