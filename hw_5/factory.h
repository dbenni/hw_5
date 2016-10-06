#include"std_lib_facilities.h"
#include"robo_arm.h"
#include"robo_battery.h"
#include"robo_head.h"
#include"robo_torso.h"
#include"robo_motor.h"
class factory
{
public:
	int factory_menu();
	void add_head(robo_head x);
	void add_arm(robo_arm a);
	void add_torso(robo_torso t);
	void add_motor(robo_motor m);
	void add_batt(robo_battery b);
	void build_robopart(int num);
	void make_batt();
	void set_batt(robo_battery t);

private:
	vector<robo_arm> arm;
	vector <robo_battery> battery;
	vector <robo_head> head;
	vector <robo_torso> torso;
	vector <robo_motor> motor;
	int arm_tot = 0;
	int batt_tot = 0;
	int head_tot = 0;
	int torso_tot = 0;
	int motor_tot = 0;
	robo_arm r_arm;
	robo_battery r_batt;
	robo_head r_head;
	robo_motor r_motor;
	robo_torso r_torso;

};

