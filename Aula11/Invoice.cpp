/*
3.13 Crie uma classe chamada Invoice...

Deitel e Deitel, p. 92

Filipe
Morgana

13-ABR-2018
*/

class Invoice 
{
public:
	string identificador, descricao;
	int quantidade, preco;

	Invoice()
	{
	}

	void setIdentificador(string i)
	{
		identificador = i;
	}

	string getIdentificador()
	{
		return identificador;
	}

	int getInvoiceAmount()
	{
		return quantidade * preco;
	}

};


