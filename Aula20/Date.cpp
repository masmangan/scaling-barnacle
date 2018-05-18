/*
3.15 Crie uma classe chamada Date...

Deitel e Deitel, p. 92

Douglas
Vinicius

13-ABR-2018


Acrescentar a sobrecarga do operador <<.
Utilizar friend.

15-MAI-2018
*/

#include <fstream>
#include <iostream>

using namespace std;
//using namespace ios;

class Date
{
   friend std::ostream& operator<<(std::ostream&, const Date&);

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

//	void displayDate() {
//		cout << dia << "/" << mes << "/" << ano;
//	}

};

std::ostream& operator<<(std::ostream& s, Date& d)
{
//void displayDate(ostream& s, Date& d) {
	s << d.getDia() << "/" << d.getMes() << "/" << d.getAno();
	return s;
	//d.setAno(2020);
}



int main()
{
	Date d(12, 24, 2018);

	ofstream saida;


	// open
	saida.open("datas.txt", ios::out);

	int dia, mes, ano;

	cout << "Informe dia, mes e ano: ";
	cin >> dia >> mes >> ano;

	d.setDia(dia);
	d.setMes(mes);
	d.setAno(ano);

	//displayDate(cout, d);
	cout << d;
	cout << endl;

	// gravar data no arquivo
	//saida << d.getDia() << "/" << d.getMes() << "/" << d.getAno();
	//displayDate(saida, d);
	saida << d;

	cout << "FIM!" <<  endl;

        // close
	saida.close();

	return 0;
}



