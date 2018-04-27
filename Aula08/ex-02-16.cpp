/*

Escreva um programa que solicita ao usuário inserir dois números, obtém os dois números do usuário imprime a soma, produto, diferença e quociente dos dois números.

Cassio
*/


#include <iostream>

using namespace std;

int main() 
{
	float a;
	float b;

	cout << "Informe o valor de A: ";
	cin >> a;

	cout << "Informe o valor de B: ";
	cin >> b;

	cout << "Soma= " << a + b << endl;
	cout << "Produto= " << a * b << endl;
	cout << "Diferença= " << a - b << endl;
	cout << "Quociente= " << a / b << endl;

	return 0;	
}
