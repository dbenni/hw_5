#include "robo_shop.h"








void ROBO_SHOP::PM_menu()
{
}

void ROBO_SHOP::BC_menu()
{
	char a[500], b[500];
	BILL tempnew;
	string ans, ans1, ans2, ans3, ans4,test;
	int one, two, three;
	cout << "is this your first log in (please type yes or no lowercase): " << "\n";
	cin >> ans;
	if (ans != "no") {
		cout << "Pleas type in full name:" << "\n";
		cin.getline(a, 500);
		cin.getline(a, 500);
		cout << "Pleas type in the date in shown format mm/dd/yy" << "\n";
		cin.getline(b, 500);
		cin.getline(b, 500);
		ans2 = ans2 + b;
		temp_client.setname(ans1);
		temp_client.setdate(ans2); // part one get clients name and date next step print list
		

		shopfactory.listmodel();

		cout << "please type then number next to the command you would like to enter" << "\n";
		cout << "1: Make order" << "\n";
		cout << "2: CLoser look at Model" << "\n";
		cin >> ans1;
		if (ans1 == "2") {
			cout << "please type in the id number for the model you would like a closer look at." << "\n";
			cin >> ans3;
			shopfactory.list_parts(ans3);
			cout << "\n";
			cout << "pleas type in the id number for the model you would like to order." << "\n";
			cin >> ans3;
			temp_client.addmodel(shopfactory.pullmodel(ans3)); // this pull model from factory into temp clinet needs work
			temp_client.addbill();

		}
		else {
			cout << "pleas type in the id number for the model you would like to order." << "\n";
			cin >> ans3;
			temp_client.addmodel(shopfactory.pullmodel(ans3)); // this pull model from factory into temp clinet needs work
			temp_client.addbill();
			
		}
		test = temp_client.getname();
		temp_client.finishbillorder(test);  // prints order and say check out with models discription
		                                                      // add order to sales or open orders
		cout << " Make order yes or no (please type yes or no lower case): " << "\n";
		cin >> ans4;
			if (ans4 != "no") {  // finishes adding client to open client list for sales to grab
				addopenclient(temp_client);
		  }

	}
}

void ROBO_SHOP::SA_menu()
{
	char x[500];
	string one, two, three, four, five;
	int a, b, c, d, e;
	cout << "are you a new hire yes or no type lower case:" << "\n";
	cin >> one;
	if (one != "no") {
		cout << "Enter Name: " "\n";
		cin.getline(x,500);
		cin.getline(x, 500);
		two = two + x;
		temp_sa.setname(two);
		
		cout << "type the number next to the command you would like to perform" << "\n";
		cout << "1: view shop open orders" << "\n";
		cout << "2: view your open orders" << "\n";
		cout << "3: view sales description" << "\n";

	}
}

void ROBO_SHOP::PB_menu()
{
}

void ROBO_SHOP::turnon() 
{
}

void ROBO_SHOP::addopenclient(Client one)
{
	Client blank;
	clinets.push_back(one);
	cout << one.getname() << " order has been completed and sent to sales." << "\n";
	temp_client = blank;

}
