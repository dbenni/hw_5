#include "std_lib_facilities.h"
#include "robo_model.h"
#ifndef _BILL_H
#define _BILL_H 2016
class BILL   
{ 
public: 
	void set_saname(string);
	void set_clname(string);
	void set_date(string);
	void set_ordernum(string);
	string get_ordernum();
	void setprof(double);
	void setcos(double);
	void settax(double);
	void setship(double);
	string getsaname();
	string getclname();
	string getdate();
	double getcos();
	double getax();
	double getship();
	robot_model getmodel();
	void addmodel(robot_model);
	int bcountget();
	void settaxship( double shipping);
	bool getorder();
	bool getpaid();
	void updateship();
	void updateorder();
	void updatepaid();
	void setsalesdescri(string d);
	string getsalesdescri();
	void billview();
	bool getshipped();
	//void orderview(); 
	bool geteshiped();
	

private:
	string sa_name;
	string cl_name;
	string salesdescrip;
	string date_of_sale;
	string order_number;
	double profit_made{0};
	double total_cost{ 0 }, tax, shipping{0};
	robot_model temp;
	vector<robot_model> purchased;
	int purcount{0};  // this is how many robots are purchased;
	bool paid{ false }, orderd{ false }, shipped{false};
};
#endif
