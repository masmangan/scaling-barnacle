// PUCRS/FACIN
// Programação para Engenharia II
// 2018-05-11
// marco.mangan@pucrs.br

#include <fstream>   	// para usar file streams (ifstream,ofstream)
#include <iostream>	// para usar cin,cout
#include <iomanip>	// para usar manipuladores (setw, right, ...)
#include <math.h>

using namespace std;

int main() { 		
	ofstream arqsaida; // Cria output file stream (ofstream)
	
	arqsaida.open("experimento.csv", ios::out); // Cria e abre arquivo
	
	if (!arqsaida.is_open()) { // Se houver erro, sai do programa
		cerr << "Falha ao abrir arquivo!" << endl;
		return 1;
	}

	cout << "Arquivo aberto!" << endl;
	cout << "Gerando dados..." << endl;

	for(int i = 1 ; i <= 250 ; i++) { 
		arqsaida <<  i  << ": " << i * i << ": " << sqrt(i) << endl;
		if (arqsaida.fail()) {
			cout << "Erro fatal!" << endl;
			return 2;
		}
	}

	cout << "Fechando o arquivo..." << endl;
	arqsaida.close();

	return 0;
}

