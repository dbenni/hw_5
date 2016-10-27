#include "ROBO_SHOP.h"
#include"std_lib_facilities.h"
#include "robo_head.h"
#include "factory.h"
#include "robo_arm.h"
#include "robo_battery.h"
#include "robo_model.h"
#include "robo_motor.h"
#include "robo_torso.h"
#include "BILL.h" 







 


void ROBO_SHOP::PM_menu()
{
	//char  b[500];
	BILL tempnew;
	string ans, ans1, ans2, ans3, ans4;

		cout << "please type then number next to the command you would like to enter" << "\n";
		cout << "1: Make robot parts" << "\n";
		cout << "2: Make models" << "\n";
		cout << "3: view models" << "\n";
		cout << "4: view all robo parts " << "\n";
		cin >> ans;
		
		if (ans == "1") {
			shopfactory.factory_menu();
		}
		else if (ans == "2") {
			
				ans2 = shopfactory.build_model();
			
		}
		else if (ans == "3") {
			shopfactory.full_partlist();
		}
		else if (ans == "4") {
			shopfactory.listmodel();
		}
		//cout << "to exit to main menu type exit other wise type in yes: " << "\n";
		//cin >> test;

	

}

void ROBO_SHOP::BC_menu()
{
	char x[500], y[500], z[500];
	double shi{ 0 };
	string one, two, three, four, five, six, sev, eigt;
	int a{ 0 }, b{ 0 }, c{ 0 }, d{ 0 };
	cout << "are you a new client type yes or no type lower case:" << "\n";
	cin >> one;
	if (one != "no") { // new client
		cout << "Pleas type in full name:" << "\n";
		cin.getline(x, 500);
		cin.getline(x, 500);
		//cout << "Pleas type in the date in shown format mm/dd/yy" << "\n";
		//cin.getline(y, 500);
		//cin.getline(y, 500);
		two = two + x;
		tempbill.set_clname(two);
		//temp_client.setdate(three);
		shopfactory.listmodel(); // add new list model for store view
		cout << "please type then number next to the command you would like to enter" << "\n";
		cout << "1: Make order on store" << "\n";
		cout << "2: CLoser look at Model" << "\n";
		cout << "3: order model trough Sales" << "\n"; // added--
		cin >> four;
		if (four == "2") {
			cout << "please type in the id number for the model you would like a closer look at." << "\n";
			cin >> five;
			shopfactory.list_parts(five);
			cout << "\n";
			cout << "pleas type in the id number for the model you would like to order." << "\n";
			cin >> six;
			tempbill.addmodel(shopfactory.pullmodel(six)); // maybe add a order option here

		}
		else if (four == "3") {
			c = salescount;
			if (c != 0) {
				for (d = 0; d < c; d++) {
					cout << "----------------------------" << "\n";
					one = sales[d];
					cout << "Sales assosciate: " << one << "\n";
					cout << "----------------------------" << "\n";
				}
			}

			cout << "please type in the name of your sales assoiate you would like to order from: " << "\n";
			cin.getline(y, 500);
			cin.getline(y, 500);
			one = "";
			one = one + y;
			tempbill.set_saname(one);
			// print orders through sales view
			shopfactory.salesview();
			cout << "pleas type in the id number for the model you would like to order." << "\n";
			cin >> five;
			tempbill.addmodel(shopfactory.pullmodel(five)); //  check this pull model from factory into temp clinet needs work
															//temp_client.addbill();



			cout << " Make order yes or no (please type yes or no lower case): " << "\n";
			cin >> eigt;
			if (eigt != "no") {  // finishes adding client to open client list for sales to grab
				cout << "1: next day 7.00$" << "\n";
				cout << "1: 2-4 day 5.00$" << "\n";
				cout << "1: normal 3.00$" << "\n";
				cin >> d;
				if (d == 1) {
					shi = 7.0;
				}
				if (d == 2) {
					shi = 7.0;
				}
				if (d != 1 && d != 2) {
					shi = 3.0;
				}
				tempbill.settaxship(shi);
				tempbill.updateorder();
				addbill(tempbill);
			}
		}

		else if (four != "2" && four != "3") {
			cout << "pleas type in the id number for the model you would like to order." << "\n";
			cin >> five;
			tempbill.addmodel(shopfactory.pullmodel(five)); //  check this pull model from factory into temp clinet needs work
			//temp_client.addbill();


			cout << " Make order yes or no (please type yes or no lower case): " << "\n";
			cin >> eigt;
			if (eigt != "no") {  // finishes adding client to open client list for sales to grab
				cout << "1: next day 7.00$" << "\n";
				cout << "1: 2-4 day 5.00$" << "\n";
				cout << "1: normal 3.00$" << "\n";
				cin >> d;
				if (d == 1) {
					shi = 7.0;
				}
				if (d == 2) {
					shi = 7.0;
				}
				if (d != 1 && d != 2) {
					shi = 3.0;
				}
				tempbill.settaxship(shi);
				tempbill.updateorder();
				addbill(tempbill);
			}
		}
	}

	if (one == "no") { // exisiting client
		cout << "Pleas type in full name:" << "\n";
		cin.getline(x, 500);
		cin.getline(x, 500);
		four = four + x;
		tempbill.set_clname(four);


		cout << "please type then number next to the command you would like to enter" << "\n";
		cout << "1: Make order on store" << "\n";
		cout << "2: CLoser look at Model" << "\n";
		cout << "3: order model trough Sales" << "\n";
		cout << "4:  View Orders" << "\n";
		cin >> three;
		if (three == "1") {
			shopfactory.listmodel();
			cout << "pleas type in the id number for the model you would like to order." << "\n";
			cin >> five;
			tempbill.addmodel(shopfactory.pullmodel(five)); //  check this pull model from factory into temp clinet needs work
															// put a temp.dump here
			cout << " Make order yes or no (please type yes or no lower case): " << "\n";
			cin >> eigt;
			if (eigt != "no") {  // finishes adding client to open client list for sales to grab
				cout << "pleas type the number for the shipping method you would like" << "\n";
				cout << "1: next day 7.00$" << "\n";
				cout << "1: 2-4 day 5.00$" << "\n";
				cout << "1: normal 3.00$" << "\n";
				cin >> d;
				if (d == 1) {
					shi = 7.0;
				}
				if (d == 2) {
					shi = 7.0;
				}
				if (d != 1 && d != 2) {
					shi = 3.0;
				}
				tempbill.settaxship(shi);
				tempbill.updateorder();
				addbill(tempbill);

			}
			//temp_client.addbill();

		}
		// put a temp.dump here



		else if (three == "2") {
			shopfactory.listmodel();
			cout << "please type in the id number for the model you would like a closer look at." << "\n";
			cin >> five;
			shopfactory.list_parts(five);
			cout << "\n";
			cout << "pleas type in the id number for the model you would like to order." << "\n";
			cin >> six;
			tempbill.addmodel(shopfactory.pullmodel(six)); // this pull model from factory into temp clinet needs work
			cout << " Make order yes or no (please type yes or no lower case): " << "\n";
			cin >> eigt;
			if (eigt != "no") {  // finishes adding client to open client list for sales to grab
				cout << "pleas type the number for the shipping method you would like" << "\n";
				cout << "1: next day 7.00$" << "\n";
				cout << "1: 2-4 day 5.00$" << "\n";
				cout << "1: normal 3.00$" << "\n";
				cin >> d;
				if (d == 1) {
					shi = 7.0;
				}
				if (d == 2) {
					shi = 7.0;
				}
				if (d != 1 && d != 2) {
					shi = 3.0;
				}
				tempbill.settaxship(shi);
				tempbill.updateorder();
				addbill(tempbill);
			}

		}
		else if (three == "3") {
			c = salescount;
			if (c != 0) {
				for (d = 0; d < c; d++) {
					cout << "----------------------------" << "\n";
					one = sales[d];
					cout << "Sales assosciate: " << one << "\n";
					cout << "----------------------------" << "\n";
				}
			}

			cout << "please type in the name of your sales assoiate you would like to order from: " << "\n";
			cin.getline(y, 500);
			cin.getline(y, 500);
			one = "";
			one = one + y;
			tempbill.set_saname(one);
			// print orders through sales view
			shopfactory.salesview();
			cout << "pleas type in the id number for the model you would like to order." << "\n";
			cin >> five;
			tempbill.addmodel(shopfactory.pullmodel(five)); //  check this pull model from factory into temp clinet needs work
															//temp_client.addbill();



			cout << " Make order yes or no (please type yes or no lower case): " << "\n";
			cin >> eigt;
			if (eigt != "no") {  // finishes adding client to open client list for sales to grab
				cout << "pleas type the number for the shipping method you would like" << "\n";
				cout << "1: next day 7.00$" << "\n";
				cout << "1: 2-4 day 5.00$" << "\n";
				cout << "1: normal 3.00$" << "\n";
				cin >> d;
				if (d == 1) {
					shi = 7.0;
				}
				if (d == 2) {
					shi = 7.0;
				}
				if (d != 1 && d != 2) {
					shi = 3.0;
				}
				tempbill.settaxship(shi);
				tempbill.updateorder();
				addbill(tempbill);
			}
		}
		else if (three == "4") {
			a = 0;
			b = billcount;             // sub for a get client count 
			for (c = 0; c < b; c++) {
				cout << bills[c].getclname() << "\n";
				if (bills[c].getorder() == true && bills[c].geteshiped() == false) {
					cout << "Oder status:  orderd by costumer" << "\n";
				}
				else if (bills[c].geteshiped() == true ) {
					cout << bills[c].getsaname() << "\n";
					cout << "Oder status:  shiped to costumer" << "\n";
					a++;
				}
				else if (bills[c].getpaid() == true && bills[c].getpaid() == false) {
					cout << bills[c].getsaname() << "\n";
					cout << "Oder status:  paid and deliverd" << "\n";
				}
				bills[c].billview();
			}
			if (a > 0)
			{
				cout << "would you like to make payment: type yes or no lowercase." << "\n";
				cin >> six;
				for (c = 0; c < b; c++)
				{
					if ("yes" == six)
					{
						bills[c].updatepaid();
						cout << bills[c].get_ordernum() << " Paid." << "\n";
					}
				}
			}

		}

	}
}

