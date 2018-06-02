/*
Exercício:

Ler um arquivo de texto e mostrar o maior número lido.

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

using namespace std;

int main()
{
  ifstream arqentrada;
  arqentrada.open ("numeros2.txt");

  int n;

  //for (int i = 0 ; i < 10 ; i++)
  while ( ! arqentrada.eof() ) 
  {
  	arqentrada >> n;
        cout << n << endl;
  }

  arqentrada.close();

  return 0;
}





