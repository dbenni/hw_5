#include "BILL.h"
#include "Client.h"
#include "std_lib_facilities.h"
#ifndef _SALES_ASSOCIATE_H
#define _SALES_ASSOCIATE_H 2016
class Sales_associate
{
public:
	void addclient(Client);
	void resetclient(Client);
	BILL getclient_bill(string);
	void orderparts(string);
	void setname(string);
	string getsaname();
	void printsales_report();
	void printorders();
	Client getclient(string);
	int getclientcount();
	string getclname(string x);
	//void updateorder();
	//void updateclientbill(string);
	
private:
	vector<Client> clients;
	string SA_name;
	int clientcount;

	
};
#endif
