/*
PUCRS/Escola Politécnica
Programação para Engenharia II
Trabalho T1

Deitel e Deitel, p. 135

Exercícios
4.18 Escreva um programa em C++ que utilize uma instrução while e a sequência de tabulação \t para imprimir a seguinte tabela de valores:

N	N*10	100*N	1000*N
1	10	100	1000
2	20	200	2000
3	30	300	3000
4	40	400	4000
5	50	500	5000

marco.mangan@pucrs.br
2018-04-20

*/

#include <iostream>

using namespace std;

int main()
{
	int n = 1;
	cout << "Exercício 4.18" << endl;

	while (n <= 5)
	{
		cout << n << '\t' << endl;
		n++;
	}
	return 0;
}
