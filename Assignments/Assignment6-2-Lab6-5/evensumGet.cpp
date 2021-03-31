#include	<iostream>
using namespace	std;

int	evensumGet(int);

int evensumGet(int even)
{
  static int eSum = 0;
  eSum += even;
  return eSum;
}