/* 
Passagem de variáveis como parâmetros:

A execução do programa começa na linha 25, pela função principal, na qual são criadas duas variáveis “n1” 
e “n2”. Na linha 28, o comando determina a impressão dos valores das variáveis, na linha 31, a função 
testar() é invocada passando como parâmetro as duas variáveis.

Nesse momento, é criada uma cópia de cada variável na memória para utilização da função. Veja que dentro 
da função o valor das variáveis é alterado e impresso, mas essa alteração é local, ou seja, é feita na 
cópia dos valores e não afetará o valor inicial das variáveis criadas na função principal.

Na linha 33, imprimimos novamente os valores após a chamada da função. A figura – Resultado do código – 
Variáveis em chamada de função com passagem de valores, apresenta o resultado desse programa.
*/

#include<stdio.h>

void testar(int n1, int n2){
    n1 = -1;
    n2 = -2;
    printf("\n\nValores dentro da função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);
}

int main(){
    int n1 = 10;
    int n2 = 20;
    printf("\nValores antes de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);

    testar(n1, n2);

    printf("\n\nValores depois de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);

    return 0;
}