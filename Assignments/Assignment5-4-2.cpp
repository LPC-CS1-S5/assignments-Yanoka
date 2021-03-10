#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  int num;
  int sum = 0;
  int numItems =0;
  int max = -1;
  int min = 101;

  ifs.open("Numbers.txt");
  if (ifs.fail()){
    cerr << "File open error "<<endl;
    exit(-1);
  }

  while (ifs >> num)
    {
      sum+=num;
      numItems++;
      cout << num <<endl;

      if(num>max)
        max=num;
      if(num<min)
        min=num;

    }

  cout << numItems << endl;
  cout << "Sum: " << sum <<endl; 
  cout << "Min: " << min << " Max: " << max <<endl;
  cout << "Average: " << sum/(float)numItems << endl;
  
  ifs.close();
}