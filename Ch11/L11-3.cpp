#include <iostream>
#include <fstream>
using namespace std;

const int NUMCOURSE = 2;
struct Scores {
   int score[NUMCOURSE];
   int sum;
   int avg;
};
struct Students
{
	int id;
	string name;
	Scores screcord;
};
void printrecord(Students s);
void findusername(Students [], int, string);
int makerecord(Students []);

int main()
{
	int N;
	string username;
	Students s[N];
	int 	i;

	N = makerecord(s);
	for(i=0;i<N;i++)
		printrecord(s[i]);

	cout << "Enter the username you want to find: \n";
	cin >> username;
	findusername(s, N, username); 

}
int  	makerecord(Students s[])
{
	int i;
	ifstream ifs;

	ifs.open("students.txt");
	if ( ifs.fail()) 
	{
		cerr << "File Open Error\n";
		exit(0);
	}
	i = 0;
	while(ifs >> s[i].id >> s[i].name >> s[i].screcord.score[0] >> s[i].screcord.score[1] )
	{
		s[i].screcord.sum = 0;
		for(int idx=0; idx<NUMCOURSE; idx++)
			s[i].screcord.sum += s[i].screcord.score[idx];
		s[i].screcord.avg = s[i].screcord.sum / NUMCOURSE;
		i++;
	}
	return i-1;
}

void 	findusername(Students s[], int N, string username)
{
	int found = 0;
	for(int i=0; i<N; i++)
	{
		if (s[i].name.find(username) != string::npos){
				cout << "We found the record for" << username << endl;
				printrecord(s[i]);	
				found = 1;
		}
	}
	if (!found)
		cout << "We don't have the record for " << username << endl;

}

void 	printrecord(Students s)
{
		cout << "ID \t\t Name\t Score1\t Score2\t Sum\t Avg\n";
		cout << s.id << "\t";
		cout << s.name << "\t";
		for(int idx = 0; idx < NUMCOURSE; idx++)
			cout << s.screcord.score[idx] << "\t\t";
		cout << s.screcord.sum << "\t\t";
		cout << s.screcord.avg << endl;
}