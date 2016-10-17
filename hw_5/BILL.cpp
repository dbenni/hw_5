#include "BILL.h"
#include "std_lib_facilities.h"





void BILL::set_saname(string x)
{
	sa_name = x;
}

void BILL::set_clname(string c)
{
	cl_name = c;
}

void BILL::set_date(string d)
{
	date_of_sale = d;
}

void BILL::setprof(double p)
{
	profit_made = p;
}

void BILL::setcos(double co)
{
	total_cost = co;
}

void BILL::settax(double t)
{
	tax = t;
}

void BILL::setship(double s)
{
	shipping = s;
}

string BILL::getsaname()
{
	string a;
	a = sa_name;
	return a;
}

string BILL::getclname()
{
	string b;
	b = cl_name;
	return b;
}

string BILL::getdate()
{
	string d;
	d = date_of_sale;
	return d;
}

double BILL::getcos()
{
	double co;
	co = total_cost;
	return co;
}

double BILL::getax()
{
	double t;
	t = tax;
	return t;

}

double BILL::getship()
{
	double s;
	s = shipping;
	return s;
}

robot_model BILL::getmodel()
{
	return robot_model();
}

void BILL::addmodel(robot_model x)
{
	purchased.push_back(x);
	purcount++;
}

int  BILL::bcountget()
{
	int x;
	x = purcount;
	return x;
}

void BILL::settaxship(string name, int shipping) // this may not be needed
{
	int x = 0;
	double sh = (double)shipping;
	string b;
	for(x = 0; x < purcount; x++) {
		if(name == purchased[x].getname) {
			purchased[x].setship(sh);
			purchased[x].setax();
			cout << "Order for " << cl_name << "\n";
			purchased[x].orderdump();
		}

		

	}
}

bool BILL::getorder()
{
	return orderd;
}

bool BILL::getpaid()
{
	return paid;
}

void BILL::updateorder()
{
	orderd = true;
}

void BILL::updatepaid()
{
	paid = true;
}

void BILL::setsalesdescri(string d)
{
	salesdescrip = d;
}

string BILL::getsalesdescri() 
{
	string d;
	d = salesdescrip;
	return d;
}
