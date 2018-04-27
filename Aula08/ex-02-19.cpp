#include <iostream>

using namespace std;


void calcular(float n1, float n2, float n3) {
	float soma,media,prod;
	// CALCULAR VALORES
	soma = n1+n2+n3;
	media = soma/3;
	prod = n1*n2*n3;

	// APRESENTAR SAÍDA
	cout << "A soma dos valores é: ";
	cout << soma << endl;
	
	cout << "A média dos valores é: ";
	cout << media << endl;

	cout << "O produto dos valores é: ";
	cout << prod << endl;
}

float maior(float n1, float n2, float n3) {
	int m;
	//CALCULAR O MAIOR VALOR	
	if (n1>=n2 && n1>=n3)
	{
		m = n1;
	}
	
	else if (n2>=n1 && n2>=n3)
	{
		m = n2;
	}

	else //if (n3>=n1 && n3>=n2)
	{
		m = n3;
	}

	return m;
}

float minimo(float a, float b) {
	if (a >= b)
		return a;
	else
		return b;
}


int main()
{
	float n1,n2,n3;
	
	// LER VALORES
	cout << "Informe 3 valores: " << endl;
	cin >> n1 >> n2 >> n3;

	calcular(n1, n2, n3);

	cout << maior(n1, n2, n3) << " é o maior valor" << endl;


	cout << minimo(minimo(n1, n2), n3) << " é o menor valor" << endl;


	return 0;
}








