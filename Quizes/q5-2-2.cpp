#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int M,N,i;
  i=0;
  int nthPower=1;

  do{
    cout <<  "please , enter the base number and exponent: " << endl;
    cin >> N >> M;
  }
  while (N <= 0 || N >= 10 || M < 1 || M > 10);

  cout << "power of 0: " << 1 << endl;

  for (i = 1; i<M; i++) {      
    nthPower *= N;
    cout << "power of " << i << ": " << nthPower << endl;
  }
  
  //if (i == 0) 
  //  cout << "Not found" << endl;
}