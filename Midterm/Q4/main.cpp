#include <iostream>
#include <time.h>

using namespace std;

int getRdnum();
int getRdnum(int n1);
int getRdnum(int n1, int n2);

const int MIN = 1;

int main()
{
	int n1;
	int n2;

	cout << "Please, enter two numbers in range 1 to 100: " << endl;
	cin >> n1 >> n2;

  srand(time(0));
	cout << getRdnum() << endl;
	cout << getRdnum(n1) << endl;
	cout << getRdnum(n1, n2) << endl;

}

int getRdnum()
{
  const int MAX = 100;
  int num = rand() % (MAX - MIN + 1) + MIN;
  return num;
}

int getRdnum(int n2)
{
  int num = rand() % (n2 - MIN + 1) + MIN;
  return num;
}

int getRdnum(int n1, int n2)
{
	int num = rand() % (n2 - n1 + 1) + n1;
  return num;
}


