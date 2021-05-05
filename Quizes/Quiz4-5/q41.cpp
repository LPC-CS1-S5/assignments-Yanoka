#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int selection; 
  double radius, area, length, weight, base, height;
  cout << "Geometry Calculator\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a triangle\n";
  cout << "4. Quit\n";
  cout << "Enter your choice (1-4):\n";
  cin >> selection;

  switch(selection)
  {
    case 1 : cout << "Please enter the radius for circle\n";
            cin >> radius;
            if (radius<0)
            {
              cout << "Negative value is not available\n";
              return (-1);
            }
            cout << "Circle area:\n" << M_PI * pow(radius,2) << endl; 
            break;
    case 2 : cout << "Please enter the length and weight\n";
            cin >> length >> weight;
            if (length<0 || weight<0)
            {
              cout << "Negative values are not available\n";
              return (-1);
            }
            cout << "Rectangle area:\n" << length * weight << endl;
            break;
    case 3 : cout << "Please enter the length of the triangle’s base and its height\n";
            cin >> base >> height;
            if (base<0 || height<0)
            {
              cout << "Negative values are not available\n";
              return (-1);
            }
            cout << "Triangle area:\n" << base * height * 0.5 << endl;
            break;
    case 4 : cout << "Well okay than, good bye!\n";
            break;
    default: cout << "Error. This number is not in range 1-4\n";
            return (-1);
  }
  
}
