#include <stdio.h>
#include <math.h>
//Ver se soma+2 nas idades é par
#define TAM 4

int main(){
    int idade[TAM] = {26,17,18,29};// já definiu as idades 
    int posicao;

    for (posicao=0; posicao < TAM; posicao++){  
        if (idade[posicao] % 2 == 0){
            idade[posicao] = idade[posicao] + 2;
            printf("Idades pares:  %i \n",idade[posicao]);
        }
    }
    return 0;
}
