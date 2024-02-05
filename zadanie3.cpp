#include<iostream>
#include<string>
using namespace std;



int main()
{
	setlocale(LC_CTYPE, "Polish");
	double a, b, c;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;

	double p;
	p = (a + b + c) / 2;

	double S;
	S = sqrt(p * (p - a) * (p - b) * (p - c));


	cout << "S = " << S << endl;

	return 0;
}