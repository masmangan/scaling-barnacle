/*
PUCRS/Escola Politécnica
Programação para Engenharia II
Trabalho T1
Deitel e Deitel.

EXERCICIO 6.29: (Números perfeitos) Dizemos que um inteiro é um número perfeito se a soma de seus fatores, incluindo 1(mas não o próprio número), é igual ao número. Por exemplo, 6 é um número perfeito porque 6 = 1+2+3. Escreva uma função perfect que determina se o parâmetro number é um número perfeito. Utilize essa função em um programa que determina e imprime todos os números perfeitos entre 1 e 1000. Imprima os fatores de cada número perfeito para confirmar se o número é de fato perfeito. Desafie o poder do computador testando números maiores que 1000. 

Brayan Bueno e Paulo Fonseca

2018-04-25
*/

#include <iostream>

using namespace std;

void factor(int number)
{
  int i, soma = 0 ;
	cout << endl;
  for (i = 1 ; i < number ; i++)  // Percorre todos os valores positivos menores que o number.
    {
	if (number % i == 0)          // Verifica se o número é divisor de number.
      	{
	soma = soma + i ;       // Atualiza a soma dos divisores de number.  
	 	
		cout << i << " ";//EXTRA  
	}
	
    } 
	cout << endl;

}




//////////////////////////////////
int perfect(int number)
{
  int i, soma = 0 ;
	for (i = 1 ; i < number ; i++)  // Percorre todos os valores positivos menores que o number.
    	{
	if (number % i == 0)          // Verifica se o número é divisor de number.
      	{
	soma = soma + i ;       // Atualiza a soma dos divisores de number.  
	 	
		//cout << i << " ";//EXTRA  
	}
	
    } 
	cout << endl;
  if (soma == number) {            // Se a soma dos divisores é igual a number ...
    return 1;                 // O número é perfeito!
  }
  else {                      // caso contrário ...
    return 0;                 // O número não é perfeito!
  }
}

int main()
{ 
  int x;

  for(x=1;x<=1000;x++)
{
  	
  	if (perfect(x)) 
   	{
	cout << "O numero " << x <<" é um número perfeito";
	factor(x);
	}  	
  	else 
  	  cout << "O numero " << x <<" não é um número perfeito";
  	
  }
  return 0;
}
