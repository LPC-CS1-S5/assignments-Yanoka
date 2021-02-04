#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double amount_1, amount_2, amount_3, average;
  string month_1, month_2, month_3;

  cout << "Please, enter the first month name and amount:  ";
  cin >> month_1 >> amount_1;
  cout << "Please, enter the second month name and amount: ";
  cin >> month_2 >> amount_2;
  cout << "Please, enter the third month name and amount:  ";
  cin >> month_3 >> amount_3;

  average = (amount_1 +amount_2+amount_3)/3;
  cout << "The average rain fall for " << month_1 << ", " << month_2 << ", " << month_3 << " is " << setprecision(2) << fixed << average << " inches "<< endl;
  }