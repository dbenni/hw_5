#include "robo_arm.h"
#include "std_lib_facilities.h"



void robo_arm::setname(string n)
{
	name = n;
}

void robo_arm::setpartn(string pn)
{
	partn = pn;
}

void robo_arm::setweight(string w)
{
	weight = w;
}

void robo_arm::setdescrip(char * x)
{
	strcpy_s(descrip, x);
}

void robo_arm::setcost(double c)
{
	cost = c;
}

void robo_arm::setpower(string e)
{
	Power = e;
	Power = Power + " Watts";
}


string robo_arm::getpower()
{
	string x;
	x = Power;
	return x;
}

string robo_arm::getname()
{
	string n;
	n = name;
	return n;
}

string robo_arm::getpartn()
{
	string pn;
	pn = partn;
	return pn;
}

string robo_arm::getweight()
{
	string w;
	w = weight;
	return w;
}

char * robo_arm::getdescrip()
{
	char* a = descrip;

	return a;
}

double robo_arm::getcost()
{
	double c;
	c = cost;
	return c;
}
