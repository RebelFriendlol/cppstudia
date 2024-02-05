#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct MyStruct
	{
		string imie;
		string nazwisko;
		int rok_studiow;
	};


	MyStruct stud;

	stud.imie = "Cyprian ";
	stud.nazwisko = "mikro";

	cout << stud.imie;
	cout << stud.nazwisko;

}

