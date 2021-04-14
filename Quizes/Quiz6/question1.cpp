#include <iostream>

using namespace std;

void swapTwoValues(int &n1, int &n2);
void swapTwoValues(float &f1, float &f2);

int main()
{
int n1, n2;
float f1,f2;

cout << "Please, enter the two integer numbers: " << endl;
cin >> n1 >> n2;
cout << "Please, enter the two float numbers: " << endl;
cin >> f1 >> f2;

swapTwoValues(n1,n2);
swapTwoValues(f1,f2);

cout << n1 << " " << n2 << endl;
cout << f1 << " " << f2 << endl;

}

void swapTwoValues(int &n1, int &n2)
{
	int temp;
	temp  = n1;
	n1 = n2;
	n2 = temp;

}
void swapTwoValues(float &f1, float &f2)
{
	float temp;
	temp  = f1;
	f1 = f2;
	f2 = temp;
}