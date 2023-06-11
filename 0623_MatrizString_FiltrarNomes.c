#include <stdio.h>
#include <string.h>
#define N 6

int main(){
    char alunos[N][200]; //matriz [numero_linhas][tamanho_max_nome]
    //={"Camila", "Pedro Mossoi", "Higor",
    //"Pedro Cortez", "Victor", "Pedro Lagemann"};
    
    int lin, col;

    //ler nome de cada aluno
    for(lin=0 ; lin < N; lin++){
        printf("\nDigite o nome (%i):", lin); //lin->qual a pessoa que estou digitando o nome
        fgets(alunos[lin], 200, stdin); //guarda nome de cada um
    }

    printf("\nSaida\n");
    for(lin=0 ; lin < N ; lin++){
        printf("\n");
        printf("Estudante %i :%s ", lin , alunos[lin]);
    }

    printf("\nFiltrar os alunos que tem Pedro no nome\n");
    for(lin=0 ; lin < N; lin++){
        printf("\n");
        char *ret ; //variavel string sem tamanho
        ret = strstr(alunos[lin], "Pedro"); //pesquisar quem tem pedro
        if (ret != NULL){
            printf("Estudante %i :%s ", lin , alunos[lin]);
            printf("retorno %s", ret);
        }
    }
return 0;
}
