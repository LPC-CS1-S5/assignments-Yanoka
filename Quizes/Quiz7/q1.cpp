#include	<iostream>
#include	<iomanip>
#include	<cmath>
using 	namespace	std;

void lessThan10(int[],int);

int 	main()
{
	int number[10] = {10,15,11,1,20,8,4,100,13,12};

	for (int i=0; i<10; i++)
	{
		lessThan10(number,i);
	}
}

void lessThan10(int n[], int i)
{
	if (i==0)
	{
	  if (abs(n[i]-n[i+1] < 10) )
   	 cout << i+1 << " less than 10\n";
	}

	else if (i==9)
	{
		if (abs(n[i]-n[i-1] < 10) )
   	 cout << i+1 << " less than 10\n";
	}

	else 
	{
		if (abs(n[i] - n[i + 1]) < 10 && abs(n[i] - n[i - 1]) < 10)
   	 cout << i+1 << " less than 10\n";
	}
}
