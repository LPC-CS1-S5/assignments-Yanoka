
// Condition for the email string.
// start with the alphabet.
// ID characters are all alpha numerics characters
// the last string shoud be one of the list {com, edu, org, and net}

#include		<iostream>
#include		<cctype>
#include		<cstring>
using namespace std;

bool 	idcheck(char []);
bool 	domaincheck(char []);

int 	main()
{
		char 	email[20];

		cout 	<< "Enter your email \n";
		cin 	>> email;

		if( idcheck(email))
			cout << "ID check passed\n";
		if( domaincheck(email))
			cout << "Domain check passed\n";
}
bool 	idcheck(char email[])
{
	int emaillen = 10;
	int i = 0;
	if (!isalpha(email[0]))
		return false;

	while (email[i] != '@') {
		if (isalnum(email[i++]))
			continue;
		else
			return false;

	}

	if (i<= emaillen)
		return true;
	else
		return false;
}
bool	domaincheck(char email[])
{
	char domeinar[] = "com edu net org";
	char *result;
	int len,i;

	len = strlen(email);
	i = len-1;
	
	do {
		if(email[i] == '.')
		break;
	}
	while(i-- > 0);

	result = strstr( domeinar, email+i+1 );
	if (result)
		return true;
	else
		return false;
}