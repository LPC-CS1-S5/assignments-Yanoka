#include <iostream>
using namespace std;

int getsum(int);

int main()
{
  int N,sum;

  do
  {
    cout << "Please, enter the number: " << endl;
    cin >> N;

    if (N!=-1)
    {
      sum = getsum(N);
      cout << "The sum is: " << sum << endl;
    }
  }
  while (N !=-1);

}