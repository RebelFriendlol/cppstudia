#include <iostream>
#include <algorithm> //biblioteka stl
#include <vector> //biblioteka stl
#include <chrono> //biblioteka potrzebna do obliczenia czasu
using namespace std;

//===napisac program ktory implementujace dwa rozne algorytny sortowania dla vectora===//

void bubblesort( vector<int> *v, int size ) //sortowanie bąbelkowe
{
    for (int step = 0; step < size; ++step) //Poczatek algorytmu
    {
        for (int i = 0; i < size - step; ++i)
        {
            if ((*v)[i] > (*v)[i + 1])
            {
                int temp;
                temp = (*v)[i];
                (*v)[i] = (*v)[i + 1];
                (*v)[i + 1] =  temp;
            }
        }
    } //Koniec algorytmu

    cout << "bubble sort:  " << endl; //wypisuje posortowany vector
    for (int i = 0; i < size; ++i)
    {
        cout << " " << (*v)[i];
    }
    cout << "\n";
}

void insertsort( vector<int> *v, int size) //sortowanie przez wstawianie
{
    int temp, j;

    for( int i = 1; i < size; i++ ) //Poczatek algorytmu
    {
        temp = (*v)[ i ];

        for( j = i - 1; j >= 0 && (*v)[ j ] > temp; j-- )
        (*v)[ j + 1 ] = (*v)[ j ];
        (*v)[ j + 1 ] = temp;
    } //Koniec algorytmu

    cout << "Insert sort:  " << endl; //wypisuje posortowany vector
    for (int i = 0; i < size; ++i)
    {
        cout << " " << (*v)[i];
    }
    cout << "\n";
}

int main()
{
    // Zaczyna liczyc czas
    auto begin = std::chrono::high_resolution_clock::now();

    vector<int> v ={3,2,5,1,2,4};
    int size = sizeof(v) / sizeof(v[0]);

    bubblesort(&v,size);
    insertsort(&v,size);



    //konczy liczyc i pokazuje obliczony czas
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);

    cout <<"Petle wykonaly sie w : " << elapsed.count() * 1e-9 << "ms" << endl; //pokazuje w jakim czasie program sie wykonal
    return 0;
}