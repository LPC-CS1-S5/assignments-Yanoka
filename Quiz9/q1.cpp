#include	<iostream>
#include	<fstream>
#include	<string>

using namespace std;

const	int 	NUMCOURSE=2;

struct Employee
{	
	int		id;	
	string	name;
	int 	salary;	
	string departmentName;
	string month;
	int day;
	int year;

};

int		makingstructarray(Employee []); 
void	printout(const Employee );
void	findusername(Employee [],int, string);

int 	main()
{
	int		numofRecords=0;
	Employee	s[50];
	string	username;

	numofRecords = makingstructarray(s);
	cout << "Total number of stdents records is " << numofRecords << endl;
	for(int	 i=0; i<numofRecords; i++)
		printout(s[i]);

	cout << "Enter user name to find in Employee's records\n";
	cin	>> username;
	findusername(s, numofRecords, username);

}

int		makestructarray(Employee s[])
{
	ifstream ifs;
	
  student s[10];
  int i = 0;

  ifs.open("employee.txt");


  while(i < 10)
  {
    s[i].sum = 0;

    ifs >> s[i].id;
		cout << " ID: " << s[i].id << endl;

    ifs >> s[i].name;
		cout << " name: " << s[i].name << endl;

    for(int j = 0; j < NUMCOURSE; j++)
    {
      ifs >> s[i].score[j];
			cout << " score: " << s[i].score[j] << endl;
      s[i].sum += s[i].score[j];
    }

		cout << " Sum: " << s[i].sum << endl;
    s[i].avg = s[i].sum / 2;
		cout << " Avg: " << s[i].avg << endl;
    i++;
  } 

  ifs.close();
}

void	findusername(Employee s[], int numofRecords, string username)
{
		for (int i=0; i<10; i++) 
	{
		if (s[i].name.find(username) != string::npos) {
			cout << "ID: " << s[i].id << endl;
			cout << "name: " << s[i].name << endl;
			cout << "scores: " << endl;

			for(int j = 0; j < NUMCOURSE; j++) 
			{
				cout << s[i].score[j] << endl;
    	}

			cout << " Sum: " << s[i].sum << endl;
			cout << " Avg :" << s[i].avg << endl;
		}
	}

}

void	printout(const Employee s)
{
	cout << s. id << "\t" << s.name << "\t"
		<< s.score[0] << "\t" << s.score[1] << 
		"\tsum:" << s.sum << "\taverage: "<< s.avg << endl;

}