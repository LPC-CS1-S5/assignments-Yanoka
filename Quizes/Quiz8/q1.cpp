#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	ifstream ifso;
	ifso.open("python.txt");
	string readline;

	if(ifso){
		int occurrences = 0;

		while(ifso >> readline){
			string::size_type pos = 0;
			string target = "th";

			while ((pos = readline.find(target, pos )) != string::npos) {
				pos += target.length();
				occurrences++;
			}
		}
		cout << occurrences << endl; 
	}
}