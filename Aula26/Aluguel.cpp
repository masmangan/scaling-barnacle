
#include "Aluguel.h"
using namespace std;
void Aluguel::calcTempo() 
{
	entrada = horae * 60 + mine;
	saida = horas * 60 + mins;
	tempo = saida - entrada;
}

int Aluguel::getTempoHoras()
{
	calcTempo();
	return tempo / 60;
}

int Aluguel::getTempoMinutos() 
{
	calcTempo();
	return tempo % 60;
}

