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

void robo_torso::setdescrip(string x)
{
	descrip = x;

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

string robo_torso::getdescrip()
{
	string a;
	 a = descrip;

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

void robo_torso::torsodump()
{
	cout << "Title  " << name << "\n";
	cout << "Part Number  " << partn << "\n";
	cout << "Cost  " << cost << "\n";
	cout << "Weight  " << weight << "\n";
	cout << "Short Description  " << "\n" << descrip << "\n";
	cout << "\n";
	if (batnum == 1) {
		cout << "Battery1:  " << "\n";
		one.battdump();
	}
	else if (batnum == 2) {
		cout << "Battery1:" << "\n";
		one.battdump();
		cout << "Battery2:" << "\n";
		two.battdump();
	}
	else if (batnum == 3) {
		cout << "Battery1:" << "\n";
		one.battdump();
		cout << "Battery2:" << "\n";
		two.battdump();
		cout << "Battery3:" << "\n";
		three.battdump();

	}
}
