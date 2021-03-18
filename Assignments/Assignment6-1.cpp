#include <iostream>
using namespace std;
// Funtion Prototype
bool	 inputvalidate(int, int);
void 	getlistprime(int, int);
int main()
{
	int num1, num2;

	do {
		cout << "Enter two numbers : ";
		cin >> num1 >> num2;
	} while( !
	inputvalidate(num1,num2) ); 

	getlistprime(num1, num2);
} 