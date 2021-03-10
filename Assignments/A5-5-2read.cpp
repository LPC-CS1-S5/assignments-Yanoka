#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  int num,score1,score2,sum,average;
  int classSum = 0;
  string stname;

  ifs.open("studentName.txt");
  if (ifs.fail()){
    cerr << "File open error "<<endl;
    exit(-1);
  }

  float numRows;
  ifs >> numRows;

  for (int i=0; i< numRows; i++) {
    ifs >> stname >> score1 >> score2;
    sum = score1 + score2;
    average = sum / 2;
    cout << stname << " " << score1 << " " << score2 << " " << sum << " " << average << endl;
    classSum += sum;
  }

  cout << "Class total " << classSum << endl;
  cout << "Class average " << classSum / numRows << endl;
  
  ifs.close();
}