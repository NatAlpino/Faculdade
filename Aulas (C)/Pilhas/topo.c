int topo(struct Pilha* p) {
    assert(p != NULL);
    assert(p->topo != NULL);
    struct No* topo = p->topo;
    return topo->info;
}

/*
Na linha 2 eu confirmei se a pilha não está vazia.
Na linha 3 eu confirmei se o topo da pilha não é nulo.
Na linha 4 eu criei uma variável auxiliar que aponta para o nó que está no topo da pilha.
Na linha 5 eu retornei o valor armazenado no topo.
*/