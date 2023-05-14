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

//Adiciona um elemento ao final da fila
void enfileirar(Fila *&fila, void *dado);

//Remove o primeiro elemento da fila
Fila desenfileirar(Fila *&fila);

//Remove um elemento i da fila
Fila removerIndice(Fila *&fila, int pos);

//Retorna um elemento i da fila
Fila getIndice(Fila *fila, int pos);

//Destroi todos os elementos da fila
void destruir(Fila *&fila);

//Imprime a fila caso seus elementos sejam inteiros
void imprimirInt(Fila *fila);

//Adiciona um elemento no começo da pilha
void empilhar(Pilha *&pilha, void *dado);

//Remove o primeiro elemento da pilha
Pilha desempilhar(Pilha *&pilha);

//Remove um elemento i da pilha
Pilha removerIndice(Pilha *pilha, int pos);

//Retorna um elemento i da pilha
Pilha getIndice(Pilha *pilha, int pos);

//Destroi todos os elementos da pilha
void destruir(Pilha *&pilha);

//Imprime a pilha caso seus elementos sejam inteiros
void imprimirInt(Pilha *pilha);

void ordenar(Fila *&fila);

void ordenar(Pilha *&pilha);

#endif