#include <stdio.h>
#include <math.h>

#define TAM 4

int main(){
    int idade[TAM] = {26,17,18,29};// já definiu as idades 
    int posicao;

    for (posicao=0; posicao < TAM; posicao++){  
        idade[posicao] = idade[posicao] + 2;
        printf("Idade Nova:  %i \n",idade[posicao]);
    }
    return 0;
}
