#include <iostream>
#include <string>
using namespace std;

enum dzien {
	poniedzialek = 1,
	wtorek = 2,
	sroda = 3,
	czwartek = 4,
	piatek = 5,
	sobota = 6,
	niedziela = 7,
	brak = -1
};

int main()
{
	//tworzymy wyliczenie (podobnie jak const tydzien)
	dzien tydzien;

	tydzien = poniedzialek;
	cout << tydzien << endl; //1

	cout << wtorek << endl; //2
	
	int wt = wtorek;

	cout << wt << endl; //2

	return 0;
}