#include <iostream>

using namespace std;

int main() {
     int begin, end, i;

     do {
          cout << "Please, enter begin and end: ";
          cin >> begin >> end;
     } while ((begin > end) || (begin < 0) || (end > 100));

     i = begin;

     
     do {
          if (i % 2 == 0) {
               cout << i << endl;
          }

          i++;               
     } while (i < end);


}