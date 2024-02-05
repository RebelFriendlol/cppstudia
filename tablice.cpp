#include <iostream>
#include <string>
using namespace std;

int main()
{
	int foo[] = { 1,3,5,2,64,3 };
	int n, result = 0;

	for (n = 0; n < 5; n++) 
	{
		result += foo[n];
	}
	cout << result;

	return 0;
}

