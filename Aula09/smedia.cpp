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

Usando registro (struct).

*/

#include <iostream>

using namespace std;

struct aluno {
	string nome, curso, matricula;
	float p1, p2, t;
	int faltas;

	float g1;
	string resultado;
};


int main() {
	// Marco Mangan, 4/452, 12345678-9
	struct aluno a;

	int periodos = 70;

	cout << "Cálculo do G1" << endl;

	// entrada
	cout << "Dados do aluno" << endl;

	cout << "Informe nome:" << endl;
	getline(cin, a.nome);

	cout << "Informe curso:" << endl;
	getline(cin, a.curso);

	cout << "Informe matrícula:" << endl;
	getline(cin, a.matricula);

	cout << "Avaliação do aluno" << endl;

	cout << "Informe p1:" << endl;
	cin >> a.p1;

	cout << "Informe p2:" << endl;
	cin >> a.p2;

	cout << "Informe t:" << endl;
	cin >> a.t;

	cout << "Informe faltas:" << endl;
	cin >> a.faltas;

	// processamento
	a.g1 = (2.0f*a.p1 + 2.0f*a.p2 + a.t) / 5.0f;

	if (a.faltas > periodos / 4) {
		a.resultado = "REP";
	} else if (a.g1 >= 7.0f) {
		a.resultado = "APR";
	} else if (a.g1 < 4.0f) {
		a.resultado = "REP";
	} else  {
		a.resultado = "G2";
	}

	// saída
	cout << a.nome << " " << a.curso << " " << a.matricula << endl;
	cout << a.p1 << " " << a.p2 << " " << a.t << " " << a.faltas << endl;
	cout << a.g1 << "" << a.resultado << endl;

	cout << "*FIM*" << endl;
	return 0;
}
