#include <iostream>
#include <algorithm> //biblioteka stl
#include <vector> //biblioteka stl
using namespace  std;

int main()
{
    int i = 10;
    int j = 7;

    cout <<"Wartosc i: "<< i << endl;
    cout <<"Wartosc j: "<< j << endl;

    swap(i,j); //swap sluzy do zamieniania wartosci zmiennych

    cout <<"Wartosc po swapie i: "<< i << endl;
    cout <<"Wartosc po swapie j: "<< j << endl;

    return 0;
}
