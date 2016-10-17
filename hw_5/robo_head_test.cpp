#include"std_lib_facilities.h"
#include "robo_head.h"
#include "factory.h"
#include "robo_arm.h"
#include "robo_battery.h"
#include "robo_model.h"
#include "robo_motor.h"
#include "robo_torso.h"




int main() { 
	char t[300]; 
	char b[300];
	string test, test2, test3, test4, test5;
	double x;
	factory fac;
	robo_arm r;
	robo_head h;
	
	fac.make_head();
	fac.listhead();

	

}