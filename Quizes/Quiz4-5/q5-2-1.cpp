#include <iostream>
#include <time.h>
using namespace std;

int main()
{
  int num;
  int minAmount = 101;
  
  srand (time(0));
  for (int i=0;i<3 ;i++){
    num = rand()%100;
    cout << num << endl; 

    if (num < minAmount)
      minAmount = num;
  }
  
  cout << "min: " << minAmount <<endl;

}
