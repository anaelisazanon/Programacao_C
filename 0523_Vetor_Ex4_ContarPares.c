//Lista intermediaria vetores 2

//4) Escreva um algoritmo que conta o número de valores pares em um vetor.

#include <stdio.h>
#define S 10

int main(){

    int a[S] ={2,6,8,3,10,9,1,21,33,14};
    int contador=0;

        for (int j = 0; j < S; j++) {
            if ((j+1) % 2 == 0 ) {
                contador = contador +1;
            }
        }
   
    printf("%i ", contador); 
    printf("\n"); 

    return 0;
}
