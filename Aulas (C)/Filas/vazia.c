bool vazia(struct Fila* f) {
    assert(f != NULL);        
    return (f->inicio == NULL);    
}

/*
Na linha 3, a função “vazia” retorna o resultado da avaliação da expressão f->inicio == NULL. 
Essa é uma forma simplificada de escrever o código a seguir:
*/

if (f->inicio == NULL) {
    return true;
} else {
    return false
}
