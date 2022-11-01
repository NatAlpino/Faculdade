int remover(struct ListaDupla* li, int pos) {
   assert(vazia(li) == false);
   assert(pos >= 0 && pos < li->tamanho);
   struct No* aux = NULL;

   if (pos == 0) {
       aux = li->inicio; 
       li->inicio = aux->proximo;
       if (li->inicio == NULL) {
           li->fim = NULL;
       } else {
           li->inicio->anterior = NULL;        
       }
   } else if (pos == li->tamanho - 1) {
       aux = li->fim;
       li->fim = aux->anterior;
       li->fim->proximo = NULL;        
   } else {
       struct No* ant = NULL;
       aux = li->inicio;
   
       for(int i = 0; i < pos; i++) {
            ant = aux;
            aux = aux->proximo;
       }

       ant->proximo = aux->proximo;
       aux->proximo->anterior = ant;    
    }

   int elemento = aux->info;
   li->tamanho--;
   free(aux);
   return elemento;
}

/*
Caso seja uma remoção no início da lista, além do que já fizemos para a lista simplesmente ligada, devemos atualizar o ponteiro “anterior” do nó 
que estava na segunda posição da lista, bem como do ponteiro “fim”, da lista (caso a lista tenha ficado vazia) – linhas 8 a 13. 

Também criamos uma sequência de instruções para o caso de a remoção ocorrer no final da lista (linhas 15 a 17). Nesse caso, devemos atualizar 
o ponteiro “fim” da lista (linha 16), bem como o ponteiro “próximo” do penúltimo nó da lista, fazendo-o apontar para NULL, pois ele passará a 
ser o último nó da lista (linha 17). 

Por último, das linhas 19 a 28, temos o caso de remoção para qualquer elemento entre o primeiro e o último elemento.

As diferenças para a função remover da lista simplesmente ligada são que, agora, precisamos atualizar o ponteiro “anterior” do elemento 
subsequente ao que será sendo removido (linha 28).

A sequência de comandos responsável por liberar espaço da memória e retornar a informação contida no elemento removido (linhas 31 a 34) 
mantém-se a mesma da função da lista simplesmente ligada.
*/