/*
PUCRS/Escola Politécnica
Programação para Engenharia II
Trabalho T1
Deitel e Deitel.

EXERCICIO 4.13:Um motorista monitorou varios tanques cheios de gasolina registrando a QUILOMETRAGEM dirigida e a QUANTIDADE DE COMBUSTIVEL em litros utilizados para cada tanque cheio. Desenvolva um programa que usa "while" para inserir os quilometros percorridos e a quantidade de litros de gasolina utilizados para cada tanque. O programa deve calcular e exibir o consumo em quilometro/litro para cada tanque cheio e imprimir a quilometragem combinada e a soma total de litros de combustivel consumidos até esse ponto.

Brayan Bueno e Paulo Fonseca

2018-04-25
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	
	float km, lit, rend, rendtotal, kmtotal(0), littotal(0);
	
	
	while(1)
	{
		cout << " Entre com a quilometragem (-1 para sair)" << endl;
		cin >> km;
		
		if(km == -1)
			break;
		else
		{

			cout << " Entre com os litros" << endl;
			cin >> lit;

			rend = km/lit;	

			kmtotal += km; 

			littotal += lit;

			rendtotal = kmtotal/littotal;		

			cout << "Km/litro deste tanque: " << rend << fixed << setprecision (6) << endl;
	

			cout << "Total km/litro deste tanque: " << rendtotal << fixed << setprecision (6) << endl;
		}

			
			

	}

 
	return 0;



}
