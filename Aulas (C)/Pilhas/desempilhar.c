int desempilhar(struct Pilha* p) {
    assert(p != NULL);    
    assert(p->topo != NULL);
    struct No* aux = p->topo;
    int elemento = aux->info;
    p->topo = aux->proximo;
    p->tamanho--; 
    free(aux);
    return elemento;    
}

/*
Na linha 2 e 3 verifiquei se a pilha não está vazia.
Na linha 4 criei um nó auxiliar que aponta para o topo da pilha.
Na linha 5 guardei o valor que está no topo da lista na variável "elemento".
Na linha 6 o ponteiro topo da lista é atualizado.
A partir de então, o topo da pilha passa a ser ocupado pelo segundo elemento, caso haja um. 
    Caso contrário, o topo da pilha passa a ser igual a NULL, indicando que a pilha está vazia.
Na linha 7 decrementei o tamanho da pilha.
Na linha 8 desaloquei a memória do nó que ocupava o topo.
Na linha 9 retornei o valor que ficou armazenado na variável elemento.
*/