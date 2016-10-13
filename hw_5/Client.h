#pragma once
class Client
{
public:
	void setname(); 
	void addbill(); 
	void addpaidbill(); 
	void getname(); 
	void getbill();
private:
	int name;
	vector<bill> outstandingbills;
	vecotr<bill> paid;
};

