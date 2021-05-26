#include  <iostream>
#include	<string>

using namespace std;

void subset(string[], string[]);

const int SIZE1 = 5;
const int SIZE2 = 10;

int main() {
	
	string  userinput;
  string  words= "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

  cout << "Enter user string "; 
  cin >> userinput;

	if (subset(words, userinput))
		cout << "Subset" << endl;
	else
		cout << "Not subset" << endl;
}

void subset(string words[], string userinput[]){
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