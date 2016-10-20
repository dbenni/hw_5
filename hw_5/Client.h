#include "std_lib_facilities.h"
#include "robo_model.h"
#include "BILL.h"
#ifndef _CLIENT_H
#define _CLIENT_H 2016
class Client
{
public:
	void setname(string);
	void setdate(string);
	void addmodel(robot_model);
	void getmodel_info();  
	void addbill();  
	void addorderdbill(string, string, string); 
	void updatorder(string x);
	void Client::updatestatusorder(string, string);
	string getname(); 
	BILL getbill(string);
	void finishbillorder(string);
	void printbills();
	void printorder();
	int getordertotal();
private:
	string name, date;
	vector<BILL> orders;
	BILL temporder;
	int ordertotal{ 0 };
	
	
};
#endif
