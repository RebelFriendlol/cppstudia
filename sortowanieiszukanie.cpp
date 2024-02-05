#include <iostream>
#include <algorithm> //biblioteka 
using namespace  std;

void show(int a[], int array_size) //funckja ktora wyswietli nam zawartosc talbicy
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
}

int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; //deklarujemy tablice
    int asize = sizeof(a) / sizeof(a[0]); // size of the array wymagane do srotowania tablicy

    show(a, asize); //przed sortowaniem

    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    sort(a, a + asize); //sorutejmy tablice

    show(a, asize); //po sorotowaniu

    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2)) //binary search zadziala tylko wtedy gdy tablica jest posortowana
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    return 0;
}
