void empilhar(struct Pilha* p, int item) {
    assert(p != NULL);    
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    if (novo_no != NULL) {
        novo_no->info = item;
        novo_no->proximo = p->topo;
        p->topo = novo_no;
        p->tamanho++;
    }
}

/*
Na linha 3 foi criado um novo nó dinamicamente.
Na linha 4 eu confiro se o novo nó foi criado corretamente, validando se o valor do ponteiro é diferente de NULL.
Na linha 6 estou empilhando um novo nó no topo da pilha.
Na linha 7 estou apontando o ponteiro "topo" da pilha para o novo nó.
Na linha 8 estou incrementando o tamanho da pilha.  
*/