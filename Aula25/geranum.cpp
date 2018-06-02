/*
Exercício:

Utilize ofstream para gravar 10 números aleatórios em um
arquivo de texto.

Os números devem ser gerados no intervalo [1980, 2010].

marco.mangan@pucrs.br
2018-06-01

Ver:
http://www.cplusplus.com/doc/tutorial/files/
http://www.cplusplus.com/reference/fstream/ofstream/
http://www.cplusplus.com/articles/EywTURfi/

*/

#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
  ofstream arqsaida;
  arqsaida.open ("numeros2.txt");

  srand(time(NULL));

  for (int i = 0 ; i < 10 ; i++)
  {
  	arqsaida << 1980 + (rand() % 31) << endl;
  }

  arqsaida.close();

  return 0;
}





