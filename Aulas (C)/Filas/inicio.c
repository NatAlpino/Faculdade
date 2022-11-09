int inicio(struct Fila* f) {
    assert(f != NULL);
    assert(f->inicio != NULL);
    return f->inicio->info;
}

/*
Linha 2: Conferindo se a fila não está vazia.
Linha 3: Conerindo se o inicio da fila não está vazio.
Linha 4: Retornando o valor do elemento do inicio da fila.
*/
