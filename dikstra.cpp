#include <iostream>
#include <vector>

using namespace std;

//****Algorytm Dikstry***//
//ktory podajemy poczatek a on pokazuje mi drogie do wszsytkich





//********************************************************************************************************
//Algorytm dijkstra która szula droge do wszystkich węzłów
//********************************************************************************************************
vector<int> dikstra(int start,const int inf,vector<vector<int>> naszGraf)
{
    int liczbaWierzcholkow = naszGraf.size();

    vector<int> graf(liczbaWierzcholkow, inf); //vector zachowuje dlugosc najkrotszych sciezek 
    vector<bool> czyOdwiedzony(liczbaWierzcholkow,false); //vector zachowuje czy graf zostal juz odwiedzony

    graf[start] = 0;

    for (int i = 0; i < liczbaWierzcholkow - 1; i++) //petle sprawdzaja czy wierzcholek nie zostal jeszcze odwiedzony
    {
        int a = -1;
        for (int j = 0; j < liczbaWierzcholkow; j++)
        {
            if (!czyOdwiedzony[j] && (a == -1 || graf[j] < graf[a]))
            {
                a = j;
            }
        }

        czyOdwiedzony[a] = true;

        for (int b = 0; b < liczbaWierzcholkow; b++) //petla sprawdza czy wierzcholek b ma polaczenia z wierzcholkiem a
        {
            if (naszGraf[a][b] != nieskonczonosc)
            {
                int alt = graf[a] + naszGraf[a][b];
                if (alt < graf[b])
                {
                    graf[b] = alt;
                }
            }
        }
    }
    return graf;
}



int main()
{
    const int nieskonczonosc = 1e9; //zmienna ktora reprezentuje nieskonczonosc lub brak polaczenia

    int start = 0; //z ktorego wierzcholka zaczynamy

    vector<vector<int>> naszGraf ={
            {0, 1, nieskonczonosc}, //nieskonczonosc to wierzcholki z ktorymi nie ma polaczenia
            {nieskonczonosc, 0, 1},
            {nieskonczonosc, nieskonczonosc, 0}

    }; //nasz graf 3x3

    vector<int> graf =  dikstra(start,nieskonczonosc,naszGraf);

    for (int i = 0; i < naszGraf.size(); i++)
    {
        cout << "Dystans od  " << start << " do " << i << " to ";
        if (graf[i] == nieskonczonosc)
        {
            cout << "Nieskonczonnosc" << endl;
        }
        else
        {
            cout << graf[i] << endl;
        }
    }

    return 0;
}