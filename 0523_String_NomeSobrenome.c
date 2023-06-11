#include <stdio.h> 
#include <math.h>
#include <string.h>

int main(){
    char nome[250];
    printf("\n Digite nome e sobrenome: \n");
    fgets(nome,250,stdin);
    //OU scanf("%[^\n]s",nome); -> pq se não ia parar quando desse espaço, assim ele fala para ler a linha toda do inicio (^) até o final \n
    printf("\nSeu nome: %s", nome);

    return 0;
}
