//Fazer um programa em C para imprimir os 20 primeiros termos da sequencia de Fibonacci.
#include <stdio.h>

int main(void) {
  int i,pri=0,seg=1,fib=0;
  printf("\n20 termos da Sequência Fibonacci\n\n");
  //configurando o for para carregar a sequência 
  for(i=0; i<20; i++){
    if(i<=1){ // impressão do 0 e 1 na variavel fib
      fib=i;
    }
    else{ // soma dos termos para continuar a sequencia apartir do 0 e 1
      fib= pri+seg;
      pri=seg;
      seg=fib;
    }
    //impressão da sequencia na tela
    printf("%d, ",fib);
  }
  return 0;
}