#include  <iostream>
#include	<string>

using namespace std;

void subset(string[], string[]);

int splitwords(string txt, char delimiter, string userinput);

const int SIZE1 = 5;
const int SIZE2 = 10;

int main() {
	
	string  userinput;
  string  words= "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

  cout << "Enter user string "; 
  cin >> userinput;

	splitwords(words, ' ');

	// if (subset(words, userinput))
	// 	cout << "Subset" << endl;
	// else
	// 	cout << "Not subset" << endl;
}

int splitwords(string txt, char delimiter, string userinput)
{
	int start=0;
	int cnt=0;
	size_t sub_string_found;
	// string::iterator found;
	size_t found;
	string split;

	while ((found = txt.find(delimiter, start)) != string::npos) {
		split = txt.substr(start, found-start);
		cout << " Split word " << split << endl;

		sub_string_found = split.find(userinput);

		if (sub_string_found != string::npos) {
			cout << "Found at " << start + sub_string_found << " in " << split << endl;
		}

		start = found + 1;
		cnt += 1;
	}
	return cnt;
}

// void subset(string words[], string userinput[]){
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