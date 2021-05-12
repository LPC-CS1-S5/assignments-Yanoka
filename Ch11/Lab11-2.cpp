#include <iostream>
#include <fstream>
using namespace std;

 const int NUMCOURSE = 2;
 struct student
  {
    int id;
    string name;
    int score[NUMCOURSE];
    int sum;
    int avg;
  };

//int		makingstructarray(student []); // return value : the number of struct array
//void	printout(const student );
//void	findusername(student [],int, string);

int main()
{
  ifstream ifs;
  student s[10];
  int i = 0;

  ifs.open("students.txt");


  while(i < 10)
  {
    s[i].sum = 0;

    ifs >> s[i].id;
		cout << " ID: " << s[i].id << endl;

    ifs >> s[i].name;
		cout << " name: " << s[i].name << endl;

    for(int j = 0; j < NUMCOURSE; j++)
    {
      ifs >> s[i].score[j];
			cout << " score: " << s[i].score[j] << endl;
      s[i].sum += s[i].score[j];
    }

		cout << " Sum: " << s[i].sum << endl;
    s[i].avg = s[i].sum / 2;
		cout << " Avg: " << s[i].avg << endl;
    i++;
  } 

  ifs.close();
  

	string username;
	cout << "Please, enter your name: " << endl;
	cin >> username;

  // Make a code for finding some record that has "given name"

	for (int i=0; i<10; i++) 
	{
		if (s[i].name.find(username) != string::npos) {
			cout << "ID: " << s[i].id << endl;
			cout << "name: " << s[i].name << endl;
			cout << "scores: " << endl;

			for(int j = 0; j < NUMCOURSE; j++) 
			{
				cout << s[i].score[j] << endl;
    	}

			cout << " Sum: " << s[i].sum << endl;
			cout << " Avg :" << s[i].avg << endl;
		}
	}
}

