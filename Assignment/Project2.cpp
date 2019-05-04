#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int wdc=35;
	int lC=20;
	float gallons, UnpaidBal, WaterBill;
	float cC=1.10;
	
	cout << "WELCOME TO NAWASAK WATER DISTRIBUTION INC." << endl; 
	cout << "Kindly type the necessary components to find out your water bill for this month. \n" << endl;
	cout << "Enter the gallons of water used: " ; 
	cin >> gallons;
	cout << "Amount of unpaid balance from last month's bill: Php " ;
	cin >> UnpaidBal;
	
	WaterBill = (wdc+(gallons*cC));
	
	if (UnpaidBal > 0)
	{
	    cout <<"Total amount to pay: Php "<< (WaterBill + lC) << endl;	
	}
	else
	{
		cout<<"Total amount to pay: Php " << WaterBill << endl;
	}
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n" << endl;
		cout << "Thank you very much for your patience in answering. \n" << "Have an awesome and wonderful day \n";
	
	_getch ();
	return 0;
}
