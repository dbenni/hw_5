#include "Client.h"
#include "BILL.h"
#include "Sales_associate.h"
#include "std_lib_facilities.h"
#include "factory.h"




void Client::setname(string x)
{
	name = x;
	temporder.set_clname(x);
}

void Client::setdate(string d)
{
	date = d;
	temporder.set_date(d);
}

void Client::addmodel(robot_model m)
{
	temporder.addmodel(m);
}

void Client::getmodel_info()
{
}

void Client::addbill()
{
	orders.push_back(temporder);
	ordertotal++;
}

void Client::addorderdbill(string name,string date, string id)
{
	int xm, b;
	string one, two;
		xm = ordertotal;
		for (b = 0; b < xm; xm++) {
			if ((orders[b].getclname() == name))
				orders[b].set_date(date);
			    orders[b].set_ordernum(id);
		}
}

void Client::updatorder(string x)
{
	int one, two, three;


}

void Client::updatestatusorder(string name, string desi)
{
	int x, x2;
	x = getordertotal();
	for(x2 = 0; x2 < x; x2++)
	{
		if (  ( orders[x2].getclname()  == name ) ) {
			orders[x2].setsalesdescri(desi);
			
		}
		 
	
	}
}


string Client::getname()
{
	string an;
	an = name;
	return an;
	
}

BILL Client::getbill(string ans2)
{
	int x, y;
	BILL xs;
	x = ordertotal;
	for (y = 0; y < x; y++) {
		if (orders[y].getclname() == ans2) {
			return orders[y];
		}

	}
}

void Client::finishbillorder(string y)
{
	int x = 0;
	int ship;
	int i;
	string test;
	x = getordertotal(); // Note this
	cout << "pleas type the number next to the shpping method you would like to select:" << "\n";
	cout << "1: nextday 7.00$ " << "\n";
	cout << "2: 2-3days 5.00$ " << "\n";
	cout << "3: standerd shipping 3.00$ " << "\n";
	cin >> test;
	if (test == "1")
		ship = 7;
	if (test == "2")
		ship = 5;
	if (test == "3")
		ship = 3;
	if (test != "1" && test != "2" && test != "3")
		ship = 3;

	for (i = 0; i < x; i++) {
		if (orders[i].getclname() == y) {
			orders[i].settax(ship);        // note this

		}
	}
}



void Client::printbills()
{
	bool one;
	string an, an2, an3;
	int x,i;
	x = getordertotal();
	for (i = 0; i < x; i++) {
		if (orders[i].getshipped() == true) {
			cout  << "Oder for: " << orders[i].getclname() << "\n"; // final
			cout << "  status: " << "Shipped";
			orders[i].billview();
		}
		if (orders[i].getpaid() == true) {                       // final piece of the puzzel
			cout << "Oder for: " << orders[i].getclname() << "\n";
			cout << "  status: " << "completed";
			orders[i].billview();
		}
	}
}

void Client::printorder()
{

	bool one;
	string an, an2, an3;
	int x, i;
	x = getordertotal();
	for (i = 0; i < x; i++) {
		if (orders[i].getshipped() == true) {
			cout << "Oder for: " << orders[i].getclname() << "\n";
			cout << "  status: " << "Shipped";
			orders[i].billview();
		}
	}
}

int Client::getordertotal()
{
	int x;
	x = ordertotal;
	return x;
}
