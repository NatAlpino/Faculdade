//Inserção de elementos na lista:

void inserir (struct Lista* li, int pos, int item) {
    assert (li != NULL);
    assert (pos >= 0 && pos < li->tamanho.len);
    struct N* novo_no = (struct No*) malloc(sizeof(struct No));
    novo_no->info = item;
    if (pos == 0) {
        novo_no->proximo = li->inicio;
        li->inicio = novo_no;
    } else {
        struct No* aux = li->inicio;
        for(int i = 0; i < pos - 1; i++) {
            aux = aux->proximo;
        }
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }
    li->tamanho++;
}

/*
Na linha 4 confirmei se o ponteiro que representa a lista (li) não é nulo.
Na linha 5 verifiquei se a posição que o elemento será inserido é válida.
Na linha 6 instanciei um novo nó (novo_no) com a informação recebida no parâmetro item (criado na linha 3).
Na linha 7 atualizei a variável info do novo_no com a informação recebidano parâmetro item da função.
O if que começa na linha 8 está verificando se o novo_no vai entra no início da lista.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
O else que começa na linha 11 está tratando um caso de inserção em outra posição que não seja a inicial da lista.
Na linha 12 criei um ponteiro auxiliar (aux) e ele está apontando para o primeiro elemento da lista.
Na linha 13 usei um for pra percorrer a lista e ir atualizando aux a cada iteração.
O novo elemento vai vir sempre depois do parâmetro aux, ou seja, se quisermos acrescentar um novo elemento na posição 6, ele deverá apontar para aux na posição 5.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
Na linha 19 eu estou incrementando o valor da variável tamanho já que um novo elemento foi inserido.
*/