// Cooperative Programming Lab 10-1
// Check the Strong Password.

#include		<iostream>
#include		<cstring>
#include		<cctype>
#include		<cstring>
using namespace std;


bool	checklength(char []);
bool	checkdigit(char []);
bool	checklower(char []);
bool	checkupper(char []);
bool	checkspecial(char []);

int main()
{
	char	pwdstr[20];

	cout << "Enter your password\n";
	cin >> pwdstr;

	if (checklength(pwdstr) &&
			checkdigit(pwdstr) &&
			checklower(pwdstr) &&
			checkupper(pwdstr) &&
			checkspecial(pwdstr))
		cout << "Your password is strong\n";
	else
		cout << "Your password is weak\n";
}
bool	checklength(char pwdstr[]) {
	if (strlen(pwdstr) < 6)
		return false;
	else
		return true;
}
bool	checkdigit(char pwdstr[]) {
	for (int i=0 ; i<strlen(pwdstr) ; i++) {
		char c = pwdstr[i];
		int value = isdigit(c);

		if (value > 0)
			return true;
	}
	
	return false;
}
bool	checklower(char pwdstr[]) {
	for (int i=0 ; i<strlen(pwdstr) ; i++) {
		char c = pwdstr[i];
		int value = islower(c);

		if (value > 0)
			return true;
	}	
	return false;
}
bool	checkupper(char pwdstr[]) {
	for (int i=0 ; i<strlen(pwdstr) ; i++) {
		char c = pwdstr[i];
		int value = isupper(c);

		if (value > 0)
			return true;
	}
	return false;
}
bool	checkspecial(char pwdstr[]) {
	for (int i=0 ; i<strlen(pwdstr) ; i++) {
		char c = pwdstr[i];
		int value = isalpha(c);

		if (value == 0)
			return true;
	}
	return false;
}
 