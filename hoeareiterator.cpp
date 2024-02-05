#include <iostream>
#include <vector> //biblioteka stl
using namespace  std;

//====Program ktory szuka najmniejszy element vectora po iteratorach====//

pair<int, vector<int>::iterator> algorytmhoare(vector<int>::iterator beg, vector<int>::iterator ed, int n) {
    while (true)
    {
        int pivot = *beg; //pivot ustawiam  na poczatku
        vector<int>::iterator left = beg; //poczatek vectora
        vector<int>::iterator right = ed - 1; //koniec vectora (dodalem -1 by byl to koniec vectora a nie jeden element za ostatnim)


        while (left < right) //partycjowanie elementow
        {
            while ((*left) < pivot)
            {
                left++;
            }

            while ((*right) > pivot)
            {
                right--;
            }

            if (left < right)
            {
                swap((*left), (*right));
                left++;
                right--;
            }
        }

        vector<int>::iterator pivotind = left; //elelemty wiekszy od pivot

        int elementy = pivotind - beg + 1; //ilosc elementow

        if (n == elementy)
        {
            return make_pair(*pivotind, pivotind);
            //jesli rowny to tamy szukany element
        }
        else if (n < elementy)
        {
            ed = pivotind; //jesli wiekszy to ustawiamy koniec na "pivotind" bo najmniejszy element musi być po lewej stronie
        }
        else
        {
            n -= elementy; //w przeciwnym wypaddku  odejmujemy elementy od n, ponieważ n-ty najmniejszy element musi być po prawej stronie
            beg = pivotind + 1; //ustawiamy "beg" na "pivotind + 1", aby pominąć już znalezione elementy w kolejnych petlach
        }
    }
}

int main()
{
    vector<int> vectorek = {15,3,20,124,80}; //definiuje vector
    int n; //zmienna ktora zachowuje wartosc n-tego najmniejszego elementu
    vector<int>::iterator beg = vectorek.begin(); //poczatek i koniec vectora
    vector<int>::iterator ed = vectorek.end(); //uzylem end poniewaz z back() mialem problemy

    cout << "ktory najmniejszy element chcesz znalezc?: "; //pytanie uzytkownika o wartosc i przypisanie tej wartosci do zmiennej n
    cin >> n;

    auto wynik = algorytmhoare(beg, ed, n); //wywolanie funckji i zapisanie jej wartosci w zmiennej
    cout << n << " najmniejszy element to: " << wynik.first << ". o iteratorze: " << distance(vectorek.begin(), wynik.second) << endl;//wypisanie elementu oraz jego iteratora

    return 0;
}