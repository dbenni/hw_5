#include "robo_head.h"
#include "std_lib_facilities.h" 
#include <iostream>
#include <string>
#include <string.h> 
 

void robo_head::setname(string n) 
{
	name = n;
} 

void robo_head::setpartn(string pn)
{
	partn = pn;
}  
 
void robo_head::setweight(string w)
{ 
	weight = w; 
}

void robo_head::setdescrip(string x)
{
	descrip = x;

}

void robo_head::setcost(double c)
{
	cost = c;
}

string robo_head::getname()
{
	string x;
	x = name;
	return x;
}

string robo_head::getpartn()
{
	string pn;
	pn = partn;
	return pn;
}

string robo_head::getweight()
{
	string w;
	w = weight;
	return w;
}

string robo_head::getdescrip()
{
	string a;
	a = descrip;
	return a;
}

double robo_head::getcost()
{
	double c;
	c = cost;
	return c;
}

void robo_head::headdump()
{
	cout << "Head Unit Name: " << name << "\n";
	cout << "Part Number  " << partn << "\n";
	cout << "Cost  " << cost << "\n";
	cout << "Weight  " << weight << "\n";
	cout << "Short Description  " << "\n" << descrip << "\n";
}
