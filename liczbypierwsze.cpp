#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <conio.h>


using namespace std;

//funckja ktora wygeneruje liste ktora zawiera liczby pierwsze

void zadanie() {
	list<int> liczba_p;
	int n;
	bool p;

	cout << "Podaj koniec przedzialu: ";
	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		p = true;
		for (int j = 2; j < i; j++)
			if (i % j == 0)
				p = false;
		if (p == true)
			liczba_p.push_back(i);
	}

	list<int>::iterator it;
	for (it = liczba_p.begin(); it != liczba_p.end(); it++)
	{
		cout << *it << endl;
	}
}


int main()
{
	zadanie();

	return 0;
}