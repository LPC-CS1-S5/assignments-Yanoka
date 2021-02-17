#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  const double PERC1019 = 0.2;
  const double PERC2049 = 0.3;
  const double PERC5099 = 0.4;
  const double PERC100 = 0.5;
  const double NO_DISCOUNT = 0;
  const int originalPrice = 99;
  double salePrice, originalAmount, discountPrice, dRate;
  int numbersold;

	cout << "Please, enter the number of sold units:\n" << endl;
  cin >> numbersold;

	if (numbersold < 0)
	{	
		cerr << " Input Error \n";
		exit(-1);
	}

  if (numbersold < 10) 
  {
    dRate = NO_DISCOUNT;
  }	
	else if (numbersold < 20)
  {
    dRate = PERC1019;
  }
	else if (numbersold < 50)
	{
      dRate = PERC2049;
  }
  else if (numbersold < 100)
  {
      dRate = PERC5099;
  }
	else 
  {
    dRate = PERC100;
  }

  originalAmount = originalPrice * numbersold;
  discountPrice = originalAmount * dRate;
  salePrice = originalAmount - discountPrice;
	
  cout << "Original price: " << originalAmount << endl;
  cout << "Discount price: " << discountPrice << endl;
  cout << "Sale price: " << salePrice << endl;
}
