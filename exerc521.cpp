/*
PUCRS/Escola Polit�cnica
Programa��o para Engenharia II
Trabalho T1
Deitel e Deitel.

EXERCICIO 5.21:Uma empresa paga seus empregados como gerentes(que recebem um sal�rio fixo por semana), horistas(que recebem um sal�rio-horafixo pelas primeiras 40 horas trabalhadas e mais hora extra com 50% de acr�scimo, isto �, 1,5 vez seu sal�rio-hora, para as horas extras trabalhadas), comissionados (que recebem $ 250 mais 5,7% bruto das vendas semanais) ou trabalhadores por produ��o (que recebem uma quantia fixa de dinheiro para cada item que produzem cada trabalhador por produ��o trabalha apenas em um tipo de item nessa empresa). Escreva um programa para computar o pagamento semanal de cada empregado. Voc� n�o sabe antecipadamente o n�mero de empregados. Cada tipo de empregado tem seu pr�prio c�digo de sal�rio: os gerentes t�m c�digo 1, os horistas t�m c�digo 2, os comissionados t�m c�digo 3 e os trabalhadores por produ��o t�m c�digo 4. Utilize um switch para calcular o sal�rio de cada empregado de acordo com o c�digo de pagamento desse empregado. Dentro do switch, solicite que o usu�rio (isto �, o caixa que faz a folha de pagamento) insira os fatos apropriados de  que o programa precisa para calcular o sal�rio de cada  empregado de acordo com o c�digo de pagamento desse empregado.

Brayan Bueno e Paulo Fonseca

2018-04-25
*/

  #include <iostream>
  #include <iomanip>
  #include <cstdlib>

 using namespace std;

 main()

  {
      float salariofixo=5200.0;
      float salariohora=20.0;
      float salariocomi=250.0;
      float salarioprod=1.20;
      float vendas;
      int pecas;
      int categoria;
      int n;
      int horas;
      char name;

      cout<<endl<<endl<<endl<<endl;
      cout<<setw(25)<<"*********************"<<endl;
      cout<<setw(25)<<"***CALCULO SALARIO***"<<endl;
      cout<<setw(25)<<"*******SEMANAL*******"<<endl;
      cout<<setw(25)<<"*********************"<<endl;
      cout<<endl<<endl;
      cout<<endl<<endl<<endl<<endl;
      cout<<"DIGITE 1 PARA CALCULAR OU S PARA SAIR : ";
      cin>>n;
      system("clear");


      while(n)
      {
          cout<<endl<<endl<<endl<<endl;
          cout<<setfill('.');
          cout<<"GERENTES      "<<setw(15)<<"CODIGO (1)"<<endl;
          cout<<"HORISTAS      "<<setw(15)<<"CODIGO (2)"<<endl;
          cout<<"COMISSIONADOS "<<setw(15)<<"CODIGO (3)"<<endl;
          cout<<"PRODUCAO      "<<setw(15)<<"CODIGO (4)"<<endl;
          cout<<endl<<endl<<endl<<endl;
          cout<<endl;
          cout<<"DIGITE A CATEGORIA A QUE VOCE PERTENCE : ";
          cin>>categoria;
          cout<<endl<<endl<<endl<<endl;

          while(categoria>4||categoria<0)
          {
          system("clear");
          cout<<endl<<endl<<endl<<endl;
          cout<<"GERENTES      "<<setw(15)<<"CODIGO (1)"<<endl;
          cout<<"HORISTAS      "<<setw(15)<<"CODIGO (2)"<<endl;
          cout<<"COMISSIONADOS "<<setw(15)<<"CODIGO (3)"<<endl;
          cout<<"PRODUCAO      "<<setw(15)<<"CODIGO (4)"<<endl;
          cout<<endl<<endl<<endl<<endl;
              cout<<"ESTE CODIGO NAO EXISTE : ";
              cout<<endl<<endl<<endl<<endl;
              cout<<"DIGITE CORRETAMENTE CATEGORIA A QUE VOCE PERTENCE : ";
              cin>>categoria;
          }

          switch(categoria)
          {
          case 1:
              system("clear");
              cout<<endl<<endl<<endl<<endl;
              cout<<"SUA CATEGORIA E DE GERENTE : "<<endl<<endl;
              cout<<endl<<endl<<endl<<endl;
              cout<<"SALARIO SEMANAL = $ 5.200"<<endl;
              cout<<endl<<endl<<endl<<endl;
              cout<<endl<<endl<<endl<<endl;
              cout<<"DIGITE 1 PARA NOVO CALCULO OU S PARA SAIR : ";
              cin>>n;
              system("clear");
              break;
         case 2:
              system("clear");
              cout<<endl<<endl<<endl<<endl;
              cout<<"SUA CATEGORIA E DE HORISTA : ";
              cout<<endl<<endl<<endl<<endl;
              cout<<"QUANTIDADE DE HORAS TRABALHADAS : ";
              cin>>horas;
              cout<<endl<<endl<<endl<<endl;
              if(horas<=40)
                cout<<"SALARIO SEMANAL = $ "<<horas*salariohora<<endl;
              else
                cout<<"SALARIO SEMANAL = $ "<<(40*salariohora)+(horas-40)
                *salariohora*1.5;
                cout<<endl<<endl<<endl<<endl;
                cout<<endl<<endl<<endl<<endl;
                cout<<"DIGITE 1 PARA NOVO CALCULO OU S PARA SAIR : ";
                cin>>n;
                system("clear");
                break;
        case 3:
              system("clear");
              cout<<endl<<endl<<endl<<endl;
              cout<<"SUA CATEGORIA E DE COMICIONADOS : ";
              cout<<endl<<endl<<endl<<endl;
              cout<<"VALOR DE VENDAS NA SEMANA : ";
              cin>>vendas;
              cout<<endl<<endl<<endl<<endl;
              if(vendas==0)
                cout<<"SALARIO SEMANAL = $ "<<salariocomi<<endl;
              else
                cout<<"SALARIO SEMANAL = $ "<<(salariocomi)+0.057*(vendas);
                cout<<endl<<endl<<endl<<endl;
                cout<<endl<<endl<<endl<<endl;
                cout<<"DIGITE 1 PARA NOVO CALCULO OU S PARA SAIR : ";
                cin>>n;
                system("clear");
                break;
        case 4:
              system("clear");
              cout<<endl<<endl<<endl<<endl;
              cout<<"SUA CATEGORIA E DE PRODUCAO : ";
              cout<<endl<<endl<<endl<<endl;
              cout<<"QUANTIDADE DE PECAS PRODUZIDAS : ";
              cin>>pecas;
              cout<<endl<<endl<<endl<<endl;
              cout<<"SALARIO SEMANAL = $ "<<salarioprod*pecas<<endl;
              cout<<endl<<endl<<endl<<endl;
              cout<<endl<<endl<<endl<<endl;
              cout<<"DIGITE 1 PARA NOVO CALCULO OU S PARA SAIR : ";
              cin>>n;
              system("clear");
              break;
          }
      }

  }



