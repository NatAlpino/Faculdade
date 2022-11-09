void liberar(struct Fila* f) {
    assert(f != NULL);     
    while(f->inicio != NULL) {
        desenfileirar(f); 
    }
    free(f);    
}

/*
Linha 2: Conferindo se a fila não está vazia.
Linha 3: Enquanto inicio da fila não for igual a null, a função desenfileirar vai ser chamada.
*/