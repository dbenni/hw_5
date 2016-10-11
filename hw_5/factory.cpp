#include "factory.h"
#include "robo_torso.h"
#include "robo_arm.h"
#include "robo_battery.h"
#include "robo_motor.h"
#include "robo_head.h"
#include "std_lib_facilities.h"


   

void factory::factory_menu()
{
	int answer3 = 0;

	cout << "pleas type the number next to the command you would like to perform" << "\n";
	while (answer3 != 6) {
	cout << "1 build arm: " << "\n";
	cout << "2 build battery: " << "\n";
	cout << "3 build head" << "\n";
	cout << "4 build motor" << "\n";
	cout << "5 build torso" << "\n";
	cout << "6 exit" << "\n";
	cin >> answer3;
	build_robopart(answer3);
}
}

void factory::add_head(robo_head x)
{
	head.push_back(x);
}

void factory::add_arm(robo_arm a)
{
	arm.push_back(a);
}

void factory::add_torso(robo_torso t)
{
	torso.push_back(t);
}

void factory::add_motor(robo_motor m)
{
	motor.push_back(m);
}

void factory::add_batt(robo_battery b)
{
	battery.push_back(b);
}

void factory::build_robopart(int num)
{
	robo_battery t, t2;
	int answer = 0, answer2;
	string an1, an2, an3, an4, an5, an6;
	double x;
	char d[250];
	if (num == 1) {
	

	cout << "pleas enter name of robot arm(no spaces)" << "\n";
	cin >> an1;
	cout << "pleas enter part number of robot arm(no spaces use numbers)" << "\n";
	cin >> an2;
	cout << "pleas enter weight of robot arm(no spaces use numbers)" << "\n";
	cin >> an3;
	cout << "pleas enter power of robot arm(no spaces use numbers)" << "\n";
	cin >> an4;
	cout << "pleas enter cost of robot arm(please type numbers)" << "\n";
	cin >> x;
	cout << "pleas enter description of robot arm" << "\n";
	cin >> d;
	r_arm.setcost(x);
	r_arm.setdescrip(d);
	r_arm.setname(an1);
	r_arm.setpower(an4);
	r_arm.setweight(an3);
	r_arm.setpartn(an2);
	add_arm(r_arm);
	cout << "added arm" << "\n";
	arm_tot++;
	}
	else if (num == 2) {

		make_batt();
	}
	else if (num == 3) {
	

			cout << "pleas enter name of robot head(no spaces)" << "\n";
			cin >> an1;
			cout << "pleas enter part number of robot head(no spaces use numbers)" << "\n";
			cin >> an2;
			cout << "pleas enter weight of robot head(no spaces use numbers)" << "\n";
			cin >> an3;
			cout << "pleas enter cost of robot head(please type numbers)" << "\n";
			cin >> x;
			cout << "pleas enter description of robot head" << "\n";
			cin >> d;
			r_head.setcost(x);
			r_head.setdescrip(d);
			r_head.setname(an1);
			r_head.setweight(an3);
			r_head.setpartn(an2);
			add_head(r_head);
			cout << "added head" << "\n";
			head_tot++;
	}
	else if (num == 4) {
		

		cout << "pleas enter name of robot motor(no spaces)" << "\n";
		cin >> an1;
		cout << "pleas enter part number of robot motor(no spaces use numbers)" << "\n";
		cin >> an2;
		cout << "pleas enter weight of robot motor(no spaces use numbers)" << "\n";
		cin >> an3;
		cout << "pleas enter power of robot motor(no spaces use numbers)" << "\n";
		cin >> an4;
		cout << "pleas enter cost of robot motor(please type numbers)" << "\n";
		cin >> x;
		cout << " pleas type in max speed of motor(use number)" << "\n";
		cin >> an5;
		cout << "pleas enter description of robot motor" << "\n";
		cin >> d;
		r_motor.setcost(x);
		r_motor.setdescrip(d);
		r_motor.setname(an1);
		r_motor.setpower(an4);
		r_motor.setweight(an3);
		r_motor.setpartn(an2);
		r_motor.setmph(an5);
		add_motor(r_motor);
		cout << "added motor" << "\n";
		motor_tot++;
	}
	else if (num == 5) {
		

			cout << "pleas enter name of robot torso(no spaces)" << "\n";
			cin >> an1;
			cout << "pleas enter part number of robot torso(no spaces use numbers)" << "\n";
			cin >> an2;
			cout << "pleas enter weight of robot torso(no spaces use numbers)" << "\n";
			cin >> an3;
			cout << "pleas enter 1 2 or 3 for number of batterys in torso of robot(no spaces use numbers)" << "\n";
			cin >> answer2;
			cout << "pleas enter cost of robot torso(please type numbers)" << "\n";
			cin >> x;
			cout << " pleas type in max speed of torso(use number)" << "\n";
			cin >> an5;
			cout << "pleas enter description of robot torso" << "\n";
			cin >> d;
			r_torso.setcost(x);
			r_torso.setdescrip(d);
			r_torso.setname(an1);
			r_torso.setbatn(answer2);
			r_torso.setweight(an3);
			r_torso.setpartn(an2);
			if (answer2 == 1) {
				set_batt(r_torso.one);
			}
			else if (answer2 == 2) {
				set_batt(r_torso.one);
				set_batt(r_torso.two);
			}
			else if (answer2 == 3) {
				set_batt(r_torso.one);
				set_batt(r_torso.two);
				set_batt(r_torso.three);
			}
			torso.push_back(r_torso);
			cout << "added torso" << "\n";
	}
	else if (num == 6) {
		exit(1);
	}
}

