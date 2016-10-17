#include"std_lib_facilities.h"
#include "factory.h"
#include "Client.h"
#include "BILL.h"
#include "Sales_associate.h"


class ROBO_SHOP
{
public:
	void PM_menu();
	void BC_menu();
	void SA_menu();
	void PB_menu();
	void turnon();
	void addopenclient(Client);
	Client cllogin();
private:
	factory shopfactory;
	vector <Client> clinets;
	vector <Sales_associate> sales;
	int salescount;
	double total_cost; 
	double total_profit;
	Sales_associate temp_sa;
	Client temp_client;


};

