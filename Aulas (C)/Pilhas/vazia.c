bool vazia(struct Pilha* p) {
    assert(p != NULL);
    return (p->topo == NULL);
}

/*
Na linha 2 eu verifico se a pilha está vazia.
Na linha 3 eu estou comparando se o ponteiro topo da pilha a NULL
Se topo for igual a NULL, então a função vazia retornará true, se não, ela retornará false.
*/