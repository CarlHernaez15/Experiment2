#include <iostream>

using namespace std;

int main ()
{

	int i, num, sum;	

	cout << "Enter a whole number: ";
	cin >> num;
 
 	while (num>0)
	{
		sum = 0;
		
	    for (i=1; i<=num; i++)

		sum+=i;
		cout << "The sum of all whole numbers from 1 to " << num << " is " << sum << endl;
		cout << "Enter a whole number: ";
		cin >> num;	
	}
	
	
	return 0;
}
