#include <iostream>
using namespace std;

int main() {
  double Celsiuse, Farenheit;

  cout << "Enter the temperature by Celsiuse ";
  cin >> Celsiuse;
  Farenheit = 9/5.0 * Celsiuse + 32;

  cout << "Celsiuse " << Celsiuse << " is " << Farenheit << " Farenheit" << endl;

}