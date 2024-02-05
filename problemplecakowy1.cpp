#include <iostream>
#include <algorithm> //biblioteka stl
#include <list> //biblioteka stl

using namespace std;


//****Problem plecakowy****//
//Plecak ma przechoywać przedmioty (listy albo vectory) i ma określona pojemność, mamy do zebrania przedmioty (na liscie lub vectorze)
//Przedmioty zaimplementowac jako struktury (wartosc i objetosc)
//szukamy najwiekszego wartosci co tez zmiesci sie do plecaka
//na liscie przenosimy do plecaka
//Zadanie: zapakować plecak mozliwie najcenniejszymy przedmiotami (zwracamy liste albo funckje)

//*****************************
//Struktura naszych przedmiotów
//*****************************
struct przedmiot{
    string nazwa;
  int wartosc;
  int objetosc;
};

//*****************************
//Pętla wypisze nam liste
//*****************************
void wypisz(list<string> const &list)
{
    cout <<"Zawartosc plecaka: ";
    for (auto const &i: list) {
        cout << i << ", ";
    }
}

//*******************
//
//*******************
list<string> problemplecakowy(list<string> plecak){

    int maxobjetosc = 30000;

    przedmiot zloto ={
            "zloto",500,10
    };
    przedmiot portfel ={
            "portfel",100,8
    };
    przedmiot jabuszko ={
            "jabuszko",20,3
    };
    przedmiot jagermaister ={
            "jagermaister",70,40
    };
    przedmiot ferrari ={
            "ferrari",100000,40000
    };

    bool dadsa = true;

    int aktualnystanplecaka = 0;
    int aktualnawartoscplecaka = 0;

    while(dadsa)
    {
        cout << "Ile Przedmiotow do plecaka chcesz upchac?: ";
        int ile;
        cin >> ile;
        for (int i = 0; i < ile; ++i)
        {
            cout<< "ktory przedmiot chcesz wpakowac do plecaka?" << "\n";
            cout << "Do wyboru:" << "\n" << "[1]zloto(objecost 10)" << "\n" << "[2]portfel(objetosc 8)" << "\n" << "[3]jabuszko(objetosc 3)" << "\n" << "[4]jagermaister(objetosc 40)" << "\n" <<  "[5]ferrari(objetosc40000): ";
            char a;
            cin >> a;

            switch (a) {
                case '1':
                        plecak.push_front(zloto.nazwa);
                        aktualnystanplecaka = aktualnystanplecaka + zloto.objetosc;
                        aktualnawartoscplecaka = aktualnawartoscplecaka + zloto.wartosc;
                    break;
                case '2':
                        plecak.push_front(portfel.nazwa);
                        aktualnystanplecaka = aktualnystanplecaka + portfel.objetosc;
                    aktualnawartoscplecaka = aktualnawartoscplecaka + portfel.wartosc;
                    break;
                case '3':
                         plecak.push_front(jabuszko.nazwa);
                         aktualnystanplecaka = aktualnystanplecaka + jabuszko.objetosc;
                        aktualnawartoscplecaka = aktualnawartoscplecaka + portfel.wartosc;
                    break;
                case '4':
                        plecak.push_front(jagermaister.nazwa);
                        aktualnystanplecaka = aktualnystanplecaka + jagermaister.objetosc;
                        aktualnawartoscplecaka = aktualnawartoscplecaka + portfel.wartosc;
                    break;
                case '5':
                        plecak.push_front(ferrari.nazwa);
                        aktualnystanplecaka = aktualnystanplecaka + ferrari.objetosc;
                        aktualnawartoscplecaka = aktualnawartoscplecaka + portfel.wartosc;
                    break;
                default:
                    cout << "Wybierz opcje z zakresu od 1 do 5" << "\n";
                    break;
            }
            if(aktualnystanplecaka > maxobjetosc)
            {
                cout << "Plecak przeciazony!";
                break;
            }
        }
        dadsa = false;
    }
    cout << "Wartosc plecaka: " << aktualnawartoscplecaka << "\n";
    return plecak;
}


int main()
{
    list<string> plecak;
    list<string> wynik = problemplecakowy(plecak);
    wypisz(wynik);


    return 0;
}