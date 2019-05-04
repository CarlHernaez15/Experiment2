#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int a;
	
	cout << "The Multiplication table of  \n\n";
	cout << "Enter a Number: ";
	cin >> a;


	for (int i=1 ; i <= 10; i++)
	
	cout <<" \n "<< i << " * " << a<< " = " << i*a;
	
	_getch();
	return 0;
	
}
