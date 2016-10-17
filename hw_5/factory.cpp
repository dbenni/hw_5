 #include "factory.h"
#include "robo_torso.h"
#include "robo_arm.h"
#include "robo_battery.h"
#include "robo_motor.h"
#include "robo_head.h"
#include "robo_model.h"
#include "std_lib_facilities.h"
#include <iostream>
#include <string>
#include <string.h> 
 



   

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

void factory::add_model(robot_model r)
{
	models.push_back(r);
}

void factory::build_robopart(int num)
{
	robo_battery t, t2;
	int answer = 0, answer2 = 0;
	string a11, a12, a13, a14, a15, a16;
	double x;
	char a[300],b[300],h[300],m[300],to[300];
	if (num == 1) {

		cout << "please Enter your description of the arm" << "\n";
		cin.getline(a, 300);
		cin.getline(a, 300);
		cout << "\n";
		a15 = a15 + a;
		r_arm.setdescrip(a15);
		
	

	cout << "pleas enter name of robot arm(no spaces)" << "\n";
	cin >> a11;
	cout << "pleas enter part number of robot arm(no spaces use numbers)" << "\n";
	cin >> a12;
	cout << "pleas enter weight of robot arm(no spaces use numbers)" << "\n";
	cin >> a13;
	cout << "pleas enter power of robot arm(no spaces use numbers)" << "\n";
	cin >> a14;
	cout << "pleas enter cost of robot arm(please type numbers)" << "\n";
	cin >> x;
	r_arm.setcost(x);
	r_arm.setname(a11);
	r_arm.setpower(a14);
	r_arm.setweight(a13);
	r_arm.setpartn(a12);
	add_arm(r_arm);
	cout << "added arm" << "\n";
	arm_tot++;
	}
	 if (num == 2) {

		make_batt();
	}
	 if (num == 3) {
	
		cout << "Enter description: " << "\n";
		cin.getline(h, 300);
		cin.getline(h, 300);
		a15 = a15 + h;
		r_head.setdescrip(a15);
		cout << "this is a test" << a15 << "\n";
			cout << "pleas enter name of robot head(no spaces)" << "\n";
			cin >> a11;
			cout << "pleas enter part number of robot head(no spaces use numbers)" << "\n";
			cin >> a12;
			cout << "pleas enter weight of robot head(no spaces use numbers)" << "\n";
			cin >> a13;
			cout << "pleas enter cost of robot head(please type numbers)" << "\n";
			cin >> x;
			
			r_head.setcost(x);
			r_head.setname(a11);
			r_head.setweight(a13);
			r_head.setpartn(a12);
			add_head(r_head);
			cout << "added head" << "\n";
			head_tot++;
	}
	 if (num == 4) {
		

		cout << "pleas enter name of robot motor(no spaces)" << "\n";
		cin >> a11;
		cout << "pleas enter part number of robot motor(no spaces use numbers)" << "\n";
		cin >> a12;
		cout << "pleas enter weight of robot motor(no spaces use numbers)" << "\n";
		cin >> a13;
		cout << "pleas enter power of robot motor(no spaces use numbers)" << "\n";
		cin >> a14;
		cout << "pleas enter cost of robot motor(please type numbers)" << "\n";
		cin >> x;
		cout << " pleas type in max speed of motor(use number)" << "\n";
		cin >> a15;
		cout << "pleas enter description of robot motor" << "\n";
		cin.getline(a, 300);
		cin.getline(a, 300);
		
		a16 = a16 + a;
		r_motor.setcost(x);
		r_motor.setdescrip(a16);
		r_motor.setname(a11);
		r_motor.setpower(a14);
		r_motor.setweight(a13);
		r_motor.setpartn(a12);
		r_motor.setmph(a15);
		add_motor(r_motor);
		cout << "added motor" << "\n";
		motor_tot++;
	}
	 if (num == 5) 
	   {
		

			cout << "pleas enter name of robot torso(no spaces)" << "\n";
			cin >> a11;
			cout << "pleas enter part number of robot torso(no spaces use numbers)" << "\n";
			cin >> a12;
			cout << "pleas enter weight of robot torso(no spaces use numbers)" << "\n";
			cin >> a13;
			cout << "pleas enter 1 2 or 3 for number of batterys in torso of robot(no spaces use numbers)" << "\n";
			cin >> answer2;
			cout << "pleas enter cost of robot torso(please type numbers)" << "\n";
			cin >> x;
			cout << " pleas type in max speed of torso(use number)" << "\n";
			cin >> a15;
			cout << "pleas enter description of robot torso" << "\n";
			cin.getline(a, 300);
			cin.getline(a, 300);
			a16 = a16 + a;
			r_torso.setcost(x);
			r_torso.setdescrip(a16);
			r_torso.setname(a11);
			r_torso.setbatn(answer2);
			r_torso.setweight(a13);
			r_torso.setpartn(a12);
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
 
		
	
}

void factory::make_batt()
{
	string an1, an2, an3, an4, an5;
	double c;
	char x[300];
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
	cin.getline(x, 300);
	cin.getline(x, 300);
	an5 = an5 + x;

	r_batt.setcost(c);
	r_batt.setdescrip(an5);
	r_batt.setname(an1);
	r_batt.setenergy(an4);
	r_batt.setweight(an3);
	r_batt.setpartn(an2);
	add_batt(r_batt);
	cout << "added arm" << "\n";

}

void factory::make_arm()
{
	robo_battery t, t2;
	int answer = 0;
	string an1, an2, an3, an4, an5, an6;
	double x;
	char d[300];


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
	cout << "Enter arm description:  " << "\n";
	cin.getline(d, 300);
	cin.getline(d, 300);
	an6 = an6 + d;
	r_arm.setcost(x);
	r_arm.setname(an1);
	r_arm.setpower(an4);
	r_arm.setweight(an3);
	r_arm.setpartn(an2);
	r_arm.setdescrip(an6);
	add_arm(r_arm);
	cout << "added arm" << "\n";
	arm_tot++;

	cout << "pleas enter name of robot arm2(no spaces)" << "\n";
	cin >> an1;
	cout << "pleas enter part number of robot arm(no spaces use numbers)" << "\n";
	cin >> an2;
	cout << "pleas enter weight of robot arm(no spaces use numbers)" << "\n";
	cin >> an3;
	cout << "pleas enter power of robot arm2(no spaces use numbers)" << "\n";
	cin >> an4;
	cout << "pleas enter cost of robot arm2(please type numbers)" << "\n";
	cin >> x;
	cout << "Enter arm2 description:  " << "\n";
	cin.getline(d, 300);
	cin.getline(d, 300);
	an6 = an6 + d;
	r_arm2.setdescrip(an6);
	r_arm2.setcost(x);
	r_arm2.setname(an1);
	r_arm2.setpower(an4);
	r_arm2.setweight(an3);
	r_arm2.setpartn(an2);
	add_arm(r_arm2);
	cout << "added arm2" << "\n";
	arm_tot++;
	temp.setarm(r_arm, r_arm2);

}


void factory::make_head()
{
	robo_battery t, t2;
	int answer = 0;
	string an1, an2, an3, an4, an5, an6;
	double x;
	char d[300];

	cout << "pleas enter name of robot head(no spaces)" << "\n";
	cin >> an1;
	cout << "pleas enter part number of robot head(no spaces use numbers)" << "\n";
	cin >> an2;
	cout << "pleas enter weight of robot head(no spaces use numbers)" << "\n";
	cin >> an3;
	cout << "pleas enter cost of robot head(please type numbers)" << "\n";
	cin >> x;
	cout << "for this robot head enter descrption: " << "\n";
	cin.getline(d, 300);
	cin.getline(d, 300);
	r_head.setdescrip(d);
	
	r_head.setcost(x);
	r_head.setname(an1);
	r_head.setweight(an3);
	r_head.setpartn(an2);
	add_head(r_head);
	temp.sethead(r_head);
	cout << "added head" << "\n";
	head_tot++;
}

void factory::make_motor()
{
	robo_battery t, t2;
	int answer = 0;
	string an1, an2, an3, an4, an5, an6;
	double x;
	char d[500];

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
	cin.getline(d, 300);
	cin.getline(d, 500);
	an6 = an6 + d;
	r_motor.setcost(x);
	r_motor.setdescrip(an6);
	r_motor.setname(an1);
	r_motor.setpower(an4);
	r_motor.setweight(an3);
	r_motor.setpartn(an2);
	r_motor.setmph(an5);
	add_motor(r_motor);
	temp.setmotor(r_motor);
	cout << "added motor" << "\n";
	motor_tot++;
}


void factory::make_torso()
{
	robo_battery t, t2;
	int answer = 0, answer2;
	string an1, an2, an3, an4, an5, an6;
	double x;
	char d[500];

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
	cin.getline(d, 500);
	cin.getline(d, 500);
	an6 = an6 + d;
	r_torso.setcost(x);
	r_torso.setdescrip(an6);
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

void factory::set_batt(robo_battery t)
{
	string an1, an2, an3, an4, an5;
	double c;
	char x[300];
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
	cin.getline(x, 300);
	cin.getline(x, 300);
	an5 = an5 + x;
	t.setcost(c);
	t.setdescrip(an5);
	t.setname(an1);
	t.setenergy(an4);
	t.setweight(an3);
	t.setpartn(an2);
}

void factory::build_model()
{ 
	string ar, ar2, mot, tor, hea,fin,arf;
	char x[500];
	int ans1,ans2, ans3, ans4;
	cout << "Pleas type the number next to the operation you would like to perforom:" << "\n";
	cout << "1: add arm from list" << "\n";
	cout << "2: build new arm for model" << "\n";
	cin >> ans1;
	if(ans1 == 1)
	{
		ans2 = getarmtot();
		if (ans2 == 0)
		{
			cout << "Sorry no arms are in stock please build two arms for this model" << "\n";
			make_arm();
		}
		else
			listarm();
		cout << "pleas type in the in the part number of the arm you would like to add for arm1 " << "\n";
		cin >> ar;
		r_arm = pullarm(ar);
		cout << "pleas type in the in the part number of the arm you would like to add for arm2 " << "\n";
		cin >> ar2;
		r_arm2 = pullarm(ar2);
		temp.setarm(r_arm, r_arm2);
	}
	else if (ans1 == 2)
	{
		make_arm(); 

	} 


	cout << "Pleas type the number next to the operation you would like to perforom:" << "\n";
	cout << "1: add head from list" << "\n";
	cout << "2: build new head for model" << "\n";
	cin >> ans1;
	if (ans1 == 1)
	{
		ans2 = getheadtot();
		if (ans2 == 0)
		{
			cout << "Sorry no arms are in stock please build two arms for this model" << "\n";
			make_head();
		}
		else
			listhead();
		cout << "pleas type in the in the part number of the head you want to add to model. " << "\n";
		cin >> hea;
		r_head = pullhead(hea);
		temp.sethead(r_head);
		
	}
	else if (ans1 == 2)
	{
		make_head();

	}



	cout << "Pleas type the number next to the operation you would like to perforom:" << "\n";
	cout << "1: add motor from list" << "\n";
	cout << "2: build new motor for model" << "\n";
	cin >> ans1;
	if (ans1 == 1)
	{
		ans2 = getmotor_tot();
		if (ans2 == 0)
		{
			cout << "Sorry no motors are in stock please build motor for this model" << "\n";
			make_motor();
		}
		else
			listmotor();
		cout << "pleas type in the in the part number of the motor you would like to this model " << "\n";
		cin >> mot;
		r_motor = pullmotor(mot);
		temp.setmotor(r_motor);
	}
	else if (ans1 == 2)
	{
		make_motor();

	}

	cout << "Pleas type the number next to the operation you would like to perforom:" << "\n";
	cout << "1: add torso from list" << "\n";
	cout << "2: build new torso for model" << "\n";
	cin >> ans1;
	if (ans1 == 1)
	{
		ans2 = gettorsotot();
		if (ans2 == 0)
		{
			cout << "Sorry no torsos are in stock please build two arms for this model" << "\n";
			make_torso();
		}
		else
			listtors();
		cout << "pleas type in the in the part number of the torso you would like to this model " << "\n";
		cin >> tor;
		r_torso = pulltorso(tor);
		temp.settorso(r_torso);
		
	}
	else if (ans1 == 2)
	{
		make_torso();

	}
	temp.setname();
	temp.setid();
	temp.set_totcost();
	temp.setprice();
	temp.setprofit();
	cout << "Please Enter a description for this model: press enter when finshed." << "\n";
	cin.getline(x, 500);
	cin.getline(x, 500);
	arf = arf + x;
	temp.setdescrip(arf);
	fin = temp.getname();
	add_model(temp);
	model_tot++;
	cout << "Model:  " << fin << "has been added" << "\n";


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

robo_arm factory::pullarm(string a)
{
	string ansd;
	int size, i;
	size = getarmtot();
	for (i = 0; i < size; i++)
	{
		ansd = arm[i].getpartn();
			if (ansd == a)
			{
				return arm[i];
			}
	}
}

robo_head factory::pullhead(string h)
{
	string ansd;
	int size, i;
	size = getheadtot();
	for (i = 0; i < size; i++)
	{
		ansd = head[i].getpartn();
		if (ansd == h)
		{
			return head[i];
		}
	}
}

robo_battery factory::pullbattery(string b)
{
	string ansd;
	int size, i;
	size = getbatttot();
	for (i = 0; i < size; i++)
	{
		ansd = battery[i].getpartn();
		if (ansd == b)
		{
			return battery[i];
		}
	}
}

robo_motor factory::pullmotor(string m)
{
	string ansd;
	int size, i;
	size = getmotor_tot();
	for (i = 0; i < size; i++)
	{
		ansd = motor[i].getpartn();
		if (ansd == m)
		{
			return motor[i];
		}
	}
}

robo_torso factory::pulltorso(string m)
{
	string ansd;
	int size, i;
	size = gettorsotot();
	for (i = 0; i < size; i++)
	{
		ansd = torso[i].getpartn();
		if (ansd == m)
		{
			return torso[i];
		}
	}
}

robot_model factory::pullmodel(string mod)
{
	string ansd;
	int size, i;
	size = getmodeltot();
	for (i = 0; i < size; i++)
	{
		ansd = models[i].getid();
		if (ansd == mod)
		{
			return models[i];
		}
	}
}

void factory::settaxship(string answer, int x)
{

}

