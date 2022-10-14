/*
Acessando uma variável global dentro de uma função com uma variável de mesmo nome.
A palavra reservada extern serve para fazer esse acesso:

Na linha 13 eu estou declarando uma variável global de nome x
Na linha 16 estou declarando uma variável local, dentro da função main, com o mesmo nome.
Na linha 19 estou usando extern para acessar a variável x que foi declarada fora da função.
Na linha 20 estou atribuindo o valor de x global para a variável b.
*/

#include<stdio.h>

int x = 10;

int main(){
  int x = -1;
  int b;
  {
    extern int x;
    b = x;
  }
  printf("\n Valor de x = %d",x);
  printf("\n Valor de b (x global) = %d",b);
  return 0;
}

