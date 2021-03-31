#include <iostream>
using namespace std;

int isGreater(int n) {
	static int prevNumber = -1;

	if(prevNumber == -1)
	{
		prevNumber = n;
		return 0;
	}
	else
	{
		if(n > prevNumber)
		{
			prevNumber = n;
      return 1;
    }
    else
    {
      prevNumber = n;
      return 0;
		}
	}
}