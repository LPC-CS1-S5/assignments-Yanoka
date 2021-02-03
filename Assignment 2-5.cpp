#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double meal_price = 88.67;        // meal price
  float meal_tax_percent = 0.0675;  // tax percent
  double meal_tip_percent = 0.2;    // tip percent

  // calculate  meal tax, meal tip, total price
  double meal_tax = meal_price * meal_tax_percent; 
  double meal_tip = meal_price * meal_tip_percent;
  double meal_total = meal_tax + meal_tip + meal_price;

  // set precision to 2 digits after decimal point
  cout << setprecision(2);
  cout << fixed << showpoint;

  // print meal cost, meal tax, meal tip, total price
  cout << "meal cost: $" << meal_price << endl;
  cout << "tax: $" << meal_tax << endl;
  cout << "tip amount: $" << meal_tip << endl;
  cout << "meal total: $" << meal_total << endl;
 
}

