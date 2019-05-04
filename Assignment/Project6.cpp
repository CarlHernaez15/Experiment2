#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int f, First=0, Second=1;
	cout << "Fibonacci Numbers:" << endl;
	
	for (int f=0; f<22; f++)
	
	{
		 	cout<<" "<< First << ",";
		 	
		 	int sum = First+Second;
		 	First = Second;
		 	Second = sum;
		 		
	}
	
	cout << "\b";
    cout << " ";

return 0;
}
