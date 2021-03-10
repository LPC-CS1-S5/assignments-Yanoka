#include <iostream>
#include <time.h>
using namespace std;

int main()
{
  int num,minAmount;
  int minAmount = 101;
  
  srand (time(0));
  for (int num=0;num<3 ;num++){
    num = rand()%100;
    cout << num << endl; 

  }
  if (num < minAmount)
    minAmount = num;
    cout << minAmount <<endl;

}
