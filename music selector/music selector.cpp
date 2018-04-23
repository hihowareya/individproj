#include <iostream>
using namespace std;

int main()
{
	int menuSelect;

	menuSelect = 2;
	cout << "Enter 1-3 to pick a genre of music" << endl;
	cout << "1) Symphonic Metal" << endl;
	cout << "2) Hip Hop" << endl;
	cout << "3) Jazz" << endl;
	menuSelect = menuSelect + 1;
	cout << "menuSelection: " << menuSelect << endl;

	cin >> menuSelect;

	if (menuSelect == 1)
	{
		cout << "you selected Symphonic Metal";
		cout << endl;
		cout << "Recommended Artists:" << endl;
		cout << "Nightwish" << endl;
		cout << "Apocalyptica" << endl;
		cout << "Eluveitie" << endl;
	}
	
	else if (menuSelect == 2)
	{
		cout << "You selected: Hip Hop" << endl;
		cout << "Reccomended Artists:" << endl;
		cout << "A Tribe Called Quest" << endl;
		cout << "Eric B. and Rakim" << endl; 
		cout << "Madcon" << endl;

	}
	else if (menuSelect == 3)
	{
		cout << "You selected: Jazz" << endl;
		cout << "Reccomended Artists:" << endl;
		cout << "BADBADNOTGOOD" << endl;
		cout << "Charles Mingus" << endl;
		cout << "John Coltrane" << endl;
	}
	else
	{
		cout << "Code cannot handle this input" << endl;
	}
	return 0;
}