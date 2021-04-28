#include	<iostream>
#include	<ctime>
#include	<iomanip> 

using	namespace	std;

int		makearray(int []);
void	bubble(int [], int);
void	printout(int [], int);

const	int		SIZE = 100;

int			main()
{
	int		number[SIZE];
	int		last;

	last = makearray(number);
	cout << endl << "BEFORE BUBBLE:" << endl;
	printout(number, last);
	bubble(number, last);
	cout << endl << "AFTER BUBBLE:" << endl;
	printout(number, last);
}

int	 	makearray(int	number[])
{	
	srand(time(0));
	//or do-while: 
	//do {
	//	last = rand() % 20 ;
	//} while (last < 10);
	
	int num_el = rand() % 20 + 10; 
	for (int i=0; i<num_el; i++)
	number[i] = rand() % 100;
	return num_el;
}
void	bubble(int number[], int last)
{
	for(int i=0; i<last-1; i++){
		int temp;
		if (number[i] > number[i+1]) {
			swap(number[i],number[i+1])
			// temp = number[i];
			// number[i] = number[i+1];
			// number[i+1] = temp;
		}
	}
}
void	printout(int number[], int last)
{
	cout << "Array:" << endl;
	
	for (int i=0; i<last; i++)
		cout << setw(4)<< number[i];
	
	cout << endl << "Last: " << last << endl;
}