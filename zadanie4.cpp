#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish"); // obsługa polskich znaków
	srand(time(NULL)); // ta funkcja ustawia losowy punkt generowania danych, w tym przypadku wykorzystana została funkcja time z pliku nagłówkowego time.h, funkcja ta zwraca liczbę określającą czas

	cout << (rand() % 49) << endl;

	return 0;
}