/*3) Troque o menor valor do vetor com o valor na posição 0. Indique o menor valor e escreva, na saída,  o vetor original e o vetor modificado.
Entrada
v={10, 3, 4 ,5, -6, 7, 8, 9}
Saída
v={-6, 3, 4 ,5, 10, 7, 8, 9}*/

#include <stdio.h>

int main() {
    int v[8] = {10, 3, 4, 5, -6, 7, 8, 9};
    int tamanho = 8;

    // Encontrar o menor valor e sua posição
    int menor = v[0];
    int posicao_menor = 0;
    for (int i = 1; i < tamanho; i++) {
        if (v[i] < menor) {
            menor = v[i];
            posicao_menor = i;
        }
    }

    // Trocar o menor valor com o valor na posição 0
    int temp = v[0];
    v[0] = menor;
    v[posicao_menor] = temp;

    // Imprimir o vetor original
    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // Imprimir o vetor modificado
    printf("Vetor modificado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
