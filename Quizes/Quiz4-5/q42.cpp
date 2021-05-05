#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const double 	W02 = 1.10;
  const double 	W06 = 2.20;
  const double 	W10 = 3.70;
  const double 	W20 = 4.80;
  double rate, weight, distance,charge;

  cout << "Please, enter weight and distance:" << endl;
  cin >> weight >> distance;

  if (weight <= 0 || weight > 20) 
  {
    cout << "Invalid weight" << endl;
	exit(0);
  }

  if (distance < 10 || distance > 3000) 
  {
    cout << "Invalid distance" << endl;
	exit(0);
  }

  if (weight <= 2) 
    rate = W02;
  else if (weight <= 6)
	  rate = W06;
  else if (weight <= 10) 
    rate = W10;
  else 
    rate = W20;
  if (distance < 500) 
    charge = rate;
  else 
    charge = (distance / 500) * rate;

  cout << "Charge: " << charge << endl;
}