#include <iostream>
using namespace std;

int getsum(int N) {
	int number;
	int sum = 0;
	int min, max, totalsum;

	for (int i=0; i < N; i++) {
		cout << "Please, enter the number: " << i + 1 << endl;
		cin >> number;
		sum += number;

		if (i == 0) {
			min = number;
			max = number;
		} else {
			if (number < min)
			 min = number;
			if (number > max)
			 max = number;
		}
	}

	totalsum = sum - min - max;
	return totalsum;
}