#include "robot_model.h"



robot_model::robot_model()
{
}


robot_model::~robot_model()
{
}

void robot_model::setname()
{
}

void robot_model::setid()
{
}

void robot_model::setprice()
{
}

void robot_model::set_totcost()
{
}

void robot_model::setprofit()
{
}

void robot_model::setarm(robo_arm a)
{
}

void robot_model::setbattery(robo_battery b)
{
}

void robot_model::sethead(robo_head h)
{
}

void robot_model::setmotor(robo_motor m)
{
}

void robot_model::settorso(robo_torso t)
{
}

string robot_model::getname()
{
	return string();
}

string robot_model::getid()
{
	return string();
}

double robot_model::getcost()
{
	return 0.0;
}

double robot_model::getprice()
{
	return 0.0;
}

double robot_model::getprofit()
{
	return 0.0;
}

robo_arm robot_model::getarm()
{
	return robo_arm();
}

robo_battery robot_model::getbattery()
{
	return robo_battery();
}

robo_head robot_model::gethead()
{
	return robo_head();
}

robo_motor robot_model::getmotor()
{
	return robo_motor();
}

robo_torso robot_model::gettorso()
{
	return robo_torso();
}
