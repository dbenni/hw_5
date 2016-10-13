#include"std_lib_facilities.h"
#include "robo_head.h"
#include "factory.h"
#include "robo_arm.h"
#include "robo_battery.h"
#include "robo_model.h"
#include "robo_motor.h"
#include "robo_torso.h"
#include <iostream>
#include <string>


int main() {
	char t[300];  
	char b[300];
	string test, test2;
	robo_arm r;
	factory f;
	f.build_model();
}