// PUCRS - Escola Politécnica
// Programação para Engenharia II
// 
// Escreva um programa que recebe números inteiros 
// como argumentos pela linha
// de comando e informa se eles estão em ordem.
//
// $ ordenado 10 20
// Ordenado
// $ ordenado 20 10
// Desordenado
// $ ordenado 20 20
// Ordenado
// $ ordenado 10 20 30
// Ordenado
//
// marco.mangan@pucrs.br
// 2018-05-30

#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) 
{
	// int valores[5];
	vector<int> valores(argc - 1);
	
	for (int i = 1 ; i < argc ; i++)
	{
		valores[i - 1] = atoi(argv[i]);
	}

	for (int i = 0 ; i < argc ; i++)
	{
		cout << argv[i] << endl;
	}
	cout << endl;

	for (size_t i = 0 ; i < valores.size() ; i++)
	{
		cout << valores[i] << endl;
	}
	cout << endl;




	int ordenado = 1;  // está ordenado... 

	for (size_t i = 1 ; i < valores.size() ; i++)
	{
		if (valores[i - 1] > valores[i])
		{
			ordenado = 0;
			break;
		}
	}

	if (ordenado == 1)
	{
		cout << "Ordenado!" << endl;
	}
	else
	{
		cout << "Desordenado!" << endl;
	}

	return 0;
}







