/*
marco.mangan@pucrs.br

Aula 05

Ex. 01 : Escreva um programa em C++ que
calcule e apresente o quadrado de
números inteiros entre 1 e 10.

	1 1
	2 4
	3 9
	...
       10 100


*/
#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << " Ex 01" << endl;
	cout << "=======" << endl << endl;

	for (n = 1 ; n <= 10 ; n++)
	{
		cout << n << " " << n * n << endl;
	}

	return 0;
}



