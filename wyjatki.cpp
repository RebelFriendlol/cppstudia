#include <iostream>
#include <string>
using namespace std;



int main()
{
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        }
        else {
            throw (age); //throw pozwala nam na wykrycie problemu i stworzyc niestandardowy problem
        }
    }
    catch (int myNum) { 
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }
}
