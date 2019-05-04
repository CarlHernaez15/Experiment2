#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int packA=995; 
	int packB=1495;
	int packC=1995;
	int hA, hB;
	int hours, total, FinalTotal;
	char input;
	
	cout << "Welcome to International Telecoms" << endl;
	cout << "Kindly choose 1 of the following plans below to start your inquiry: \n" << endl;
	cout << "PACKAGE A: Php 995/month with 10 hours of data usage provided. With an additional pay of Php 20.00/hour." << endl;
	cout << "PACKAGE B: Php 1495/month with 20 hours of data usage provided. With an additional pay of Php 10.00/hour." << endl;
	cout << "PACKAGE C: Php 1995/month of unlimited data usage provided. \n" << endl;	
	cout << "Please enter package subscription: A, B or C \n" << endl;
	cout << "Package Subscription: ";
	cin >> input;


	switch (input)
	{
		case 'A':
				
				cout << "Excess Hours Used: " ;
				cin>> hours;
		    	FinalTotal = packA + (hours * 20);
				hA = 10 + hours;
				cout<< "Total Hours Used: " << hA << endl;
				cout<< "TOTAL BILL: Php " << FinalTotal << "\n" << endl; 
				break;
				

		
		case 'B':
				
				cout << "Excess Hours Used: " ;
				cin >> hours;
				FinalTotal = packB + (hours * 10);
				hB = 20 + hours;
				cout << "Total Hours Used: " << hB << endl;
				cout << "TOTAL BILL: Php " << FinalTotal << "\n" << endl;
				break; 


		case 'C':
				
				FinalTotal = packC;
				cout << "TOTAL BILL: Php " << FinalTotal << "\n" << endl; 
				
				break;
}
		cout << "Thank you for your continous support, our dearest customer \n" << "Have an awesome and wonderful day!! \n";
		
_getch ();		
return 0;
}
