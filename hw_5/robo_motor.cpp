#include "robo_motor.h"



void robo_motor::setname(string n)
{
	name = n;
}

void robo_motor::setpartn(string pn)
{
	partn = pn;
}

void robo_motor::setweight(string w)
{
	weight = w;
}

void robo_motor::setdescrip(char * x)
{
	strcpy_s(descrip, x);
}

void robo_motor::setcost(double c)
{
	cost = c;
}

void robo_motor::setpower(string e)
{
	Power = e;
	Power = Power + " Watts";
}


string robo_motor::getpower()
{
	string x;
	x = Power;
	return x;
}
void robo_motor::setmph(string m) {
	MPH = m;
}
string robo_motor::getmph() {
	string m;
	m = MPH;
	return m;
}

string robo_motor::getname()
{
	string n;
	n = name;
	return n;
}

string robo_motor::getpartn()
{
	string pn;
	pn = partn;
	return pn;
}

string robo_motor::getweight()
{
	string w;
	w = weight;
	return w;
}

char * robo_motor::getdescrip()
{
	char* a = descrip;

	return a;
}

double robo_motor::getcost()
{
	double c;
	c = cost;
	return c;
}
