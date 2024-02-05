#include <iostream>
#include <list>
#include <algorithm> //biblioteka stl
#include <vector> //biblioteka stl
#include <chrono> //biblioteka potrzebna do obliczenia czasu
#include <string>
using namespace std;

struct wezel{
    int id;
    string nazwa;
    //tu możemy dodwac wszystko  co ma byc przechowywana w wezlach drzewa
    struct  wezel *p1,*p2,*p3,*p4,*r;
    wezel(){
        this->id =0;//this to wskaznik na dane strukture na ktorych jest aktualna
        this->p1=this->p2 = this->p3 =this ->p4 = nullptr; //nullptr to wartosc ktora przekazuje null na wskazniku

    }

};

struct wezell{
    int id;
    string nazwa;
    //tu możemy dodwac wszystko  co ma byc przechowywana w wezlach drzewa
    list<wezel*> p;
    wezell(){
        this->id =0;//this to wskaznik na dane strukture na ktorych jest aktualna

    }
};







int main(){
    wezel *drzewo;
    drzewo = new(wezel);
    drzewo->id =1;
    drzewo->nazwa = "korzen";
    drzewo->p1 = new(wezel);

    wezell* drzewol;
    drzewol = new(wezell);
    drzewol->id =2;
    drzewol->nazwa = "korzen 1";
    drzewol->p.push_back(new(wezell));


    return 0;
}