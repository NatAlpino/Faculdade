struct Fila* criar() {
    struct Fila* nova_fila = (struct Fila*) malloc(sizeof(struct Fila));
    if (nova_fila != NULL) {
        nova_fila->inicio = NULL;
        nova_fila->fim = NULL;
        nova_fila->tamanho = 0;
    }
    return nova_fila;
}

/*
Linha 2: instanciei dinamicamente uma variável do tipo struct (fila)
Linha 3: Testei se a memória foi alocada corretamente.
Linhas 4 e 5: Os campos início e fim devem apontar pra NULL.
Linha 6: O campo tamanho deve iniciar com valor 0.
Linha 8: Retornei o endereço da memória alocada para a variável do tipo Fila.
*/