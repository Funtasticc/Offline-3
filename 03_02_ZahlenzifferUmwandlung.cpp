#include <iostream>
using namespace std;

int main()
{
	char zeichen;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> zeichen;

	if (zeichen == 'e')
	{
		cout << "Das Programm beendet sich jetzt." << endl;
		system("PAUSE");
		return 0;
	}
	if ((zeichen >= 48) && (zeichen <= 57))
	{
		int b = zeichen - 58;
		int summe = 0;
		int summand = 5;
		summe = b + summand;
		cout << zeichen << " + " << summand << " = " << summe << endl;
	}
	else
	{
		cout << "Weder 'e' noch Ziffer." << endl;
	}
	system("PAUSE");
	return 0;
}