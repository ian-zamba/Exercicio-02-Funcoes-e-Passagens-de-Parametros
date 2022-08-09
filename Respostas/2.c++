/*Defina a funcao calcHipotenusa que calcule o comprimento da hipotenusa de um
triangulo retangulo, ao serem fornecidos os catetos. Use essa funcao em um 
programa para determinar o comprimento da hipotenusa de um triangulo. 
A funcao deve utilizar dois argumentos do tipo double e retornar a hipotenusa 
com o tipo double. Nao se esqueca de incluir um loop que permita ao usuario 
repetir esse calculo para novos dados de entrada ate o usuario dizer 
que deseja encerrar o programa
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

double CalcHipotenusa(double cat1, double cat2);


int main(void) {

    double cat1, cat2, hipo;
    char escolha;

    do{
        cout << "Informe o valor do primeiro cateto: ";
        cin >> cat1; 
        cout << "Informe o valor do segundo cateto: ";
        cin >> cat2; 

        hipo = CalcHipotenusa(cat1, cat2);

        cout << "Hipotenusa = " << hipo << "\n";

        cout << "Deseja continuar? S / N\n";
        escolha = getch();
        tolower(escolha);

        while (escolha != 's' && escolha != 'n'){
            cout << "Tecla invalida, tente novamente: S / N\n";
            escolha = getch();
            tolower(escolha);
        }

    }while(escolha == 's');

    return 0;
}


double CalcHipotenusa(double cat1, double cat2){
    double hipo;

    hipo = sqrt(pow(cat1, 2) + pow(cat2, 2));
    return hipo;
}

/*
                 .eeeeeeeee
                .$$$$$$$$P"
               .$$$$$$$$P
              z$$$$$$$$P
             z$$$$$$$$"
            z$$$$$$$$"
           d$$$$$$$$"
          d$$$$$$$$"
        .d$$$$$$$P
       .$$$$$$$$P
      .$$$$$$$$$.........
     .$$$$$$$$$$$$$$$$$$"
    z$$$$$$$$$$$$$$$$$P"
   -**********$$$$$$$P
             d$$$$$$"
           .d$$$$$$"
          .$$$$$$P"
         z$$$$$$P
        d$$$$$$"
      .d$$$$$$"
     .$$$$$$$"
    z$$$$$$$beeeeee
   d$$$$$$$$$$$$$*
  ^""""""""$$$$$"
          d$$$*
         d$$$"
        d$$*
       d$P"
     .$$"
    .$P"
   .$"
  .P"
 ."
/"

ZAMBA
*/