int desenfileirar(struct Fila* f) {
    assert(f != NULL);    
    assert(f->inicio != NULL);
    struct No* aux = f->inicio;
    int elemento = aux->info;
    f->inicio = aux->proximo;
    if (f->inicio == NULL) {
        f->fim = NULL;    
    }
    f->tamanho--; 
    free(aux);
    return elemento;    
}

/*
Linha 2: Verifico se o ponteiro passado não é null.
Linha 3: Verifico se a fila não está vazia.
Linha 4: Criei um ponteiro auxiliar (aux) que aponta para o inicio da fila.
(É necessário criar esse ponteiro auxiliar para ele ser usado na desalocação da memória do nó removido)
Linhas 5 e 6: Fiz o ponteiro inicio apontar para o elemento da fila.
Linha 7: Verificando se não existem outros elementos na fila, pois se não tiver, o ponteiro inicio vai apontar pra null.
Linha 8: Se o ponteiro inicio apontar pra null, o ponteiro fim também deve apontar para null.
Linha 10: O campo tamanho é decrementado.
Linha 11: Desalocando a memória usada no nó removido.
Linha 12: O nó removido é retornado
*/