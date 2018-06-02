/*
Escreva um programa que processo os dados de um estacionamento.

Exemplo de arquivo de dados:

ICE2937;17:00;18:00
BFQ8663;10:31;14:02
PEC2013;07:00;07:08
HMG0248;10:47;15:00

*/

#include <iostream>

using namespace std;

int main()
{
	string placa;
	int horae;
	int mine;
	int horas;
	int mins;

	int entrada;
	int saida;
	int tempo;

	cout << "Estacionamento" << endl;

	cin >> placa;
	cin >> horae;
	cin >> mine;
	cin >> horas;
	cin >> mins;

	entrada = horae * 60 + mine;
	saida = horas * 60 + mins;
	tempo = saida - entrada;

	cout << tempo / 60 << ":" << tempo % 60 << endl;

	return 0;
}
