#include <iostream>
using namespace std;

int main()
{
  int i, j;
  

  for (i=0; i<3; i++){

    for(j=i; j<3; j++){
      cout << i << "," << j << endl;
    }
  }
}