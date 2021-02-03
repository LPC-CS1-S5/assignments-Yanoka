#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double males,females,total,total_males;


  cout << "How many males in a class? ";
  cin >> males;
  cout << "How many females in a class? ";
  cin >> females;


  total = males + females;
  total_males = males / total;

  cout << "Males in the class:  " << setprecision(2) << fixed << showpoint<< total_males << " or "; 
  cout << setprecision(0) << noshowpoint << total_males*100 << "% " << endl;
 
  cout << "Females in the class:  " << setprecision(2) << fixed << showpoint<< 1-total_males << " or "; 
  cout << setprecision(0) << noshowpoint << (1-total_males)*100 << "% " << endl;

}
