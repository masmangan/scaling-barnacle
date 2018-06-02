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
  int n;
  int maior;
  int menor;

  ifstream arqentrada;
  arqentrada.open ("numeros2.txt");

  arqentrada >> n;
  maior = n;
  menor = n;

  //for (int i = 0 ; i < 10 ; i++)
  while ( ! arqentrada.eof() ) 
  {
  	arqentrada >> n;
        if (maior < n)
        {
	    maior = n;
        }
        if (menor < n)
        {
	    menor = n;
        }
        cout << n << endl;
  }

  arqentrada.close();

  cout << "Maior=" << maior << endl;
  cout << "Menor=" << menor << endl;

  return 0;
}





