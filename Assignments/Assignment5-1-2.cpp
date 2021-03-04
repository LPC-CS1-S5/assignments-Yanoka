#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int begin,end,i;
  i=0;
  int nthPower=1;
  
  do{
    cout << "Please, enter the range from 0 to 1300:" << endl;
    cin >> begin >> end;
  }
  while ((begin<0)||(end>1300));

  /*
   With pow()
    // while ((begin < pow(2,i)) && (pow(2, i) < end)) {
    //   cout << pow(2, i) << " ";
    //   i++;
    // }
  */

  /*
    Errors: because of condition on line 27, all tests failed.
    I changed the condition to condition on line 34 to fix tests.

    // while ((begin < nthPower) && (nthPower < end)) {
    //   cout << nthPower << " ";
    //   nthPower = nthPower * 2;
    //   i++;
    // }
  */

  while (nthPower < end) {
    // Print only if data in range
    if (nthPower > begin) {
      cout << nthPower << " ";      
    }

    // calculate power
    nthPower = nthPower * 2;
    
    // change i to understand if we need to print "Not found"
    i++;
  }

  // Print "not found if no data in range
  if (i == 0) 
    cout << "Not found" << endl;

}