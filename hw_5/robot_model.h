#include "std_lib_facilities.h"
#include "robo_arm.h"
#include "robo_battery.h"
#include "robo_head.h"
#include "robo_motor.h"
#include "robo_torso.h"
class robot_model
{
public:
	void setname();
	void setid();
	void setprice();
	void set_totcost();
	void setprofit();
	void setarm(robo_arm a);
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
	robo_battery getbattery();
	robo_head gethead();
	robo_motor getmotor();
	robo_torso gettorso();
	
private:
	string name[100],id_num[100];
	double price;
	double total_cost;
	double profit;
	robo_arm arm,arm2;
	robo_battery battery;
	robo_head head;
	robo_motor motor;
	robo_torso torso;
	

};

