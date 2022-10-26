/*
    A sequência de fibonacci consiste na soma do número atual com o anterior.
Ou seja: 0 1 2 3 5 8 é o mesmo que:
0 + 1 = 2. 
2 + 1 = 3. 
3 + 2 = 5. 
5 + 3 = 8.
*/

//fibonacci com função recursiva:
int fibonacci(int n) {
    if (n == 0)
    return 0;
    else {
        if (n == 1)
        return 1;
        else
            return fibonacci(n-1) + fibonacci(n-2);
    }
}

//fibonacci com função não recursiva:
int fibonacci(int n) {
    int i, j, f;
    i = 1; f = 0;
    for (j = 1; j <= n; j++) {
        f += i;
        i = f - i;
    }
    return f;
}

/*
    A função não recursiva é melhor por ocupar menos memória.
Porém, a função recursiva, desde que aplicada corretamente, não esquecendo seu caso base(ponto de parada),
é mais limpa e de mais fácil entendimento.
*/


//LEMBRETE:
//TESTAR ESSAS DUAS FUNÇÕES COM UM BIG(O) PARA ANALISAR A PERFORMANCE DE CADA UMA.