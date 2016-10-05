#include <iostream>
using namespace std;

// demonstration of NESTED LOOPS

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";

		cout << endl;
	}

	return 0;
}