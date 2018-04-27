/*
marco.mangan@pucrs.br

Aula 06

Tabela : Escreva um programa em C++ que
calcule e apresente o quadrado de
números reais entre 1 e 10, com intervalo de 0,5.

	1,0   1,0
	1,5 ...
	2,0   4,0
	2,5 ..
	3,0   9,0
	...
       10,0   100,0

http://www.cplusplus.com/reference/ios/right/
http://www.cplusplus.com/reference/ios/fixed/
http://www.cplusplus.com/reference/iomanip/

*/

#include <iostream>
#include <iomanip>

using namespace std;


void line(int t)
{
	cout << "+-";
	for (int i = 1 ; i <= t ; i++)
	{
		cout << "-";
	}
	cout << "-+" << endl;
}


void box(string s)
{
	int tam = s.size();

	line(tam);

	cout << "| " << s << " |" << endl;

	line(tam);

	cout << endl;

}

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



