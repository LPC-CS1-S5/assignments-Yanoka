//Yana Berezina
// Write a program that  stores the following values in five different variables:

// 28, 32, 37, 24, and 33.

// The program should first calculate the sum of these five variables and store the result in a separate variable named sum .
// Then, the program should divide the sum variable by 5 to get the average.
// Display the sum and average with precision 3 on the screen.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int var1 = 28;
  int var2 = 32;
  int var3 = 37;
  int var4 = 24;
  int var5 = 33;

  // set precision to 3 digits after decimal point
  cout << setprecision(3);
  cout << fixed << showpoint;

  double sum = var1 + var2 + var3 + var4 + var5; //sum of 5 variabls
  double average = sum / 5;

  cout << "Sum: " << sum << endl;
  cout << "Average: " << average << endl;
}