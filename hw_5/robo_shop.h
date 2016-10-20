#include"std_lib_facilities.h"
#include "factory.h"
#include "BILL.h"
#include "robo_head.h"
#include "robo_arm.h"
#include "robo_battery.h"
#include "robo_model.h"
#include "robo_motor.h"
#include "robo_torso.h"



#ifndef _ROBO_SHOP_H
#define _ROBO_SHOP_H 2016
class ROBO_SHOP
{
public:
	void PM_menu();
	void BC_menu(); 
	void SA_menu();
	void PB_menu();
	void turnon();
	void addbill(BILL x);
private:
	factory shopfactory;
	vector <string> sales;
	vector <BILL> bills;
	int billcount{0};
	int salescount{0};
	double total_cost{0};
	double total_profit{0};
	BILL tempbill;

};
#endif
