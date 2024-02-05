#include <iostream>
using namespace std;

//wskaznik - zmienna przechowujaca w sobie adres w pamieci RAM innej zmiennej
//gwiazdka przed typem danych oznaczna wskaznik a gwiazdka uzyta w dowonlynm innym momencie to na co wskazuje
//"&" oznacza adres zmiennej

int i = 3;
int a = 1;

int main()
{
	cout << "i =  " << i << endl;
	int* x = &i;
	cout << "adres i z wskaznika " << x << endl;
	cout << "wartosc i w x: " << *x << endl;
}