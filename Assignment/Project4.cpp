#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int a, b, c;
	
	cout << "Enter 1st number: " << endl;
	cin >> a;
	cout << "Enter 2nd number: " << endl;
	cin >> b;
	cout << "Enter 3rd number: " << endl;
	cin >> c;
	
	if (a>=b && a>=c)
	{
	cout << "The LARGEST of the Three numbers is: " << a << endl;
	}
	
	if (b>=a && b>=c)
	{
	cout << "The LARGEST of the Three numbers is: " << b << endl;
	}
	
	if (c>=a && c>=b)
	{
	cout << "The LARGEST of the Three numbers is: " << c << endl;
	}
	

	_getch ();
	return 0;
}
