#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  int num,score1,score2;
  string stname;

  cout << "Please,enter the number?: "<<endl;
  cin >> num;

  ofs.open("studentName.txt");
  if (ofs.fail()){
    cerr << "File open error "<<endl;
    exit(-1);
  }
  
  for (int i=0;i < num;i++)
  {
      cout << "Please,enter the name: "<<endl;
      cin >> stname;
      ofs << stname << " ";

      cout << "Please,enter two scores: "<<endl;
      cin >> score1 >> score2;
      ofs << score1 << " " << score2 << endl;

  }
  ofs.close();
}
