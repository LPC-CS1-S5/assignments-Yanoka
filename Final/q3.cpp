#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool subset(int[], int[]);

const int SIZE1 = 5;
const int SIZE2 = 10;

int main() {
	int numbers1[SIZE1] = {2, 3, 5, 9, 10};
	int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

	vector<int> v1(numbers1, numbers1 + SIZE1);
	vector<int> v2(numbers2, numbers2 + SIZE2);

	if (includes(v2.begin(), v2.end(), v1.begin(), v1.end()))
		cout << "Subset" << endl;
	else
		cout << "Not subset" << endl;
}

// bool subset(int numbers1[], int numbers2[]){
// 	for (int i = 0; i < SIZE2; i++) {
// 		for (int j = 0; j < SIZE1; j++) {
// 			if (numbers1[j] != numbers2[i+j]) {
// 				break;
// 			}

// 			if (j == SIZE1 - 1)
// 				return true;
// 		}
// 	}
// 	return false;
// }