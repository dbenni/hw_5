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

void robo_motor::setdescrip(string x)
{
	descrip = x;
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

string robo_motor::getdescrip()
{
	string a;
	 a = descrip;

	return a;
}

double robo_motor::getcost()
{
	double c;
	c = cost;
	return c;
}

void robo_motor::motordump()
{
	cout << " Loco Motor Name:  " << name << "\n";
	cout << "Part Number:  " << partn << "\n";
	cout << "Cost:  " << cost << "\n";
	cout << "Power:  " << Power << "\n";
	cout << "Max speed:  " << MPH << "\n";
	cout << "Weight:  " << weight << "\n";
	cout << "Sort Discription:  " << "\n" << descrip << "\n";
}
