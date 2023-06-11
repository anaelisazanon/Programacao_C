#include <stdio.h>
#define S 10

int main(){

    int a[S] ={2,6,8,3,10,9,1,21,33,14};
    int menor_inicial;
    int n = S; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a[j+1] < a[j]) {
                int temp = a[j]; 
                a[j] = a[j+1]; 
                a[j+1] = temp; 
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]); 
    }
    printf("\n"); 

    //if (vetor[posicao] < menor_inicial){
     //   menor_inicial = vetor[posicao];


    //}


    return 0;
}
