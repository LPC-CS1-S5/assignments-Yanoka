#include <iostream>

using namespace std;
// Funtion Prototype
bool inputValidate(int, int);
void getlistPrime(int num1=0, int num2 = 100);



int main()
{
	int begin, end;

	do {
		cout << "Enter two numbers : ";
		cin >> begin >> end;
	} while(!inputValidate(begin,end)); 


	if (begin == end)
		getlistPrime(begin);

	else if (begin > end)
		getlistPrime();

	else if (begin < end)
		getlistPrime(begin, end);

} 