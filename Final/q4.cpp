#include  <iostream>
#include	<string>

using namespace std;

void findwords(string txt, char delimiter, string userinput);

int main() {	
	string  userinput;
  string  words= "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

  cout << "Enter user string "; 
  cin >> userinput;

	findwords(words, ' ', userinput);
}

void findwords(string txt, char delimiter, string userinput)
{
	int start=0;
	size_t sub_string_found;
	size_t found;
	string split;

	while ((found = txt.find(delimiter, start)) != string::npos) {
		split = txt.substr(start, found-start);
		sub_string_found = split.find(userinput);

		if (sub_string_found != string::npos) {
			cout << "Found at " << start + sub_string_found << " in " << split << endl;
		}

		start = found + 1;
	}
}