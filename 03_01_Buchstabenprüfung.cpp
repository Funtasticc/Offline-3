#include <iostream>		  
using namespace std;

int main()
{
	char buchstabe;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> char(buchstabe);
	if ((int(buchstabe) >= 97) && (int(buchstabe) <= 122))
	{
		cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben." << endl;
	}
	else
	{
		cout << "KEIN Kleinbuchstabe(a - z)." << endl;
	}

	system("PAUSE");
	return 0;
}