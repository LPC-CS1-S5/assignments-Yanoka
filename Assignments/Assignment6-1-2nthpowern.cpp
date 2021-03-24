#include <iostream>
using namespace std;

double nthpowern(int num)
{
  int i;
  double nthPower = 1;

  num = num *-1;

  for (i=0; i<num; i++)
  {
    nthPower *=2.0;
  }
  nthPower = 1.0 / nthPower ;
  
  cout << num << " " << nthPower << endl;
  return nthPower;
}