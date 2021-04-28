#include	<iostream>
#include	<cmath>
#include	<iomanip>
using	namespace	std;

const		int 	SIZE=3;

int			getdiagonalsum1(int [][SIZE]);
int			getdiagonalsum2(int [][SIZE]);

int			main()
{
	int		number[SIZE][SIZE] = { 
	//	0    1  2 
		{10, 20, 10},  // 0 
		{80, 90, 100}, // 1
		{100, 200, 300}// 2
	};
  
	// number[0][0] => 10 // row, column
	// number[1][1] => 90
	// number[2][2] => 300

	// number[0][2]	
	// number[1][1]
	// number[2][0]
	
	int		sum1,sum2;

	sum1 = getdiagonalsum1(number);
	cout << "Sum1 :  " << sum1 << endl;
	sum2 = getdiagonalsum2(number);
	cout << "Sum2 : " << sum2 << endl;
	cout << "Difference is : " << setw(5) << abs(sum1-sum2) << endl;
}
int			getdiagonalsum1(int number[][SIZE])
{
	int sum = 0;

	for (int i=0; i<SIZE; i++) {
		sum += number[i][i];
	}
	return sum;	
}
int	getdiagonalsum2(int number[][SIZE])
{
	int sum = 0;

	for (int i=0; i<SIZE; i++) {
		sum += number[i][SIZE-i-1]; // SIZE (3) - 1 - 1
	}
	return sum;
}