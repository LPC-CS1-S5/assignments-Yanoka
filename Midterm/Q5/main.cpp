#include<iostream>
#include <fstream>
using namespace std;

void getInput(int &, int &);
int isSame(int, int);
int isGreater(int, int);
void writefile(ofstream &, int);

int main()
{
	int num1, num2;
	
	ofstream ofs;
	ofs.open("question5.txt");
	if (ofs.fail())
	{
		cerr << "File Open Error \n";
		exit(0);
	}

	while(1)
	{
		getInput(num1,num2);
		if (isSame(num1,num2))
			break;
			
	}


	ofs.close();
}