void ROBO_SHOP::SA_menu()
{
	char x[500], y[500];
	string one, two, three, four, five, six, seven;
	int  b{ 0 }, c{ 0 }, d{ 0 }, e{0};
	cout << "are you a new hire yes or no type lower case:" << "\n";
	cin >> one;
	if (one != "no") {
		cout << "Enter Name: " "\n";
		cin.getline(x, 500);
		cin.getline(x, 500);
		two = two + x;
		sales.push_back(two);
		salescount++;



		cout << "type the number next to the command you would like to perform" << "\n";
		cout << "1: view shop open orders" << "\n";
		cout << "2: view your open orders" << "\n";
		cout << "3: view sales description" << "\n";
		cin >> three;
		if (three == "1") {
			b = billcount;             // sub for a get client count 
			for (c = 0; c < b; c++) {
				cout << bills[c].getclname() << "\n";
				if (bills[c].getorder() == true) {
					cout << "Oder status:  orderd by costumer" << "\n";
				}
				bills[c].billview();
			}

			cout << "type the name of the clients hows of orders you would like to order:" << "\n";
			cin.getline(y, 500);
			cin.getline(y, 500);
			six = "";
			six = six + y;
			b = billcount;
			for (c = 0; c < b; c++) {
				if (bills[c].getclname() == six && bills[c].getshipped() == false) {
					bills[c].set_saname(six);
					cout << "please type in a sort sales descrip:" << "\n";
					cin.getline(x, 500);
					
					four = four + x;
					cout << "please type in the date in this format (dd-mm-y):" << "\n";
					cin.getline(y, 500);
					
					seven = seven + y;
					bills[c].set_date(seven);
					cout << "please enter a order number all digits:" << "\n";
					cin.getline(y, 500);
					
					five = "";
					five = five + y;
					bills[c].set_ordernum(five);
					bills[c].setsalesdescri(four);
					bills[c].updateship();
				}
			}
		}
		else if (three == "2") {
			b = billcount;             // sub for a get client count 
			for (c = 0; c < b; c++) {
				cout << bills[c].getclname() << "\n";
				if (bills[c].getorder() == true) {
					cout << "Oder status:  orderd by costumer" << bills[c].getclname() << "\n";
					bills[c].billview();
				}

			}

			cout << "type the name of the clients hows of orders you would like to order:" << "\n";
			cin.getline(y, 500);
			cin.getline(y, 500);
			six = six + y;
			b = billcount;
			for (c = 0; c < b; c++) {
				if (bills[c].getclname() == six && bills[c].getshipped() == false) {
					bills[c].set_saname(six);
					cout << "please type in a sort sales descrip:" << "\n";
					cin.getline(x, 500);
					cin.getline(x, 500);
					four = four + x;
					cout << "please type in the date in this format (dd-mm-y):" << "\n";
					cin.getline(y, 500);
					cin.getline(y, 500);
					two = two + y;
					bills[c].set_date(two);
					cout << "please enter a order number all digits:" << "\n";
					cin.getline(y, 500);
					cin.getline(y, 500);
					four = four + y;
					bills[c].set_ordernum(four);
					bills[c].setsalesdescri(four);
					bills[c].updateship();
					cout << "this order has been completed" << "\n";

				}


			}
		}
		else if (three == "3") {
			cout << "pleas type in your full name:" << "\n";
			cin.getline(y, 500);
			cin.getline(y, 500);
			six = six + y;
			b = salescount;
			for (e = 0; e < b; e++) {
				if (bills[e].getsaname() == six) {
					bills[e].billview();
				}
			}

		}

	}
	else if (one == "no") {
		cout << "1: view your open orders" << "\n";
		cout << "2: view sales description" << "\n";
		cin >> three;

	 if (three == "1") {
		b = billcount;             // sub for a get client count 
		for (c = 0; c < b; c++) {
			cout << bills[c].getclname() << "\n";
			if (bills[c].getorder() == true) {
				cout << "Oder status:  orderd by costumer" << bills[c].getclname() << "\n";
				bills[c].billview();
			}

		}

		cout << "type the name of the clients hows of orders you would like to order:" << "\n";
		cin.getline(y, 500);
		cin.getline(y, 500);
		six = six + y;
		b = billcount;
		for (c = 0; c < b; c++) {
			if (bills[c].getclname() == six && bills[c].getshipped() == false) {
				bills[c].set_saname(six);
				cout << "please type in a sort sales descrip:" << "\n";
				cin.getline(x, 500);
				cin.getline(x, 500);
				four = four + x;
				cout << "please type in the date in this format (dd-mm-y):" << "\n";
				cin.getline(y, 500);
				cin.getline(y, 500);
				two = two + y;
				bills[c].set_date(two);
				cout << "please enter a order number all digits:" << "\n";
				cin.getline(y, 500);
				cin.getline(y, 500);
				four = four + y;
				bills[c].set_ordernum(four);
				bills[c].setsalesdescri(four);
				bills[c].updateship();
				cout << "this order has been completed" << "\n";

			}


		}
	}
	else if (three == "2") {
		cout << "pleas type in your full name:" << "\n";
		cin.getline(y, 500);
		cin.getline(y, 500);
		six = six + y;
		b = salescount;
		for (e = 0; e < b; e++) {
			if (bills[e].getsaname() == six) {
				bills[e].billview();
			}
		}

	}
	}
}
  
 


