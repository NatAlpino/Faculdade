bool vazia(struct ListaDupla* li) {
    assert(li != NULL);
    if (li->inicio == NULL) {
        return true;
    } else {
        return false;
    }
}

//A função para verificar se a lista está vazia é a mesma para uma lista simplesmente ligada quanto para uma lista duplate ligada.