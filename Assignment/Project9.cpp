#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int col;
	int rows;
	
	cout << "How many columns: ";
	cin >> col;
	cout << "How many rows: ";
	cin >> rows;
	
	for (int i=1 ; i <= rows; i++)
	{
		cout << " \n " ;
		for (int i=1 ; i <= col; i++)
		{
			cout << "*";
		}
	}
	
	_getch();
	return 0;
}
