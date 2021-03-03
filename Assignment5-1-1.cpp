#include <iostream>
using namespace std;

int main()
{

  int n,num,i;
  int nthPower=1;
  float invertnthPower;

  cout << "Please, enter the number of 💪 (powers) from -31 to 31 :" << endl;
  cin >> n;

  if (n > 0)
    num = n;
  if (n < 0)
    num = n*-1;
  
  for (i=0; i<num; i++)
    nthPower = nthPower*2;

  if (n < 0){
    invertnthPower = 1.0/nthPower;
    cout << "Result:\t" << invertnthPower << endl;
    }
  else
    cout << "Result:\t" << nthPower << endl;
  


}

