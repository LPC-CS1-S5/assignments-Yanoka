#include <iostream>
using namespace std;

int main()
{
  double work_hours=50;
  double regular_wages,overtume_wages;
  double based_pay_rate=18.251,overttime_pay_rate=27.78; double regular_houres=40,overtime_hours;
  double total_wages;
  
  // regular_wages = regular_hours * base_
  // overtime_hours = wark_hours * base_

  regular_wages = regular_hours * base_pay_rate;
	overtime_hours = work_hours - regular_hours;
	overtime_wages = overtime_hours * overtime_pay_rate;
	total_wages = regular_wages + overtime_wages;

	cout << "Regular wages " << regular_wages << endl;
	cout << "Overtime wages " << overtime_wages << endl;
	cout << "Total wages " << total_wages << endl;
}