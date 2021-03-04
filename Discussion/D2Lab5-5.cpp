#include <iostream>

using namespace std;

int main() {
  int begin, end, i;

  cout << "Please, enter begin and end: ";
  cin >> begin >> end;

  while ((begin > end) || (begin < 0) || (end > 100)) {
    cout << "Please, enter begin and end: ";
    cin >> begin >> end;
  }

  i = begin;

  while (i < end) {          
    if (i % 2 == 0) {
          cout << i << endl;
    }

    i++;               
  }
}
