#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int begin,end,i;
  i=0;
  int nthPower=1;
  
  do{
    cout << "Please, enter the range:" << endl;
    cin >> begin >> end;
  }
  while ((begin<0)||(end>1300));

  // while ((begin < pow(2,i)) && (pow(2, i) < end)) {
  //   cout << pow(2, i) << " ";
  //   i++;
  // }

  while ((begin < nthPower) && (nthPower < end)) {
    cout << nthPower << " ";
    nthPower = nthPower * 2;
    i++;
  }

  if (i == 0) 
    cout << "Not found" << endl;

}