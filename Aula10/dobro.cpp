/*
Escreva um programa que calcula e apresenta o resultado do dobro de um inteiro informado como parâmetro.
*/

#include <iostream>

using namespace std;

void dobro(int &v)
{
	v = 2 * v;
}

int main() {
	int n;
	cout << "Cálculo do dobro" << endl;

	cout << "Informe valor:" << endl;
	cin >> n;

	cout << "Dobro=" << endl;

	dobro(n);

	cout << n << endl;

	cout << "*FIM*" << endl;
	return 0;
}