void ROBO_SHOP::PB_menu()
{
	int a{0}, c = 0;
	 int b = billcount;             // sub for a get client count 
	for (c = 0; c < b; c++) {
		if (bills[c].getorder() == true && bills[c].geteshiped() == false) {
			cout << "Oder status:  orderd by costumer" << "\n";
		}
		else if (bills[c].geteshiped() == true && bills[c].getpaid() == false) {
			cout << bills[c].getsaname() << "\n";
			cout << "Oder status:  shiped to costumer" << "\n";
			a++;
		}
		else if (bills[c].getpaid() == true) {
			cout << bills[c].getsaname() << "\n";
			cout << "Oder status:  paid and deliverd" << "\n";
		}
		bills[c].billview();
	}
	

}

void ROBO_SHOP::turnon() 
{
	string ans{""}, ans2{ "" };
	while (ans2 != "no") {
	cout << "please type the number next to the command your would like to perform:" << "\n";
	cout << "1: Product Manger widow" << "\n";
	cout << "2: Costomor widow" << "\n";
	cout << "3: Sales Manger widow" << "\n";
	cout << "4: Boss Menu" << "\n";
	cin >> ans;
		if (ans == "1") {
			PM_menu();
		}
		else if (ans == "2") {
			BC_menu();
		}
		else if (ans == "3") {
			SA_menu();
		}
		else if (ans == "4") {
			PB_menu();
		}  
	 
		cout << "pleas type in ( yes ) to continue to menu or type ( no ) to exit shop" << "\n";
		cin >> ans2;
	  }
	
}



void ROBO_SHOP::addbill(BILL x)
{ 
	int c{0}; 
	BILL temp;
	bills.push_back(x);
	billcount++;
	c = billcount;
	tempbill = temp;
}

 