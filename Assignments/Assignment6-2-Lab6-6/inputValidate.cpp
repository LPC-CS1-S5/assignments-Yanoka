#include <iostream>
using namespace std;

bool inputValidate(int begin, int end)
{
  if (begin > 0 && end > 0)
    return true;
  else
    return false;
}