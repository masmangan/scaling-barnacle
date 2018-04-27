/*
Escreva um programa que calcula e apresenta o resultado do grau G1
para um aluno desta disciplina.

Os dados do alunos são: nome completo, código de curso e matrícula.
Os dados da avaliação da disciplina são: p1, p2, t e faltas.

O cálculo do grau G1 é:

G1 = ( 2P1 + 2P2 + T) / 5

Em 2018/1 a disciplina apresenta 35 encontros. O aluno deve ter frequência mínima de 75%.

Referências:
https://www.inf.pucrs.br/~pinho/PRGSWB/Streams/streams.html
http://www.cplusplus.com/forum/beginner/13866/

*/

#include <iostream>

using namespace std;

int main() {
	// Marco Mangan, 4/452, 12345678-9
	string nome, curso, matricula;
	float p1, p2, t;
	int faltas;

	float g1;
	string resultado;

	int periodos = 70;

	cout << "Cálculo do G1" << endl;

	// entrada
	cout << "Dados do aluno" << endl;

	cout << "Informe nome:" << endl;
	getline(cin, nome);

	cout << "Informe curso:" << endl;
	getline(cin, curso);

	cout << "Informe matrícula:" << endl;
	getline(cin, matricula);

	cout << "Avaliação do aluno" << endl;

	cout << "Informe p1:" << endl;
	cin >> p1;

	cout << "Informe p2:" << endl;
	cin >> p2;

	cout << "Informe t:" << endl;
	cin >> t;

	cout << "Informe faltas:" << endl;
	cin >> faltas;

	// processamento
	g1 = (2.0f*p1 + 2.0f*p2 + t) / 5.0f;

	if (faltas > periodos / 4) {
		resultado = "REP";
	} else if (g1 >= 7.0f) {
		resultado = "APR";
	} else if (g1 < 4.0f) {
		resultado = "REP";
	} else  {
		resultado = "G2";
	}

	// saída
	cout << nome << " " << curso << " " << matricula << endl;
	cout << p1 << " " << p2 << " " << t << " " << faltas << endl;
	cout << g1 << resultado << endl;

	cout << "*FIM*" << endl;
	return 0;
}
