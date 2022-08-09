/*. Sabe-se que um dos conceitos basicos da geometria e que a menor distancia 
entre dois pontos e dada por uma reta, contudo, na geometria analıtica esses 
pontos recebem coordenadas no plano cartesiano e por meio dessas coordenadas
podemos encontrar o valor da distancia entre dois pontos. Considerando a funcao 
calcHipotenusa definida na questao 1, utilize-a, sem qualquer alteraco, 
de modo que retorne a distancia entre dois pontos cartesianos A e B.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

double CalcHipotenusa(double cat1, double cat2);
double Calccats (double xa, double ya, double xb, double yb);


int main(void) {

    double xa, ya, xb, yb;
    char escolha;

    do{
      cout << "Informe a cordenada do primeiro ponto: \n" << "Xa: ";
      cin >> xa;
      cout << "Ya: ";
      cin >> ya; 

      cout << "Informe a cordenada do segundo ponto: \n" << "Xb: ";
      cin >> xb;
      cout << "Yb: ";
      cin >> yb;

      Calccats(xa, ya, xb, yb);

      cout << "Deseja continuar? S / N";
      escolha = getch();
      tolower(escolha);

      while (escolha != 's' && escolha != 'n'){
        cout << "\nTecla invalida, tente novamente: S / N";
        escolha = getch();
        tolower(escolha);
      }
    }while(escolha == 's');

    return 0;
}


double Calccats (double xa, double ya, double xb, double yb){
    
    double cat1, cat2;
    double distancia;

    cat1 = xb - xa;
    cat2 = yb - ya;
    
    distancia = CalcHipotenusa(cat1, cat2);

    cout << "Distancia dos pontos = " << distancia <<"\n";
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