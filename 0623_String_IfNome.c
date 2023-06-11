#include <stdio.h>
#include <string.h>

int main(){
    char nome[250];
    long int tam; //ver tamanho do texto
    char letra;

    printf("\n Digite nome e sobrenome:\n");
    fgets(nome,250,stdin);
    //OU scanf("%[^\n]s",nome); -> pq se não ia parar quando desse espaço, assim ele fala para ler a linha toda do inicio (^) até o final \n
    printf("\nSeu nome:%s",nome);
    tam = strlen(nome); //ver tamanho do texto
    printf("\nTAM (nome):%li",tam);


    //printar char
    scanf("%c", &letra);
    if (letra='a'){
       printf("\n oi\n"); 
    }

    //printar string: (é diferente de char)
    strcpy(nome, "Minecraft"); //string copy
    print("Novo nome %s", nome);


    //nome = "printar string" -> só pode com char, com string não pode


    if(strcmp(nome,"Minecraft")==0){
        printf("O nome tem Minecraft");
    }else{
        printf("Nome tme outro valor");
    }


    return 0;
}
