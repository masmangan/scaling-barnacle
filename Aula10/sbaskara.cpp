/*
Escreva um programa que calcula e apresenta o resultado do dobro de um inteiro informado como parâmetro.
*/

#include <iostream>
#include <math.h>

using namespace std;

struct equacao 
{
	float a, float b, float c;
	float x1, float x2;
};

void baskara(struct equacao &eq)
{
	float delta = eq.b * eq.b - 4*eq.a*eq.c;
	eq.x1 = (-eq.b + sqrt(delta)) / (2 * eq.a);
	eq.x2 = (-eq.b - sqrt(delta)) / (2 * eq.a);
}

int main() {
	struct equacao formula;

	cout << "Cálculo de Báskara" << endl;

	cout << "Informe valor de a:" << endl;
	cin >> formula.a;

	cout << "Informe valor de b:" << endl;
	cin >> formula.b;

	cout << "Informe valor de c:" << endl;
	cin >> formula.c;

	baskara(formula);
	
	cout << "x1=" << formula.x1 << endl;
	cout << "x2=" << formula.x2 << endl;

	cout << "*FIM*" << endl;
	return 0;
}
