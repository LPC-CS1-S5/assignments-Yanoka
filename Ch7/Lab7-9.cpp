#include <iostream>
#include <iomanip>
using namespace std;

void findMaxSum(int[], int[][5], int, int);
void findMaxElm(int[], int[][5], int, int);
void findMaxVal(int[], int[][5], int, int);
const int SIZE = 10;
int main()
{

    const int NUM_ROWS = 6; // Number of rows
    const int NUM_COLS = 5; // Number of columns
    int result[SIZE] = { 0 };
    int numbers[NUM_ROWS][NUM_COLS] = { 
			{ 2, 7, 9, 6, 4 },
			{ 6, 1, 8, 10, 4 },
			{ 4, 3, 7, 2, 9 },
			{ 9, 9, 0, 3, 1 },
			{ 8, 8, 7, 8, 9 },
			{ 1, 2, 1, 2, 3 } 
		};

    findMaxSum(result, numbers, NUM_ROWS, NUM_COLS);
    cout << "The row values are:";
    for (int i = 0; i < NUM_COLS; i++)
        cout << setw(5) << result[i];
    cout << endl;

    findMaxElm(result, numbers, NUM_ROWS, NUM_COLS);
    cout << "The Max values in the rows are:\n";
    for (int i = 0; i < NUM_ROWS; i++)
        cout << setw(5) << result[i] << endl;

    findMaxVal(result, numbers, NUM_ROWS, NUM_COLS);
    cout << "The row that has the max value ";
    for (int i = 0; i < NUM_COLS; i++)
        cout << setw(5) << result[i];
    cout << endl;
}

void findMaxSum(int result[], int num[][5], int rows, int cols)
{
	int maxRowSum = 0;

	for (int i = 0; i < rows; i++) {
		int rowSum = 0;
		for (int j = 0; j < cols; j++) {
			rowSum += num[i][j];
		}

		if (maxRowSum < rowSum) {
			maxRowSum = rowSum;
			for (int j = 0; j < cols; j++) {
				result[j] = num[i][j];
			}
		}
	}
}

void findMaxElm(int result[], int num[][5], int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		int maxElm = -1;

		for (int j = 0; j < cols; j++) {
			if (maxElm < num[i][j]) {
				maxElm = num[i][j];
				result[i] = num[i][j];
			}
		}
	}
}

void findMaxVal(int result[], int num[][5], int rows, int cols)
{
	int maxNum = -1;
	int maxRow = -1;
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {
			if (maxNum < num[i][j]) {
					maxNum = num[i][j];
					maxRow=i;
			}
		}
	}
	for (int j=0; j<cols; j++){
		result[j] = num[maxRow][j];
	}
}
