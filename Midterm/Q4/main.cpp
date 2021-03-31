#include <iostream>
#include <time.h>
#include <fstream>

using namespace std;

int getRdnum();
int getRdnum(int n1);
int getRdnum(int n1,int n2);

int main()
{
  srand(time(0));
	cout << << endl;
	cout << << endl;
	cout << << endl;

}

int getRdnum()
{
  const int MAX = 100;
  const int MIN = 1;
  int num = rand() % (MAX - MIN) + MIN;
  return num;
}

int getRdnum(int n1)
{
  const int MIN = 1;
  int num = rand() % (n1 - MIN) + n1;
  return num ;
}

int getRdnum(int n1,int n2)
{
	int num = rand() % (n2 - n1 + 1) + n1;
  return num;
}
