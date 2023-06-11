#include <stdio.h>
#include <math.h>

#define TAM 4 //definiu uma constante --pode substitir no lugar do 4 -> TAM

int main(){
    int idade[TAM];
    int posicao, soma=0;
    float media;

    printf("Digite a idade dos 4: ");
    for (posicao=0; posicao < TAM; posicao=posicao+1){  
        scanf("%i",&idade[posicao]);
        soma = soma + idade[posicao];
    }
    media = (float) soma /TAM; //4.0
    printf("A media das idades eh:  %f",media);

    return 0;
}
