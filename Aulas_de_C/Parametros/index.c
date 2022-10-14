/*
Passagem de parâmetros:

Na linha 10 foi criada uma função com o nome somar e ela possui dois parâmetros de números inteiros (a, b).
Na linha 16 a variável result dentro da função main, está chamando a função somar e passando como parâmetros os números 10 e 15.
*/

#include<stdio.h>

int somar(int a, int b){
    return a + b;
}

int main(){
    int result;
    result = somar(10, 15);
    printf("\nResultado da soma = %d", result);

    return 0;
}
