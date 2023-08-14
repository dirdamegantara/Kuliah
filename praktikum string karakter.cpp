#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string greeting;
	char nama[30];
	char password[30];
	int p_pass;
	cout << "Greeting: ";
	getline(cin, greeting);
	cout << greeting << " to you\n\n";
	cout << "Hello, What's your name? ";
	cin.getline(nama, 30);
	cout << "\nWelcome, " << nama << "\n";
	cout << "Your Password is? ";
	cin.getline(password, 30);
	if ((strcmp(password, nama)) == 0)
	{
		cout << "Your name and password is same\n\n";
	 } 
	 cout << "Password length: " << strlen(password) << "\n";
	 _strrev(password);
	 cout << "Password reversed: " << password << "\n\n";
	 cout << "Thank you\n\n";
	 system("PAUSE");
}



