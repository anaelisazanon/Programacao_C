//Implementar um algoritmo que testa se um número inteiro positivo é primo ou não
//primo -> num int positivo >1 
//      -> que só é div. por ele mesmo e 1

#include <stdio.h>
#include <math.h> 

int main(){
//variáveis  
   int n,i,conta_divisores;
   
//programa
   printf("Digite um número:\n");
   scanf("%i", &n);

//é primo
    for (i=1; i<=n; i++){
        if (n % i == 0){ //n % i == 0 -> pega resto int
            printf("\n%i", i,"\n");
            conta_divisores = conta_divisores +1;
        }
    }
    if (conta_divisores ==2){ //se só divisível por ele mesmo e 2 ent PRIMO
        printf("\n eh primo");
    }
    printf("\n %i tem %i divisores",n,conta_divisores);

    /*PROF:
    for (i=n; i>=1; i--){
        //n ser primo
        if (n % i == 0){ //n % i == 0 -> pega resto int
            printf("%i", n);
        }
    }*/

   return 0;
}
