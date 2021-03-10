#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
  int num, generatedNum;
  srand (time(0));

  cout << "Please,enter the number of items: "<<endl;
  cin >> num;

  ofstream ofs;

  ofs.open("Numbers.txt");
  if (ofs.fail()){
    cerr << "File open error "<<endl;
    exit(-1);
  }
  for (int i=0; i < num; i++) {
    generatedNum = rand() % 100;
    ofs << generatedNum << " ";
  }
  
  ofs.close();
}
