#include    <iostream>
#include    <string>
using namespace std;

int splitwords(string, char);
int findnumchars(string);

int main()
{
    string  txt1("ABCDEF,GHI,JKLMN,OP");
    string  txt2("BACDGABCDAZ");
    int     result;
    char    delimiter=',';

    result = splitwords(txt1, delimiter);
    result = findnumchars(txt2);
}

int splitwords(string txt, char delimiter)
{
	int start=0;
	int cnt=0;
	// string::iterator found;
	size_t found;
	string split;

	while ((found = txt.find(delimiter, start)) != string::npos) {
		split = txt.substr(start, found-start);
		cout << " Split word " << split << endl;
		start = found + 1;
		cnt += 1;
	}
	return cnt;
}
int findnumchars(string txt)
{
    int index;
		int seen[52]={0};
		int uniquecnt;
		string::iterator iter ;

		for (iter=txt.begin(); iter < txt.end(); iter++) {
			index = *iter - 'A';
			if (seen[index] == 0) {
				seen[index] = 1;
				uniquecnt++;
			}
		}
		return uniquecnt;
}
