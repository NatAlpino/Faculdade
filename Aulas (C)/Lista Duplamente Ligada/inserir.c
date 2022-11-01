void inserir (struct ListaDupla* li, int pos, int item) {
    assert(li != NULL);
    assert(pos >= 0 && pos <= li->tamanho);

    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    novo_no->info = item;
    if (pos == 0) {
        novo_no->anterior = NULL
        novo_no->proximo = li->inicio;
        li->inicio = novo_no;
        if (li->fim == NULL) {
            li->fim = novo_no;
        }
    } else if (pos == li->tamanho) {
        novo_no->anterior = li->fim;
        novo_no->proximo = NULL;
        li->fim->proximo = novo_no;
        li->fim = novo_no;
    } else {
        struct No* aux = li->inicio;
        for (int i = 0; i < pos - 1; i++) {
            aux = aux->proximo;
        }
        novo_no->anterior = aux;
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }
    li->tamanho++
}

/*
No trecho de código das linhas 8 a 13, que trata da inserção do início da lista, foi preciso incluir instruções para atualizar 
o ponteiro “anterior” do novo nó para NULL, pois não há nós anteriores ao nó inicial. 

Também foi preciso atualizar o ponteiro “fim” da lista, no caso de ser a inserção do primeiro elemento da lista, ou seja, 
quando a lista tem apenas um elemento, tanto o ponteiro “inicio” quanto o “fim” apontam para o mesmo elemento. O bloco else-if das 
linhas 14 a 18 é inédito e trata da inserção no final da lista. 

Por fim, o trecho de código das linhas 19 a 27, que trata da inserção de um elemento em qualquer posição entre o primeiro e o último 
elemento, é bem similar ao da lista simplesmente ligada, com a exceção que, agora, é preciso atualizar o ponteiro “anterior” do nó que 
está sendo inserido.
*/