#include	<iostream>
#include	<fstream>
#include	<string>

using namespace std;

const	int 	NUM_OF_LINES=5;

struct Employee
{	
	int		id;	
	string	firstName;
	string	lastName;
	int 	salary;	
	string departmentName;
	string month;
	int day;
	int year;

};

int		makestructarray(Employee []); 
void	printout(const Employee , int );
void	findusers(Employee [],int, string);

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
	
  employee s[NUM_OF_LINES];
  int i = 0;

  ifs.open("employee.txt");


  while(i < NUM_OF_LINES)
  {
    ifs >> s[i].id;
		cout << " ID: " << s[i].id << endl;

    ifs >> s[i].firstName;
		cout << " First name: " << s[i].firstName << endl;

		ifs >> s[i].lastName;
		cout << " Last name: " << s[i].lastName << endl;

		ifs >> s[i].salary;
		cout << " Salary: " << s[i].salary << endl;

		ifs >> s[i].departmentName;
		cout << " Department name: " << s[i].departmentName << endl;

		ifs >> s[i].month;
		cout << " month: " << s[i].month << endl;

		ifs >> s[i].day;
		cout << " day: " << s[i].day << endl;

		ifs >> s[i].year;
		cout << " year: " << s[i].year << endl;
    i++;
  } 

  ifs.close();
}

void	findusers(Employee s[], int salary, string department)
{
		for (int i=0; i<NUM_OF_LINES; i++) 
	{
		if (s[i].name.find(department) != string::npos) {
			printout(s[],i);
		

		}
	}

}

void	printout(const Employee s, int i)
{
	cout << " ID: " << s[i].id << endl;
	cout << " First name: " << s[i].firstName << endl;
	cout << " Last name: " << s[i].lastName << endl;
	cout << " Salary: " << s[i].salary << endl;
	cout << " Department name: " << s[i].departmentName << endl;
	cout << " month: " << s[i].month << endl;
	cout << " day: " << s[i].day << endl;
	cout << " year: " << s[i].year << endl;
}