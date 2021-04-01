#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int isGreater(int);
int getRdnum(void);

int main()
{
	const int N = 10;
	int num;
	
	srand(time(0));

	ofstream ofs;

	ofs.open("numbers.txt");
	if (ofs.fail())
	{
		cerr << "File open error " << endl;
		exit(-1);
	}

	for (int i = 0; i < N; i++)
	{
		int num = getRdnum();

		if (isGreater(num))
		{
			ofs << num << " ";
		}        
	}

	ofs.close();
}

int getRdnum(void)
{
	return rand() % (50 - 1) + 1;
}