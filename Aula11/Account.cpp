
/*
3.12 Crie uma classe chamada Account que um banco poderia utilizar para representar contas bancárias dos clientes...

Deitel e Deitel, p. 91

Brayan
Paulo

13-ABR-2018

*/

#include <iostream>

using namespace std;

class Account
{
private:
	int saldo; // dólares
public:
	Account(int inicial)
	{
		if (inicial < 0)
		{
			inicial = 0;
			cout << "Saldo inicial inválido!" << endl;
		}
		saldo = inicial;
	}

	void credit(int valor)
	{
  		if (valor < 0) {
			cout << "Invalid value!" << endl;
		} else {
			saldo = saldo + valor;
		}
	}

	void debit(int valor)
	{
  		if (valor < 0) {
			cout << "Invalid value!" << endl;
		} else {
			if (valor <= saldo) {
				saldo = saldo - valor;		
			} else {
				cout << "Debit amount exceeded account balance" << endl;
			}
		}
	}

	int getBalance()
	{		
		return saldo;
	}

};


int main()
{
	int v;
	int c;

	Account a1(1000), a2(300);

	while (1) {
		cout << "Informe a conta (999 para terminar)";
		cin >> c;
		if (c == 999) {
			break;
		}

		cout << "Informe o valor";
		cin >> v;

		if (c == 1) {
			a1.debit(v);
		} else if (c == 2) {
			a2.debit(v);
		} else {
			cout << "Conta inválida!" << endl;
		}
	
		cout << "Saldo de A1=" << a1.getBalance() << endl;
		cout << "Saldo de A2=" << a2.getBalance() << endl;
	}
	cout << "FIM!" <<  endl;

	return 0;
}



