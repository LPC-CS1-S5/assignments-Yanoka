#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  int id,number;
  string employeeName, depName;
  double salary;

  ofs.open("employee.txt");
  if (ofs.fail()){
    cerr << "File open error "<<endl;
    exit(-1);
  }
  do{
    cout << "Please, enter the number of employees: "<< endl;
    cin >> number;
    ofs << number << endl;
  }
  while(number <= 0); 


  for (int i=0; i<number; i++) {
    cout << "Please, enter the id: ";
    cin >> id;
    ofs << id << " ";

    cout << "Please, enter the name: ";
    cin >> employeeName;
    ofs << employeeName << " ";

    cout << "Please, enter the department name: ";
    cin >> depName;
    ofs << depName << " ";

    cout << "Please, enter the salary: ";
    cin >> salary;
    ofs << salary << endl;
    
  }

  ofs.close();

}