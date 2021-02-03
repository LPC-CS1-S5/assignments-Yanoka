#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int seats_a;
int seats_b;
int seats_c;
double total;

const int seats_a_price = 15;
const int seats_b_price = 12;
const int seats_c_price = 9;


cout << "enter your Seats Class A: ";
cin >> seats_a;
cout << "enter your Seats Class B: ";
cin >> seats_b;
cout << "enter your Seats Class C: ";
cin >> seats_c;

cout << setprecision(2);
cout << fixed << showpoint;

total = seats_a*seats_a_price + seats_b*seats_b_price + seats_c*seats_c_price;
cout << total << endl;

}