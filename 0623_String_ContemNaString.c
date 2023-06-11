#include <stdio.h>
#include<string.h>

int main(){
    char nome[250]; //= "O dia está ensolarado";
    long int tam;

    strcpy(nome,"Minecraft");
    tam = strlen(nome);
    printf("\nTamanho do string: %li",tam);
    printf("\nString: %s",nome);

    if (strcmp(nome,"Minecraft" )==0)
        printf("\nO nome tem Minecraft");
    else
        printf("\nNome tem outro valor");
return 0;
}
