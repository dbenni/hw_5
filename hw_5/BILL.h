#include "std_lib_facilities.h"
#include "robo_model.h"
class BILL
{
public:
	void set_saname(string);
	void set_clname(string);
	void set_date(string);
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
	void settaxship(string name, int shipping);
	bool getorder();
	bool getpaid();
	void updateorder();
	void updatepaid();
	void setsalesdescri(string d);
	string getsalesdescri();
	bool getship(); 
	void updateship();

private:
	string sa_name;
	string cl_name;
	string salesdescrip;
	string date_of_sale;
	double profit_made;
	double total_cost,tax,shipping;
	robot_model temp;
	vector<robot_model> purchased;
	int purcount{0};  // this is how many robots are purchased;
	bool paid{ false }, orderd{ false }, shipped{false};
};

