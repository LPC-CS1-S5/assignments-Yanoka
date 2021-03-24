#include <iostream>

using namespace std;
// Funtion Prototype
bool inputValidate(int, int);
void getlistPrime(int, int);


int main()
{
	int num1, num2;

	do {
		cout << "Enter two numbers : ";
		cin >> num1 >> num2;
	} while(!inputValidate(num1,num2)); 

	getlistPrime(num1, num2);
} 