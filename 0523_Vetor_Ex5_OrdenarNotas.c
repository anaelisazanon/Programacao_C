/*Questão - COM VETOR - Ler Médias finais */

#include <stdio.h>
#include <stdlib.h>
#define S 15

int main(){
    //declaracao variaveis
    float notasAGT[S];
    float notasPFN[S];
    int alunos5AGT[5];
    int alunos5PFN[5];
    float maior_nota[5];
    float temp;

    maior_nota[0] = notasAGT[0];

//a. 5 maiores notas de AGT

    //ler as médias de AGT
    for(int i=0; i<S;i++){
        printf("Digite a nota do aluno %i em AGT: ",i);
        scanf("%f",&notasAGT[i]);
    }
    //ORDENAR VETOR
    for(int i=0; i<S;i++){
        for(int j=0; j<S;j++){
            if(notasAGT[i] > notasAGT[j]){

                //estudantes com maiores notas
                for(int k=0; k<5;k++){
                    alunos5AGT[k] = j;
                }

                temp = notasAGT[i];
                notasAGT[i] = notasAGT[j];
                notasAGT[j] = temp;
            }
        }
    }
    //printar alunos com maiores notas AGT
    printf("Os estudantes com maior nota em AGT: ");
    for(int k=0; k<5;k++){
        printf("%i //",alunos5AGT[k]);
    }
    printf("\n \n");

    //5 maiores:
    printf("\nAs 5 maiores notas em AGT: ");
    for(int i=0; i<5;i++){
        printf("%.2f //", notasAGT[i]);
    }
    printf("\n \n");

//b. 5 maiores notas de PFN

    //ler as médias de PFN
    for(int i=0; i<S;i++){
        printf("Digite a nota do aluno %i em PFN: ",i);
        scanf("%f",&notasPFN[i]);
    }
    //ORDENAR VETOR
    for(int i=0; i<S;i++){
        for(int j=0; j<S;j++){
            if(notasPFN[i] > notasPFN[j]){
                temp = notasPFN[i];
                notasPFN[i] = notasPFN[j];
                notasPFN[j] = temp;
            }
        }
    }

    //5 maiores:
    printf("\nAs 5 maiores notas em PFN: ");
    for(int i=0; i<5;i++){
        printf("%.2f //", notasPFN[i]);
    }
    printf("\n \n");


    return 0;
}
