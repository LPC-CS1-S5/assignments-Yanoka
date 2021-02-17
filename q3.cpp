#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib> 
using namespace std;

int main(){

  int num1, num2, num3;
  int sum;
  double average;

  srand(time(0));

	num1 = random() % 1000;
	num2 = random() % 1000;
	num3 = random() % 1000;
  sum = num1 + num2 + num3;
  average = sum / 3.0;

	cout << "The random number: " <<  num1 << endl;
	cout << "The random number: " <<  num2 << endl;
	cout << "The random number: " <<  num3 << endl;
  cout << "Sum of numbers: " << setw(6) << sum << endl;
  cout << "Average of number: " << setprecision(5)<< fixed << showpoint << average << endl;
}