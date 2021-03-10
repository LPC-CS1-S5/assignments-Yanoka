#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  int id,number;
  string employeeName, depName;
  double salary;

  ifs.open("employee.txt");
  if (ifs.fail()){
    cerr << "File open error "<<endl;
    exit(-1);
  }

  ifs >> number;
  cout << number << endl;
  
  for (int i=0; i<number; i++) {
    ifs >> id >> employeeName >> depName >> salary;
    cout << id << " " << employeeName << " " << depName << " " << salary << endl;

  }

  ifs.close();

}