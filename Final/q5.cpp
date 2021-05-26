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

Grade g[16];

int main()
{
	ifstream ifs;
	ofstream 	ofs;

	ifs.open("grades.txt");
	ofs.open("grades.bin");	

  for ( int i = 0; i < 16; i++)
  {
		ifs >> readline; 
		ss.clear();
		ss << readline;

		getline(ss, buf, ',');
		strcpy(g[i].first, buf.c_str());

		getline(ss, buf, ',');
		strcpy(g[i].last, buf.c_str());
		 
		getline(ss, buf, ',');
		strcpy(g[i].ssn, buf.c_str());

		getline(ss, buf, ',');
		g[i].score.sc[0] = stod(buf);

		getline(ss, buf, ',');
		g[i].score.sc[1] = stod(buf);

		getline(ss, buf, ',');
		g[i].score.sc[2] = stod(buf);

		getline(ss, buf, ',');
		g[i].score.sc[3] = stod(buf);

		getline(ss, buf, ',');
		g[i].score.sc[4] = stod(buf);

		getline(ss, buf, ',');
		strcpy(g[i].score.grade, buf.c_str());    
		
		ofs.write( (char *)&g[i], sizeof(Grade) );

	}
}