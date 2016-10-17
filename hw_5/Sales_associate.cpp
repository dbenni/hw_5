#include "Sales_associate.h"
#include "Client.h"
#include "BILL.h"





void Sales_associate::addclient(Client x)
{

	clients.push_back(x);
}

BILL Sales_associate::getclient_bill(string b)
{
	int x,  two, i;
		BILL temp;
	x = clientcount;
	for (i = 0; i < x; i++) {
		if (clients[i].getname() == b ) {
			return clients[i].getbill(b); // check client get bill for the switch in client and sales
			
		}
	}
}

void Sales_associate::orderparts(string a)
{
	string sub, sub2, sub3;
	int x,i;
	char b[500];
	cout << "Enter the date: in (mm-dd-yy) format no spaces;" << "\n";
	cin >> sub;
	x = clientcount;
	for (i = 0; i < x; i++) {
		if (clients[i].getname() == a) {
		                                  // updatebill() for clients needed
		clients[i].addorderdbill(a, sub);
		 
		cout << "type in sort description of sale:" << "\n";
		                                  // updatebill() for clients needed
											// so we can  update the bill an order it and write a description
			cin.getline(b, 500);
			cin.getline(b, 500);
			sub2 = sub2 + b;
			clients[i].updatestatusorder(clients[i].getname, sub2);
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

