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
	// Id len
	int maxemaillen = 15;
	int minemaillen = 5;

	int i = 0;
	// Start with alphabet character
	if (!isalpha(email[0]))
		return false;

	while (email[i] != '@') {
		i++;
	}

	if (i<= maxemaillen && i >= minemaillen)
		return true;
	else
		return false;
}
bool	domaincheck(char email[])
{
	// The domain name should be one of the list {com, org, edu, net, and gov}
	char domeinar[] = "com org edu net gov";
	char *result;
	int len, i;

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
