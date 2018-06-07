#include <iostream>
using namespace std;

class Aluguel {
private:
	int entrada;
	int saida;
	int tempo;

	void calcTempo(); 

public:
	string placa;
	int horae;
	int mine;
	int horas;
	int mins;

	int getTempoHoras();
	int getTempoMinutos();
};

