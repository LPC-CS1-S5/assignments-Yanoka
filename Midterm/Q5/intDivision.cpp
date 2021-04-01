#include <iostream>
using namespace std;

int intDivision(int n1,int n2)
{
	int result;

	if (n1>n2)
	{
		result = n1/n2;
		return result;
	}
	else 
		result = n2/n1;
		return result;
}
