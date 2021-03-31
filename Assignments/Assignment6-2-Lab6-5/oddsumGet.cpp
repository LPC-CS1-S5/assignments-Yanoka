#include	<iostream>
using namespace	std;

int	oddsumGet(int);

int oddsumGet(int odd)
{
  static int oSum = 0;
  oSum += odd;
  return oSum;
}