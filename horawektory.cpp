#include <iostream>
#include <algorithm> //biblioteka stl
#include <vector> //biblioteka stl
using namespace std;

int n,i,j,k,w; //n = rozmiar ciagu, i = index szukanego elementu, j = element koncowy, k = element dzielacego na dwie czesci, w = numer szukanego elementu

int dzielenie(vector<int> wektor, int a, int b)
{
    int e,tmp;
    e=wektor[a]; 
    while (a<b)
    {
        while ((a<b) && (wektor[b]>=e)) b--;
        while ((a<b) && (wektor[a]<e)) a++;
        if (a<b)
        {
            tmp=wektor[a];
            wektor[a]=wektor[b];
            wektor[b]=tmp;
        }
    }
    return a;
}


int main()
{
    vector<int> wektor = {2,3,5,71,2,3};

    i=3; //szukany element ciagu (po indexie)
    j=n-1;
    n=w;
    while (i!=j)
    {
        k=dzielenie(wektor,i,j);
        k=k-i+1;
        if (k>=w) j=i+k-1;
        if (k<w)
        {
            w-=k;
        }
    }
    n = i;
    cout << n << " element ciagu to: "  << wektor[i];

    return 0;
}