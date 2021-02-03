#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

int num1, num2, num3;

	srand(time(0));
	      // Random number  between 0 .. 99
	num1 = random() % 100 ;
	num2 = random() % 100 ;
	num3 = random() % 100 ;

	cout << "The random number: " <<  num1 << endl;
	cout << "The random number: " <<  num2 << endl;
	cout << "The random number: " <<  num3 << endl;
  cout << "Sum of numbers: " << num1 + num2 + num3 << endl;
  cout <<"Average of number: " << (num1 + num2 + num3)/3.0 << endl;

}

