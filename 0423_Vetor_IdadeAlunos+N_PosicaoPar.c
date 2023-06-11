#include <stdio.h>
#include <math.h>
#define TAM 8 //8 numeros

int main(){
    int idade[TAM] = {1,3,4,5,6,7,8,9};// já definiu as idades 
    int posicao,n;

    printf("Digite um valor para somar: ");
    scanf("%i",&n);
    for (posicao=0; posicao < TAM; posicao++){  
        if (posicao % 2 == 0){ //aqui printa somente os vetores com índice PAR diferente de printar os valores pares que usaria idade[posicao]
            idade[posicao] = idade[posicao] + n;
        }
    }
    printf("Saída %i \n",idade[posicao]);
    for (posicao=0; posicao < TAM; posicao++){  
        printf("%i   \t",idade[posicao]); //\n é linha e o \t é para dar espaço TAB
    }
    return 0;
}
