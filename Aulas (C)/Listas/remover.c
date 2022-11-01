int remover (struct Lista* li, int pos) {
    assert (vazia(li) == false);
    assert (pos >= 0 && pos < li->tamanho);

    struct No* ant = NULL;
    struct No* aux = li->inicio;
    for (int i = 0; i < pos; i++) {
        ant = aux;
        aux = aux->proximo;
    }

    if (ant == NULL) {
        li->inicio = aux->proximo;
    }else {
        ant->proximo = aux->proximo;
    }

    int elemento = aux->info;
    li->tamanho--;
    free(aux);
    return elemento;    
}

/*
Na linha 2 verifiquei se a lista está vazia.
(Importante, pois é impossível remover um item de uma lista vazia, então o código da erro).

Na linha 3 verifiquei se a posição a ser removida é válida.

Na linha 5 criei o ponteiro ant, que vai apontar para o nó anterior à posição que eu quero remover.
(Essa ação é importante pois o nó próximo ao que eu vou remover vai precisar ser atualizado).

Na linha 6 criei o ponteiro aux,que vai apontar exatamente para o nó que eu quero remover.

Na linha 12 eu verifico se  nó ant é nulo, pois se ele for, quer dizer que o nó que eu vou remover é o do início da lista.
Se for isso, então eu preciso atualizar o nó de início da lista.

Se eu for pro else da linha 14, quer dizer que quero remover outro nó qualquer da lista.
Então o nó que deverá ser atualizado é o próximo.

Na linha 18 armazeno a informação do nó na variável elemento.
Isso é importante para eu poder retornar o valor armazenado no nó no final da execução da função.

Na linha 19 estou decrementando o valor da variável tamanho.

Na linha 20 estou desalocando a memória alocada para o nó da lista.

Na linha 21 retorno o valor que foi removido.
*/