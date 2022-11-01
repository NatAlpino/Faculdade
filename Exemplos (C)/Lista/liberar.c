void liberar(struct List* li) {
    while(vazia(li) == false) {
        remover(li, 0);
    }
    free(li)
}
