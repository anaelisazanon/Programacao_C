#include <stdio.h> 
#include <math.h>
#include <string.h>

int main(){
    char nome[250];
    long int tam; //ver tamanho do texto
    printf("\n Digite nome e sobrenome:\n");
    fgets(nome,250,stdin);
    //OU scanf("%[^\n]s",nome); -> pq se não ia parar quando desse espaço, assim ele fala para ler a linha toda do inicio (^) até o final \n
    printf("\nSeu nome:%s",nome);
    tam = strlen(nome); //ver tamanho do texto
    printf("\nTAM (nome):%li",tam);

    return 0;
}
