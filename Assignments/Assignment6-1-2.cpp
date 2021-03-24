#include <iostream>
using namespace std;

double nthpowerp(int);
double nthpowern(int);
void printout(double);
double result;

int main()
{
  int n;
  cout << "Enter your input\n";
  cin >> n;

  if(n > 0)
     result = nthpowerp(n);
  else if (n < 0)
     result = nthpowern(n);
  else 
     result = 1;

  printout(result);
}