/*
Escreva um programa que calcula e apresenta o resultado do dobro de um inteiro informado como parâmetro.
*/

#include <iostream>
#include <math.h>

using namespace std;

void baskara(float a, float b, float c, float &x1, float &x2)
{
	float delta = b * b - 4*a*c;
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
}

int main() {
	float a, b, c;
	float x1, x2;

	cout << "Cálculo de Báskara" << endl;

	cout << "Informe valor de a:" << endl;
	cin >> a;

	cout << "Informe valor de b:" << endl;
	cin >> b;

	cout << "Informe valor de c:" << endl;
	cin >> c;

	baskara(a, b, c, x1, x2);
	
	cout << "x1=" << x1 << endl;
	cout << "x2=" << x2 << endl;

	cout << "*FIM*" << endl;
	return 0;
}
