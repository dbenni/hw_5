#include "std_lib_facilities.h"
#include "robo_arm.h"
#include "robo_battery.h"
#include "robo_head.h"
#include "robo_motor.h"
#include "robo_torso.h"
#ifndef _ROBO_MODEL_H
#define _ROBO_MODEL_H 2016
class robot_model
{
public:   
	  
	void setname(); 
	void setdescrip(string x); 
	string getdescrip();
	void setid();
	void setprice( );
	void set_totcost();
	void setprofit();
	void setarm(robo_arm a, robo_arm z);
	void setbattery(robo_battery b);
	void sethead(robo_head h);
	void setmotor(robo_motor m);
	void settorso(robo_torso t);
	string getname();
	string getid();
	double getcost();
	double getprice();
	double getprofit();
	robo_arm getarm();
	robo_arm getarm2();
	robo_battery getbattery();
	robo_head gethead();
	robo_motor getmotor();
	robo_torso gettorso();
	void modeldump();
	void orderdump();
	void facdump();
	void modelpartsdump();
	void setax();
	void setship(double);
	double gettax();
	double getship();
	double gettotprof();

private:
	string name, id_num;
	double price{0};
	double sim{0};
	double total_profit;
	double total_cost{0};
	double profit{0};
	string descrip;
	robo_arm arm, arm2;
	robo_battery battery;
	robo_head head;
	robo_motor motor;
	robo_torso torso;
	double tax{0};
	double ship{0};
};
#endif