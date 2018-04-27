/*
3.14 Crie uma classe chamada Employee...

Deitel e Deitel, p. 92

Cassio
Rafael

13-ABR-2018
*/

#include <iostream>

using namespace std;

class Employee
{
private:
	string nome, sobrenome;
	int salario;

public:
	Employee(string nome, string sobrenome, int salario)
	{
		//this->nome = nome;
		//this->sobrenome = sobrenome;
		//this->salario = salario;
		setNome(nome);
		setSobrenome(sobrenome);
		setSalario(salario);
	}

	void setNome(string nome)
	{
		this->nome = nome;
	}

	void setSobrenome(string sobrenome)
	{
		this->sobrenome = sobrenome;
	}

	void setSalario(int salario) 
	{
		if (salario < 0)
			salario = 0;
		this->salario = salario;
	}

	string getNome()
	{
		return nome;
	}	

	string getSobrenome()
	{
		return sobrenome;
	}	

	int getSalario()
	{
		return salario;
	}	


};


int main()
{
	Employee joao("João", "Ubaldo", 12500);
	Employee brayan("Brayan", "Bueno", 5000);

	cout << joao.getSalario() * 12 << endl;
	cout << brayan.getSalario() * 12 << endl;

	return 0;
}

