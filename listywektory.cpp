#include <iostream>
#include <string>
#include <vector>
#include <list>


using namespace std;



int main()
{
	int n;

	int tab[10]; //statyczna

	n = 10;
	//int tablica[10]; //tablica stala albo cos innego
	// 

	/*int* tablica;
	tablica = (int*)malloc(n * sizeof(int)); //dynamiczny
	tab[3] = 3;
	tablica[3] = 3;
	tab[30] = 3; //program sie uruchomy ale przydzeli sobie adres na sila ktory moze nalezec do innej zmiennej
	tablica[30] = 3;
	free(tablica);
	*/

	vector<int> wektor; 
	for (int i = 0; i < 10; i++)
	{
		wektor.push_back(i);
	} 


	cout << "Wypisujemy zawartosc wektor: " << endl;
	for (int i = 0; i < wektor.size(); i++) 
	{
		cout << wektor[i] << endl; // w taki sposob nie dostaniemy sie do listy (bo nie ma indexu)
	}

	vector<int>::iterator it;

	for (it =wektor.begin();it!=wektor.end();it++)
	{
		cout << *it << endl;
	}

	//lista ma elementy ktora sa ze soba powiazana i nie musze byc pokolei, kazdy z tych eleemtow posiada informacje o nastepnym
	//listy sa lepsze gdy musimy cos posortowac

	list<int> lista;
	for (int i = 0; i < 10; i++)
	{
		lista.push_back(i);
	}

	list<int>::iterator it;

	for (it = lista.begin(); it != lista.end(); it++)
	{
		cout << *it << endl;
	}


	return 0;
}