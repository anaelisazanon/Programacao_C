#include <stdio.h>
#include <string.h>

int main(){
    char nome[250] = "Rocket League ? ";
    long int tam; //ver tamanho do texto
    char letra;
    int indice;

    printf("\n Digite nome e sobrenome:\n");
    fgets(nome,250,stdin);
    //OU scanf("%[^\n]s",nome); -> pq se não ia parar quando desse espaço, assim ele fala para ler a linha toda do inicio (^) até o final \n
    printf("\nSeu nome:%s",nome);
    tam = strlen(nome); //ver tamanho do texto
    printf("\nTAM (nome):%li",tam);

//processamento de texto
    for(indice=0;indice <(int)tam; indice++){ //(int)tam pq é long int mas funciona normal tmb
        printf("\n%c %i", nome[indice], nome[indice]); //é char aqui, n é string pq separou a string!!!
        //printa em int e transforma em código
    }
    return 0;
}
