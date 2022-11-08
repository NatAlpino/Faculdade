void liberar(struct Pilha* p) {
    assert(p != NULL);
    while(vazia(p) == false) {
       desempilhar(p); 
    }
    free(p);
}

/*
Na linha 2 faço a verificação se a pilha não está vazia.
Na linha 3 eu começo um laço de repetição com a condição de enquanto vazia for igual a false, a função desempilhar deve ser chamada.
Na linha 6 desaloquei a memória reservada para essa pilha.
*/