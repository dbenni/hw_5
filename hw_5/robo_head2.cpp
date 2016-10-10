#include "robo_head.h"

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

void robo_head::setdescrip(char * x)
{
	strcpy(descrip, x);

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

char * robo_head::getdescrip()
{
	char* a;
	strcpy(a , descrip);
	return a;
}

double robo_head::getcost()
{
	double c;
	c = cost;
	return c;
}
