#include <stdio.h>
#include <math.h>
#define S 10
//ALG SEM O FOR EM CIMA DE TUDO
//ver se em um valor menor que o primeiro, se tiver colocar o valor no primeiro e depois o outro no lugar o menor
//depois de colocar o menor na frente, ordenar o vetor todo

int main(){
//declaracao variaveis
    int v[S]={2,6,8,3,10,9,1,21,33,14};
    int idx, menor, pos_menor, temp;

    for(int g=0;g<S;g++){ //vai rodar para ordenar os vetores, depois de colocar o menor na frente

        menor = v[g]; //ver se algum numero é menor que o valor do idx[0]
        pos_menor=g;

        for(idx=g+1;idx<S; idx++){ //idx começa no 1 pq tem q ver se algum numero é menor que o valor do idx[0] 
            if(v[idx] < menor){
                menor = v[idx];
                pos_menor=idx;
            }
        }
        //trocar as posicoes dos vetores, o menor na posicao 0 (ex: trocar liquidos de copo com um copo temporário)
        temp = v[g]; //temp=2
        v[g] = v[pos_menor]; //v[0]=1
        v[pos_menor] = temp;
    }
    for(idx=0;idx<S; idx++){ 
    //printar o novo vetor 1 6 8 3 10 9 2 21 33 14 --> o menor na frente, depois com o for vai organizando
        printf("%i\t",v[idx]);
    }
    return 0;
}
//método bubble sort (vai vendo o do lado):
    //pior método de ordenação - demora
        //if(v[i]>v[i+1])
        //temp v[i]
        //v[1] = v[i+1]
        //v

//método sem o FOR repeticao acima de todos, ele teria que repetir os mesmos passos:
    //ordenar vetor com o 1 na frente !!já que está repetindo tudo isso, pode colocar um for dentro de outro for
        //menor= v[1];
        //pos_menor = 1;
        //for (idx=2; idx< S; idx++){
        //    temp = v[1];
        //    v[1] = menor;
        //   v[pos_menor] = temp;
        //}
