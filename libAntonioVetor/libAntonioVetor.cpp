#include<stdio.h>
#include<stdlib.h>
#include"libAntonioVetor.h"


void enfileirar(Fila *&fila, void *dado){
    Fila *novo = (Fila*)calloc(1, sizeof(Fila));
    novo->dado = dado;
    novo->prox = NULL;

    if(fila == NULL){
        fila = novo;
    }
    else{
        Fila *p = fila;
        for(; p->prox != NULL; p = p->prox);
        p->prox = novo;
    }
}

Fila desenfileirar(Fila *&fila){
    Fila *p = fila;
    Fila aux;
    fila = fila->prox;
    aux = *p;
    free(p);
    return aux;
}

Fila removerIndice(Fila *&fila, int pos){
    Fila *p = fila;
    Fila *q, aux;
    for(int i=0; i<pos; i++){
        q = p;
        p = p->prox;
    }
    q->prox = p->prox;
    aux = *p;
    free(p);
    return aux;
}

Fila getIndice(Fila *fila, int pos){
    Fila *p = fila;
    for(int i=0; i<pos; i++){
        p = p->prox;
    }
    return *p;
}

void destruir(Fila *&fila){
    while(fila != NULL){
        desenfileirar(fila);
    }
}

void imprimirInt(Fila *fila){
    Fila *p = fila;
    printf("\n");
    for(; p!=NULL; p=p->prox){
        printf("%d ", *(int*)p->dado);
    }
}

void empilhar(Pilha *&pilha, void *dado){
    Pilha *novo = (Pilha*)calloc(1, sizeof(Pilha));
    novo->dado = dado;
    novo->prox = NULL;

    if(pilha == NULL){
        pilha = novo;
    }
    else{
        novo->prox = pilha;
        pilha = novo;
    }
}

Pilha desempilhar(Pilha *&pilha){
    Pilha *p = pilha;
    Pilha aux;
    pilha = pilha->prox;
    aux = *p;
    free(p);
    return aux;
}

Pilha removerIndice(Pilha *pilha, int pos){
    Pilha *p = pilha;
    Pilha *q, aux;
    for(int i=0; i<pos; i++){
        q = p;
        p = p->prox;
    }
    q->prox = p->prox;
    aux = *p;
    free(p);
    return aux;
}

Pilha getIndice(Pilha *pilha, int pos){
    Pilha *p = pilha;
    for(int i=0; i<pos; i++){
        p = p->prox;
    }
    return *p;
}

void destruir(Pilha *&pilha){
    while(pilha!=NULL){
        desempilhar(pilha);
    }
}

void imprimirInt(Pilha *pilha){
    Pilha *p = pilha;
    printf("\n");
    for(; p!=NULL; p=p->prox){
        printf("%d ", *(int*)p->dado);
    }
}
