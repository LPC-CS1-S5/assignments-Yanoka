#include <iostream>
using namespace std;

int division(n1,n2)
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