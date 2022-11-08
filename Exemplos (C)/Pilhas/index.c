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
    int num;
     
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num);
        empilhar(minha_pilha, num);
    }   
 
    for(int i = 0; i < 5; i++) {
        printf("%d ", desempilhar(minha_pilha));
    }   

    return 0;
}

/*
Exemplificando
A seguir temos um exemplo de algoritmos com ED pilha que seja capaz de imprimir uma sequência de 5 (cinco) números 
informados pelo usuário na ordem inversa da entrada, ou seja, de trás para frente. 

Por exemplo, dada a sequência [1, 2, 4, 0, 3], seu programa deve imprimir [3, 0, 4, 2, 1].

Uma possível solução para esse problema encontra-se a seguir. 

Inicialmente, criamos um laço for para ler os dados de entrada, adicionando-os em uma pilha. 
Depois, desempilhamos os elementos da pilha, imprimindo-os na tela. A própria característica da ED pilha fará com que 
os elementos sejam impressos na ordem inversa.
*/