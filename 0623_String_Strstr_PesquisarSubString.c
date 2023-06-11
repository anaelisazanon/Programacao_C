#include <stdio.h>
#include <string.h>
int main(){
    char * ponteiro; //ponteiro é string sem saber tamanho
    char nome[] = "O dia está ensolarado.";
    char comparacao[] = "sol"; //se for Sol não dá

    ponteiro = strstr(nome, comparacao); //ponteiro vai retornar a frase toda se o valor menor estiver na maior

    if(ponteiro != NULL){ //não exjste o sol no 'nome' //! not
        printf("Substring encontrada!\n");
        printf("Substring inicia na posição %ld\n", ponteiro - nome); //ld = li = long int
    } else {
        printf("Substring não encontrada!\n");
    }
 return 0;
}
