void enfileirar(struct Fila* f, int item) {
    assert(f != NULL);    
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    if (novo_no != NULL) {
        novo_no->info = item;
        novo_no->proximo = NULL;

	if (f->fim != NULL) {
            f->fim->proximo = novo_no;   
        } else {        
            f->inicio = novo_no;
        }
        f->fim = novo_no;
        f->tamanho++;
    }
}

/*
Linha 2: Conferindo se o ponteiro passado por parâmetro não é NULO.
Linha 3: Criei um novo nó dinamicamente que foi armazenado no endereço de memória da variável "novo_no".
Linha 4: verifiquei se o novo_no foi alocado corretamente na mória do computador.
Linhas 5 até 15: inseri um novo nó no final da fila:
    Linhas 5 e 6: os campos info e proximo são iniciados.
    Linha 8: Conferindo se o o fim da fila é igual a NULL.
    Linha 9: Caso o ponteiro fim seja diferente de null, significa que a fila não está vazia, então preciso atualizar o ponteiro proximo do ultimo nó para que ele aponte para o novo_no.
    Linha 11: No caso da fila vazia atualizo também o ponteiro do inicio da fila para que ele aponte para o novo_no.
    Linhas 13 e 14: ponteiro fim e o campo tamanho são atualizados.
*/