void factory::make_batt()
{
	string an1, an2, an3, an4, an5;
	double c;
	char x[250];
	cout << "pleas enter name of robot battery(no spaces)" << "\n";
	cin >> an1;
	cout << "pleas enter part number of robot battery(no spaces use numbers)" << "\n";
	cin >> an2;
	cout << "pleas enter weight of robot battery(no spaces use numbers)" << "\n";
	cin >> an3;
	cout << "pleas enter energy of robot battery(no spaces use numbers)" << "\n";
	cin >> an4;
	cout << "pleas enter cost of robot battery(please type numbers)" << "\n";
	cin >> c;
	cout << "pleas enter description of robot battery" << "\n";
	cin >> x;
	r_batt.setcost(c);
	r_batt.setdescrip(x);
	r_batt.setname(an1);
	r_batt.setenergy(an4);
	r_batt.setweight(an3);
	r_batt.setpartn(an2);
	add_batt(r_batt);
	cout << "added arm" << "\n";

}

void factory::set_batt(robo_battery t)
{
	string an1, an2, an3, an4, an5;
	double c;
	char x[250];
	cout << "pleas enter name of robot battery(no spaces)" << "\n";
	cin >> an1;
	cout << "pleas enter part number of robot battery(no spaces use numbers)" << "\n";
	cin >> an2;
	cout << "pleas enter weight of robot battery(no spaces use numbers)" << "\n";
	cin >> an3;
	cout << "pleas enter energy of robot battery(no spaces use numbers)" << "\n";
	cin >> an4;
	cout << "pleas enter cost of robot battery(please type numbers)" << "\n";
	cin >> c;
	cout << "pleas enter description of robot battery" << "\n";
	cin >> x;
	t.setcost(c);
	t.setdescrip(x);
	t.setname(an1);
	t.setenergy(an4);
	t.setweight(an3);
	t.setpartn(an2);
}

void factory::build_model()
{

}

int factory::getarmtot()
{
	int armx;
	armx = arm_tot;
	return armx;
}

void factory::listarm()
{   
	int x,i;
	x = getarmtot();
	for (i = 0; i < x; i++) {
		cout << "---------------------------------------------" << "\n";
		arm[i].armdump();
		cout << "---------------------------------------------" << "\n";
	}
}

void factory::listbatt()
{
	int b, i;
	b = getbatttot();
	for (i = 0; i < b; i++) {
		cout << "---------------------------------------------" << "\n";
		battery[b].battdump();
		cout << "---------------------------------------------" << "\n";
	}
}







void factory::listtors()
{
	int t, i;
	t = gettorsotot();
	for (i = 0; i < t; i++) {
		cout << "---------------------------------------------" << "\n";
		torso[i].torsodump();
		cout << "---------------------------------------------" << "\n";
	}
}

void factory::listmodel()
{
	int siz;
	int i;
	siz = getmodeltot();
	for (i = 0; i < siz; i++)
	   {
		models[i].modeldump();
	   }
}
  


void factory::listhead()
{
	int h, i;
	h = getheadtot();
	for (i = 0; i < h; i++) {
		cout << "---------------------------------------------" << "\n";
		head[i].headdump();
		cout << "---------------------------------------------" << "\n";
	}

}


void factory::listmotor()
{
	int x, i;
	x = model_tot;
	for (i = 0; i < x; i++) {
		cout << "---------------------------------------------" << "\n";
		motor[i].motordump();
		cout << "---------------------------------------------" << "\n";
	}
}

int factory::getheadtot()
{
	int h;
	h = head_tot;
	return h;
}

int factory::getbatttot()
{
	int b;
	b = batt_tot;
	return b;
}

int factory::gettorsotot()
{
	int tor;
	tor = tors_tot;
	return tor;
}

int factory::getmotor_tot()
{
	int mot;
	mot = motor_tot;
	return mot;
}

int factory::getmodeltot()
{
	int answer;
	answer = model_tot;
	return answer;  
}

void factory::list_parts(string test)
{
	string ansd;
	int size,i;
	size = model_tot;
	for (i = 0; i < size; i++) 
	   {
		ansd = models[i].getid();
		if (ansd == test)
		{
			models[i].modelpartsdump();
		}
	   }
}

