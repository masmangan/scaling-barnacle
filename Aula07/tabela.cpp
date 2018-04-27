#include <iostream>
#include <iomanip>
#include "box.h"


using namespace std;


int main()
{
	float n;

	box("Exercicio 02");

	for (n = 1.0f ; n <= 10.0f ; n += 0.5)
	{
		cout.width(6);
		cout << right << fixed << setprecision(1);
		cout << n;

		cout.width(6);
		cout << n * n << endl;
	}

	return 0;
}



