#include<stdio.h>

int func_fatorial(int valor);

int main(){
  int valor, x ;
  printf("\n Digite um valor : ");
  scanf( "%i" , &valor);
  x = func_fatorial(valor);
  printf(" %i! = %i" , valor, x);
  return 0;
}

int func_fatorial(int valor){
  int i, fat;
  fat = 1;
  for( i= 1 ; i <= valor ; i++){
      fat = fat * i ;
  }
  return fat; //usa return se não usar o void
}
