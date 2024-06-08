
/* Program to ask the user to enter 2 number then print the two numbers then swap the two numbers and print them */

#include <iostream>
using namespace std;

int main() 

{
	int a, b;
	cout << "Please enter the first number ! " << endl;
	cin >> a;

	cout << "Please enter the second number ! " << endl;
	cin >> b;

	cout << "Befor swap the first number = " << a << " and the second number = " << b << endl;

	// Method 1: using a temporary variable 

	int temp = a;
	a = b;
	b = temp;

	cout << "After swap the first number = " << a << " and the second number = " << b << endl;

	/* Method 2: using std::swap Function == = >  std::swap(a, b);
	
	int a, b;
	cout << "Please enter the first number ! " << endl;
	cin >> a;

	cout << "Please enter the second number ! " << endl;
	cin >> b;

	cout << "Befor swap the first number = " << a << " and the second number = " << b << endl;

	std::swap(a, b);

	cout << "After swap the first number = " << a << " and the second number = " << b << endl;


	*/

	return 0;



	// created by @ilyes_trabelsi
}