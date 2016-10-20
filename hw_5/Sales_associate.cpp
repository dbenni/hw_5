#include "Sales_associate.h"
#include "Client.h"
#include "BILL.h"





void Sales_associate::addclient(Client x)
{

	clients.push_back(x);
}

void Sales_associate::resetclient(Client a)
{

	int x,  i;
	BILL temp;
	x = clientcount;
	for (i = 0; i < x; i++) {
		if (clients[i].getname() == a.getname() ) {
			 clients[i] = a; // check client get bill for the switch in client and sales

		}
	}
}

BILL Sales_associate::getclient_bill(string b)
{
	int x,   i;
		BILL temp;
	x = clientcount;
	for (i = 0; i < x; i++) {
		if (clients[i].getname() == b ) {
			return clients[i].getbill(b); // check client get bill for the switch in client and sales
			
		}
	} 
		return temp;
}

void Sales_associate::orderparts(string a)
{
	string sub, sub2, sub3;
	int x,i;
	char b[500];
	cout << "Enter the date: in (mm-dd-yy) format no spaces;" << "\n";
	cin >> sub;
	cout << "Enter a order number no spaces" << "\n";
	cin >> sub3;
	x = clientcount;
	for (i = 0; i < x; i++) {
		if (clients[i].getname() == a) {
		                                  // updatebill() for clients needed
		clients[i].addorderdbill(a, sub, sub3);
		 
		cout << "type in sort description of sale:" << "\n";
		                                  // updatebill() for clients needed
											// so we can  update the bill an order it and write a description
			cin.getline(b, 500);
			cin.getline(b, 500);
			sub2 = sub2 + b;
			clients[i].updatestatusorder(clients[i].getname(), sub2);
		}

	}
	 
}

void Sales_associate::setname( string answer)
{
	SA_name = answer;
}

string Sales_associate::getsaname()
{
	string x;
	x = SA_name;
	return x;
}

void Sales_associate::printsales_report()
{
}

void Sales_associate::printorders()
{
}

Client Sales_associate::getclient(string ans)
{
	int test, i;
		test = getclientcount();
		for (i = 0; i < test; i++) {
			if (clients[i].getname() == ans)
				return clients[i];
		}
	
}

int Sales_associate::getclientcount()
{
	int x;
	x = clientcount;
	return x;
}

string Sales_associate::getclname(string x)
{
	int b, c;
	string o;
	b = clientcount;
	for (c = 0; c < b; c++) {
		if (clients[c].getname() == x)
		{
			o = clients[c].getname();
		}
	}
	return o;
		
}

