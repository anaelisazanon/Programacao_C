#include <stdio.h>
#include<string.h>

int main(){
    char nome[250] = "O dia está ensolarado."; //tam 22
    long int tam;

    tam = strlen(nome); //o retorno sempre vai ser long int
    printf("\nTamanho do string:%li",tam); //li = long int
    //retorno tamanho 23
return 0;
}
