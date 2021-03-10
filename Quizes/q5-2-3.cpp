#include <iostream>
using namespace std;

int main()
{
  int begin,end,i,j;
  
  do{
    cout << "Please,enter two integers from 1 to 100 " << endl;
    cin >> begin >> end; 
  }
  while(begin > end);

  for (i=begin; i<end; i++){
    for(j=2; j<i;j++){
      if(i%j==0)
        break;
    
    }
    if (i==j)
     cout << i << " is prime number" <<endl;
  }
}