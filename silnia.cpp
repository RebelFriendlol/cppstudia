#include <iostream>
#include <string>
using namespace std;

int silnia_r(int n)
{
	if (n == 0 or n == 1) return 1;
	return n * silnia_r(n - 1);
}

int main()
{
	cout << silnia_r(6);
}
