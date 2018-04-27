/*
marco.mangan@pucrs.br

Aula 06

Quadrado : Escreva um programa em C++ que
calcule e apresente o quadrado de
números real informado via teclado.

O programa deve utilizar uma rotina para realizar o cálculo.

*/

#include <iostream>
#include <iomanip>

using namespace std;


float db(float w)
{
	float r = w * 2;
	return r;
}

float fq(float v)
{
	float q = v * v;
	return q;
}

int main()
{
	float n;

	cout << "Informe um valor: ";
	cin >> n;

	cout << "Valor ao quadrado= ";
	float resposta = db(fq(n));
	cout << resposta << endl;

	return 0;
}



