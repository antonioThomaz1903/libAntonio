#ifndef _LIBANTONIO_
#define _LIBANTONIO_

#include<stdlib.h>
#include<stdio.h>


struct Fila{
    void *dado;
    Fila *prox;
};

struct Pilha{
    void *dado;
    Pilha *prox;
};

void enfileirar(Fila *&fila, void *dado);
void desenfileirar(Fila *&fila);
void removerIndice(Fila *&fila, int pos);
Fila getIndice(Fila *fila, int pos);
void destruir(Fila *&fila);
void imprimirInt(Fila *fila);

//Bom dia
void empilhar(Pilha *&pilha, void *dado);
void desempilhar(Pilha *&pilha);
Pilha getIndice(Pilha *pilha, int pos);
void destruir(Pilha *&pilha);
void imprimirInt(Pilha *pilha);

#endif