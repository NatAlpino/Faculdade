int obter(struct ListaDupla* li, int pos) {
   assert(li != NULL);
   assert(pos >= 0 && pos < li->tamanho);
   struct No* aux;

   if (pos == 0) {
      aux = li->inicio;
   } else if (pos == li->tamanho - 1) {
      aux = li->fim;
   } else {
      aux = li->inicio;
      for(int i = 0; i < pos; i++) {
         aux = aux->proximo;
      }
   }
   return aux->info; 
}

/*
A diferença dessa função é que, agora, temos condições de acessar a última posição da lista sem ter que percorrê-la, 
como era feito na lista simplesmente ligada. Isso é feito acessando diretamente o ponteiro “fim” na lista, como mostra a linha 9.
*/