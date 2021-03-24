#include <iostream>
using namespace std;

double nthpowerp(int num)
{
  int i;
  int nthPower =1;

  for (i=0; i<num; i++)
  {
    nthPower *=2.0;
  }
  cout << num << " " << nthPower << endl;
  return nthPower;
}