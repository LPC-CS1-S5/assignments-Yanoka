#include <iostream>
using namespace std;

int main()
{
  double mel_prise = 88.67;
  float meal_tax_precent = 1.0675;
  double meal_tip_precent = 0.2;

  double meal_tax = meal_price * meal_tax_present;
  double meal_tip = meal_tax * meal_tip_present;
  double meal_total = meal_tax + meal_tip;

  cout << "meal cost: " << meal_price << endl;
  cout << "tax: " << meal_tax << endl;
  cout << "tip amount: " << meal_tip << endl;
  cout << "meal total: " << meal_total << endl;
  return 0;
}