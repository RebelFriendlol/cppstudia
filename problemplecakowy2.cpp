#include <iostream>
#include <vector> //biblioteka stl
#include <algorithm> //biblioteka stl

using namespace std;


//*****************************
//Struktura naszych przedmiotów
//*****************************
struct przedmioty {
    string nazwa;
    int waga;
    int wartosc;
};


//******************************************************************************************************
//Funckja ktora rozwiazuje problem plecakowy, dodaje do vectora "wybrane" wybrane przez petle przedmioty
//******************************************************************************************************
vector<int> algorytm(vector<przedmioty> przedmiot, int pojemnoscplecaka)
{

    int wielkosc = przedmiot.size();
    int poj = pojemnoscplecaka;

    vector<vector<int>> dp(wielkosc + 1, vector<int>(pojemnoscplecaka + 1)); //podwojny vector

    for (int i = 0; i <= wielkosc; i++)
    {
        for (int w = 0; w <= pojemnoscplecaka; w++)
        {
            if (i == 0 || w == 0)
            {
                dp[i][w] = 0;
            } else if (przedmiot[i - 1].waga <= w)
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - przedmiot[i - 1].waga] + przedmiot[i - 1].wartosc);
            } else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    vector<int> wybrane(wielkosc);

    for (int i = wielkosc; i > 0 && dp[i][poj] > 0; i--)
    {
        if (dp[i][poj] != dp[i - 1][poj])
        {
            wybrane[i - 1] = 1;
            poj -= przedmiot[i - 1].waga;
        }
    }
    return wybrane;
}

int main() {

    int sumaWagi = 0;
    int sumaWartosci = 0;
    int pojemnoscplecaka = 7;

    vector<przedmioty> przedmioty = {
        {"jabko", 2, 6}, 
        {"czteropak_piwa", 2, 10}, 
        {"telefon", 3, 12}, 
        {"zloto", 4, 13}
        };

    vector<int> wybrane = algorytm(przedmioty, pojemnoscplecaka);

    for (int i = 0; i < przedmioty.size(); i++)
    {
        if (wybrane[i] == 1)
        {
            sumaWagi += przedmioty[i].waga;
            sumaWartosci += przedmioty[i].wartosc;
            cout << przedmioty[i].nazwa << " ";
        }
    }

    cout << endl << "Waga w sumie wynosi: " << sumaWagi << endl;
    cout << "Wartosc w sumie wynosi: " << sumaWartosci << endl;


    return 0;
}