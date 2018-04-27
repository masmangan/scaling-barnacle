/*

Escreva um programa que pede para o usuário inserir dois inteiros, obtém os números do usuário, e então imprima o maior número seguido pelas palavras "é o maior". Se os números forem iguais, imprime a mensagem "Estes números são iguais".

Douglas
*/


#include <iostream>

using namespace std;

int main() 
{
	int a;
	int b;

	cout << "Informe o valor de A: ";
	cin >> a;

	cout << "Informe o valor de B: ";
	cin >> b;

	if (a > b) {
		cout << a << " é o maior" << endl;
	} else if (b > a) {
		cout << b << " é o maior" << endl;
	} else {
		cout << "Estes números são iguais" << endl;
	}

	return 0;	
}








