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

void		makestructarray(Employee []); 
void	printout(Employee[] , int );
void	findusers(Employee[],int, string);

int 	main()
{
	int		numofRecords=0;
	Employee	s[50];
	string	username;

	makestructarray(s);

	int salary = 100000;
	string department = "Computer";

	cout << endl << "Trying to find" << endl;
	findusers(s, salary, department);
}

void		makestructarray(Employee s[])
{
	ifstream ifs;
	
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
		if (s[i].departmentName.find(department) != string::npos) {
			printout(s, i);
		}
		if (s[i].salary > salary) {
			printout(s, i);
		}
	}

}

void	printout(Employee s[], int i)
{
	cout << " ID: " << s[i].id << endl;
	cout << " First name: " << s[i].firstName << endl;
	cout << " Last name: " << s[i].lastName << endl;
	cout << " Salary: " << s[i].salary << endl;
	cout << " Department name: " << s[i].departmentName << endl;
	cout << " month: " << s[i].month << endl;
	cout << " day: " << s[i].day << endl;
	cout << " year: " << s[i].year << endl;
	cout << endl;
}