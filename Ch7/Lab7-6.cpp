#include	<iostream>
#include	<iomanip>
using 	namespace	std;

void	insertone(int [], int &, int);
void	deleteone(int [], int &, int);
void	printout(int [], int);


int 	main()
{
	const	int SIZE=100;
	int 	usernum;
	int 	length=10;
	int 	number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};

	cout << "Enter the number to insert "<< endl;
	cin	>> usernum;
	printout(number, length);
	insertone(number, length, usernum);
	printout(number, length);

	cout << "Enter the number to delete " << endl;
	cin >> usernum;
	deleteone(number, length, usernum);
	printout(number, length);
}
void	insertone(int number[], int &length, int usernum)
{
	int position,i;
	for (i=0; i<length; i++) 
		if (number[i] > usernum)
			break;

	position = i;
	for (i=length-1; i>= position; i--) 
		number[i+1] = number[i];

	number[i+1] = usernum;
	length += 1;
}
void	deleteone(int number[], int &length, int usernum)
{
	int position, i;
	for(i=0;i<length;i++) {
		if (number[i] == usernum) {
			position = i;
			break;
		}
	}

	for (i = position; i<length-1; i++) {
		number[i] = number[i+1];
	}

	length -= 1;
}

void	printout(int number[], int last)
{
	for(int i=0;i<last; i++)
		cout << setw(5) << number[i] ;
	cout << endl;
}