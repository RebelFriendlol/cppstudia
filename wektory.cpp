#include <iostream>
#include <algorithm> //biblioteka stl
#include <vector> //biblioteka stl
using namespace  std;

int main()
{
    vector<int> ar; //definijemu wektor

    for(int i = 1; i <=10; i++)//Pętla dodaje do wektora 10 liczb
    {
        ar.push_back(i);
    }
    cout << "Size: " << ar.size(); //size wypisuje ile liczb jest w wektorze


    ar.resize(7); //zmieniamy  wielkosc wektora na 7
    cout <<"\nPo resieze: " << ar.size();


    if(ar.empty() == false) //empty w warunku sprawdza czy wektor jest pusty
    {
        cout << "\nnie jest pusty";
    }
    else
    {
        cout <<"\njest pusty";
    }


    vector<int>::iterator it; //tworzymy iterator
    cout << "\nElementy w wektorze: ";
    for(it = ar.begin();it != ar.end();it++) //petla wypisuje nam wszystkie elementy wektora
    {
        cout << *it << " ";
    }

    /* begin(): This function points the iterator to the first element of the container.
    end(): This function points the iterator to the last element of the container. */

    return 0;
}