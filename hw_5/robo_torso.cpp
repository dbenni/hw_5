#include "robo_torso.h"
#include "std_lib_facilities.h"
#include "robo_battery.h"


void robo_torso::setname(string n)
{
	name = n;
}

void robo_torso::setpartn(string pn)
{
	partn = pn;
}

void robo_torso::setweight(string w)
{
	weight = w;
}

void robo_torso::setdescrip(char * x)
{
	strcpy_s(descrip, x);

}

void robo_torso::setcost(double c)
{
	cost = c;
}

string robo_torso::getname()
{
	string x;
	x = name;
	return x;
}

string robo_torso::getpartn()
{
	string pn;
	pn = partn;
	return pn;
}

string robo_torso::getweight()
{
	string w;
	w = weight;
	return w;
}

char * robo_torso::getdescrip()
{
	char* a = descrip;

	return a;
}

double robo_torso::getcost()
{
	double c;
	c = cost;
	return c;
}


void robo_torso::setbatn(int i)
{
	batnum = i;
}

int robo_torso::getbatn()
{
	int i;
	i = batnum;
	return i;
}
