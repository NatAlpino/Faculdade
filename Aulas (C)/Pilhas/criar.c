struct Pilha* criar() {
    struct Pilha* nova_pilha = (struct Pilha*) malloc(sizeof(struct Pilha));
    if (nova_pilha !== NULL) {
        nova_pilha->topo = NULL;
        nova_pilha->tamanho= 0;
    }
    return nova_pilha;
}

//Criando uma pilha vazia:

/*
Na linha 2 instanciei dinamicamente uma variável do tipo struct "Pilha" na memória.
Na linha 3 comecei a testar se a memória foi corretamente alocada.
Na linha 4 estou testando se ela está vazia, apontando o topo para NULL.
Com isso o tamanho deve ser igual a 0, testei na linha 5.
Na linha 7 retornei o endereço da memória alocado para a variável Pilha.
*/