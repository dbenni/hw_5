#include"robo_model.h"
#include "std_lib_facilities.h"
#include "robo_model.h"
#include <string.h>

void robot_model::setname()
{
	cout << "Pleas Enter Name of the robot model." << "\n";
	cin >> name[200];
	
}

void robot_model::setid()
{
	cout << "Pleas Enter ID number for robot model" << "\n";

	cin >> id_num[200];
} 

void robot_model::setprice()
{
	cout << " Pleas Enter the price of this model." << "\n";
	cin >> price;
}

void robot_model::set_totcost()
{
	double tot, he, ar, ar2, to, mo,ba;
	he = head.getcost();
	ar = arm.getcost();
	ar2 = arm2.getcost();
	to = torso.getcost();
	mo = motor.getcost();
	ba = battery.getcost();
	tot = 0;
	tot = tot + he + ar + ar2 + to + mo + ba;
	total_cost = tot;
	


	
}

void robot_model::setprofit()
{
	double c, pr, p;
	p = price;
	c = total_cost;
	profit = p - c;
}

void robot_model::setarm(robo_arm a, robo_arm z)
{
	arm = a;
	arm2 = z;
}

void robot_model::setbattery(robo_battery b)
{
	battery = b;
}

void robot_model::sethead(robo_head h)
{
	head = h;
}

void robot_model::setmotor(robo_motor m)
{
	motor = m;
}

void robot_model::settorso(robo_torso t)
{
	torso = t;
}

string robot_model::getname()
{
	string n[200];
	n[200] = name[200];
	return n[200];
}

string robot_model::getid()
{
	string i[200];
	i[200] = id_num[200];
	return i[200];
}

double robot_model::getcost()
{
	double  c;
	c = total_cost;
	return;
	
}

double robot_model::getprice()
{
	double p;
	p = price;
	return p;
}

double robot_model::getprofit()
{
	double prof;
	prof = profit;
	return prof;
}

robo_arm robot_model::getarm()
{
	robo_arm a;
	a = arm;
	return a;
}

robo_battery robot_model::getbattery()
{
	robo_battery b;
	b = battery;
	return b;
}

robo_head robot_model::gethead()
{
	robo_head h;
	h = head;
	return h;
}

robo_motor robot_model::getmotor()
{
	robo_motor m;
	m = motor;
	return m;
}

robo_torso robot_model::gettorso()
{
	robo_torso t;
	t = torso;
	return t;
}