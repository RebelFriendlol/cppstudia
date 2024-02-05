#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int tablica[15];
    for (int i = 0; i < 15; i++)
    {
        tablica[i] = rand() % 20;
        cout << tablica[i] << " ";
    }
}