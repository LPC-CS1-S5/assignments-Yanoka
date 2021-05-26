#include        <iostream>

using namespace std;

bool subset();

const int SIZE1 = 5;
const int SIZE2 = 10;
int numbers1[SIZE1] = {2, 3, 5, 9, 10};
int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

int main() {
	if (subset())
		cout << "Subset" << endl;
	else
		cout << "Not subset" << endl;
}

bool subset(){
	for (int i = 0; i < SIZE2; i++) {
		for (int j = 0; j < SIZE1; j++) {
			if (numbers1[j] != numbers2[i+j]) {
				break;
			}

			if (j == SIZE1 - 1)
				return true;
		}
	}
	return false;
}