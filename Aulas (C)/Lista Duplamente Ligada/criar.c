struct ListaDupla* criar() {
    struct ListaDupla* nova_lista = (struct ListaDupla*) malloc(sizeof(struct ListaDupla));
    if (nova_lista != NULL) {
        nova_lista->inicio = NULL
        nova_lista->fim = NULL;
        nova_lista->tamanho = 0;
    }

    return nova_lista;
}

//A diferença dessa lista dupla para uma lista normal é que nessa eu precisei inicializar o ponteiro "fim".
