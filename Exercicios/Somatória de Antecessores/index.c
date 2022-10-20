/*
    Função recursiva que faz a somatória dos antecessores de um número inteiro positivo, 
informado pelo usuário, ou seja, se o usuário digitar 5, o programa deverá retornar o resultado 
da soma 5 + 4 + 3 + 2 + 1 + 0. 

Na linha 25 a função é chamada para executar com o valor digitado pelo usuário, na linha 12 foi criada a 
funcão somar que primeiro valida se o número não é igual a 0 (linha 13), se a afirmação for verdadeira,
a função vai pra linha 18 onde o valor é somado ao valor - 1.
*/

#include<stdio.h>
int somar(int valor) {
    if(valor == 0) {
        //critério de parada
        return valor;
    } else {
        //chamada recursiva
        return valor + somar(valor - 1); 
    }
}
int main() {
    int n, resultado;
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);
    resultado = somar(n); // primeira chamada da função
    printf("\nResultado = %d",resultado);
    return 0;
}