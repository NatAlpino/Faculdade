/*
    Fatorial é um número qualquer, N consiste em multiplicações sucessivas até
que N seja igual ao valor unitário, ou seja, 5!(fatorial é representado pelo sinal !)
5 x 4 x 3 x 2 x 1, que resulta em 120.
*/

int fatorial(int valor) {
    if(valor != 1) {
        return valor * fatorial(valor - 1);
    }
    else{
        return valor;
    }
}

/*
O if dessa função é o ponto de parada ou caso base.
Sem ele a função entraria em lupin e teria um estouro de pilha de memória.
*/ 
