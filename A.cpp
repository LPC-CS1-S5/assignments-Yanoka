//yana 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

int num1, num2, num3, num4, min;

	srand(time(0));
	      // Random number  between 0 .. 99
	num1 = random() % 100 ;
	num2 = random() % 100 ;
	num3 = random() % 100 ;
  num4 = random() % 100 ;

	cout << "The random number is: " <<  num1 << endl;
	cout << "The random number is: " <<  num2 << endl;
	cout << "The random number is: " <<  num3 << endl;
  cout << "The random number is: " <<  num4 << endl;

  min = num1;
  if (num1 > num2)
      min = num2;
  if (num1 > num3)
      min = num3;
  if (num1 > num4)
      min = num4;
  cout << "The min number is: "<< min << endl;        
}