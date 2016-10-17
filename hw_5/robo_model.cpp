#include"robo_model.h"
#include "std_lib_facilities.h"
#include "robo_model.h"
#include <iostream>
#include <string>
#include <string.h> 

void robot_model::setname()
{
	cout << "Pleas Enter Name of the robot model." << "\n";
	cin >> name[200];
	   
}

void robot_model::setdescrip(string x)
{
	descrip = x;
}

string robot_model::getdescrip()
{
	string d;
	d = descrip;
	return d;
}

void robot_model::setid() 
{
	cout << "Pleas Enter ID number for robot model" << "\n";
	 
	cin >> id_num[200];
} 

void robot_model::setprice()
{
	double c;
	c = getcost();
	cout << " Pleas Enter the price of this model.  " <<"not total cost is  " << c << "\n";
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
	double c, p;
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
	return c;
	
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

robo_arm robot_model::getarm2()
{
	robo_arm t;
	t = arm2;
	return t;
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

void robot_model::modeldump()
{
	cout << "----------------------------------------------------------------------------" << "\n";
	cout << "Model name:  " << name << "\n";
	cout << "Model number:" << id_num << "\n";
	cout << "     price:  " << price << "\n";
	cout << "----------------------------------------------------------------------------" << "\n";
}

void robot_model::orderdump()
{
	double x;
	x = price + tax + ship;

	cout << "----------------------------------------------------------------------------" << "\n";
	cout << "Model name:  " << name << "\n";
	cout << "Model number:" << id_num << "\n";
	cout << "     price:  " << price << "\n";
	cout << "       tax:  " << tax << "\n";
	cout << "  shipping:  " << ship << "\n";
	cout << "     Total:  " << x << "\n";
	cout << "short description:" << descrip << "\n";
	cout << "----------------------------------------------------------------------------" << "\n";
}


void robot_model::modelpartsdump()
{
	head.headdump();
	arm.armdump();
	arm2.armdump();
	battery.battdump();
	motor.motordump();
	torso.torsodump();
}

void robot_model::setax()
{
	tax = price * .03;
}

void robot_model::setship(double x)
{
	ship = x;
}

double robot_model::gettax()
{
	double ans;
	ans = tax;
	return ans;
}

double robot_model::getship()
{
	double sh;
	sh = ship;
	return sh;
}
