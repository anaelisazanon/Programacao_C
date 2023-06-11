/*7) Escreva um algoritmo em que o usuário digita um valor n inteiro e o algoritmo deve pesquisar se esse valor n existe em um vetor de 10 números inteiros ( voce pode ler ou definir dentro do programa). Se existir, escreva a posição , senão, escreva que "não existe". Escreva o vetor existente na saída também.
Exemplo 1
( dado um vetor[10]={34, 1, 2, 3, 5, 8, 13, 7, 1, 20} )
Entrada n = 8
Saída : Existe na posicao 5
{34, 1, 2, 3, 5, 8, 13, 7, 1, 20} 
--------------------------------------------------
Exemplo 2
( dado um vetor[10]={34, 1, 2, 3, 5, 8, 13, 7, 1, 20} )
Entrada: n = 24
Saída : Não existe 
{34, 1, 2, 3, 5, 8, 13, 7, 1, 20} */

#include <stdio.h>

int main() {
    int vetor[10] = {34, 1, 2, 3, 5, 8, 13, 7, 1, 20};
    int n, i, posicao = -1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    // Verificar se o valor existe no vetor
    for (i = 0; i < 10; i++) {
        if (vetor[i] == n) {
            posicao = i;
            break;
        }
    }

    // Imprimir o vetor
    printf("Vetor: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Verificar se o valor foi encontrado e exibir a posição
    if (posicao != -1) {
        printf("Existe na posicao %d\n", posicao);
    } else {
        printf("Nao existe\n");
    }

    return 0;
}
