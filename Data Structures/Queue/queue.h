#ifndef LISTA_H
#define LISTA_H

typedef struct{
	int dado;
	struct No *prox;
	
}No;

typedef struct{
	No *inicio;
	int tamanho;
	
}Fila;

Fila* queue();

void enqueue(Fila *f, int item);

int dequeue(Fila *f);

int front(Fila *f);

int isEmpty(Fila *f);

int size(Fila *f);

void imprimeFila(Fila *f);

#endif
