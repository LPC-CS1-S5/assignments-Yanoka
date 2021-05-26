#include    <iostream>
#include    <fstream>
#include    <iomanip>
using namespace std;

const unsigned short N=5;

struct  Scores{
    double  sc[N];
		char 		grade[3];
    //string  grade;
};

struct Grade{
	char first[20];
	char last[50];
	char ssn[20];

    // string  first;
    // string  last;
    // string  ssn;
  Scores  score;
};

Grade g;

int main()
{
	ifstream ifs;
	ofstream 	ofs;

	ifs.open("grades.txt");
	ofs.open("grades.bin");	

}