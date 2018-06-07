/*
Escreva um programa que processo os dados de um estacionamento.

Exemplo de arquivo de dados:

ICE2937;17:00;18:00
BFQ8663;10:31;14:02
PEC2013;07:00;07:08
HMG0248;10:47;15:00

*/
#include <fstream>
#include "Aluguel.h"



int main()
{
	ifstream veiculos;
	Aluguel a;

	veiculos.open("veiculos.txt");

	cout << "Estacionamento" << endl;

  	while ( ! veiculos.eof() ) 
	{
		veiculos >> a.placa;
		if (veiculos.eof())
		{
			break;
		}
		veiculos >> a.horae;
		veiculos >> a.mine;
		veiculos >> a.horas;
		veiculos >> a.mins;

		cout << a.getTempoHoras() 
			<< ":" << a.getTempoMinutos() 
			<< endl;
	}
	veiculos.close();

	return 0;
}













