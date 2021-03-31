#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writefile (ofstream &ofs, int division)
{
  ofs << division << endl;
  if (ofs.fail())
  {
    cerr << "File Write Error \n";
    exit(0);
  }
}
