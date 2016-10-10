#include"std_lib_facilities.h"
#include "robo_head.h"

int main() {

	robo_head head;
	string t, a,w,b;
	string t2, a2, w2, b2;
	double test, test1;
	char* x;
	char* p;

	cout << "pleas enter name of robot head(no spaces)" << "\n";
	cin >> t;
	x = "this is your descrip";
	test = 21.2;
	a = "1276533";
	w = "24";
	head.setcost(test);
	head.setdescrip(x);
	head.setname(t);
	head.setweight(w);
	head.setpartn(a);

	t2 = head.getname();
	a2 = head.getpartn();
	p = head.getdescrip();
	cout << t2 << "\n";
	cout << a2 << "\n";
	cout << p << "\n";



}