#include <iostream>
using namespace std;

int main()
{
  int begin,end,i,j,sum;
  do{
    cout << "Please,enter two integers from 1 to 100 " << endl;
    cin >> begin >> end; 
  }
  while(begin > end);

  for (i=begin; i<end; i++){
    for(j=2; j<i;j++){
      if(i%j)
        break;
    
    }
    if (j>(i/2))
     cout << i << " is prime number" <<endl;
  }
}