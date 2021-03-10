#include <iostream>
using namespace std;

int main()
{
  int score, numStudents, numCourses,sum;
  string nameStudent;
  int i, j;
  float average;

  do{
    cout << "Please,enter the number of students and number of courses:  " << endl;
    cin >> numStudents >> numCourses; 
  }
  while(numStudents < 0 || numCourses < 0);

  for (i=0; i<numStudents; i++){
    cout << "Please,enter the student name:  " << endl;
    cin >> nameStudent;
    sum=0;

    for(j=0; j< numCourses;j++){
      cout << "Please,enter the score:  " << endl;
      cin >> score;
      sum += score;
    }
    average = sum / numCourses;
    cout << nameStudent << ": ";
    cout << sum << ": ";
    cout << average << ": " <<endl;
  }
}