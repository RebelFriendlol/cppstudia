#include <iostream>
#include <string>
using namespace std;



int main()
{
    enum color { red, green, blue } c; //Enumerated Types
    c = blue;

    //integer (whole number)
    int age = 21;
    int year = 2032;
    int days = 7.5;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';
    
    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string (objects that represents a sequence of text)
    string name = "Bro";
    string day = "Monday";

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of string : " << sizeof(string) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    return 0;
}
