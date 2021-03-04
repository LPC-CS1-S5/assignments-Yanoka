#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int main()
{
    int num1, num2, num3, max, min, other;
    cout << "Enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    
    if (num1 < num2) {
        max = num2;
        min = num1;
    }
    else {
        max = num1;
        min = num2;
    }
    if (num3 > max) {
        other = max;
        max = num3;
    }
    else if (num3 < min) {
        other = min;
        min = num3;
    }
    else {
        other = num3;
    }
    cout << min << " " << other << " " << max << endl;
}