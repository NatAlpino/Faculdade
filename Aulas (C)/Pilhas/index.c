#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct No {
    int info;
    struct No* proximo;
};

struct Pilha {
    struct No* topo;
    int tamanho;
};

struct Pilha* criar() {
    struct Pilha* nova_pilha = (struct Pilha*) malloc(sizeof(struct Pilha));
    if (nova_pilha != NULL) {
        nova_pilha->topo = NULL;
        nova_pilha->tamanho = 0;
    }
    return nova_pilha;
}

void empilhar(struct Pilha* p, int item) {
    assert(p != NULL);    
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    if (novo_no != NULL) {
        novo_no->info = item;
        novo_no->proximo = p->topo;
        p->topo = novo_no;
        p->tamanho++;
    }
}

int desempilhar(struct Pilha* p) {
    assert(p != NULL);    
    assert(p->topo != NULL);
    struct No* aux = p->topo;
    int elemento = aux->info;
    p->topo = aux->proximo;
    p->tamanho--; 
    free(aux);
    return elemento;    
}

int main() {
    struct Pilha* minha_pilha = criar();
    empilhar(minha_pilha, 1);
    empilhar(minha_pilha, 2);
    empilhar(minha_pilha, 3);

    printf("%d ", desempilhar(minha_pilha));
    printf("%d ", desempilhar(minha_pilha));
    printf("%d ", desempilhar(minha_pilha));

    return 0;
}

/*
Inicialmente, cria-se uma pilha vazia (linha 2). 
Logo após, os elementos 1, 2 e 3 são empilhados, nessa ordem, por meio da função “empilhar” (linhas 3 a 5). 
Por fim, todos os elementos da pilha são desempilhados e impressos na tela (linhas 7 a 9).
*/