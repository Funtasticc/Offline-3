#include <iostream>
using namespace std;

int main()
{
	int tageszeit = 0;
	cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
	cin >> tageszeit;

	if ((tageszeit == 23) || (tageszeit == 0) || (tageszeit == 1) || (tageszeit == 2) || (tageszeit == 3)
		|| (tageszeit == 4) || (tageszeit == 5))
	{
		cout << "Gute Nacht." << endl;
	}

	else if ((tageszeit == 6) || (tageszeit == 7) || (tageszeit == 8) || (tageszeit == 9) || (tageszeit == 10))
	{
		cout << "Guten Morgen." << endl;
	}

	else if ((tageszeit == 11) || (tageszeit == 12) || (tageszeit == 13))
	{
		cout << "Mahlzeit." << endl;
	}
	else if ((tageszeit == 14) || (tageszeit == 15) || (tageszeit == 16))
	{
		cout << "Guten Tag" << endl;
	}
	else if ((tageszeit == 18) || (tageszeit == 19) || (tageszeit == 20) || (tageszeit == 21) || (tageszeit == 22))
	{
		cout << "Guten Abend" << endl;
	}
	else if (tageszeit > 23 || tageszeit < 0)
	{
		cout << "Keine erlaubte Stundenangabe." << endl;
	}
		
	system("PAUSE");
	return 0;
}