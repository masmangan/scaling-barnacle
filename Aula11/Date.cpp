/*
3.15 Crie uma classe chamada Date...

Deitel e Deitel, p. 92

Douglas
Vinicius

13-ABR-2018
*/

#include <iostream>

using namespace std;

class Date
{
private:
	int mes, dia, ano;
public:
	Date(int m, int d, int a)
	{
		setMes(m);
		setDia(d);
		setAno(a);
	}

	void setAno(int a)
	{
		ano = a;
	}

	void setDia(int d)
	{
		dia = d;
	}


	void setMes(int m)
	{
		if (m < 1) {
			m = 1;
		}

		if (m > 12) {
			m = 1;
		}
		mes = m;
	}

	int getMes()
	{
		return mes;
	}

	int getAno()
	{
		return ano;
	}

	int getDia()
	{
		return dia;
	}

	void displayDate() {
		cout << dia << "/" << mes << "/" << ano;
	}

};


int main()
{
	Date d(12, 24, 2018);

	int dia, mes, ano;

	cout << "Informe dia, mes e ano: ";
	cin >> dia >> mes >> ano;

	d.setDia(dia);
	d.setMes(mes);
	d.setAno(ano);

	d.displayDate();
	cout << endl;

	cout << "FIM!" <<  endl;

	return 0;
}



