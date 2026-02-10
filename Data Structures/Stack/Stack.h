#ifndef PILHA_H
#define PILHA_H

typedef struct{
	int numero;
	struct No *prox;
}No;

typedef struct{
	No *inicio;
	int tamanho;
}Pilha;

Pilha* stack();

void push(Pilha *p, int item);

int pop(Pilha *p);

int peek(Pilha *p);

void isEmpty(Pilha *p);

int size(Pilha *p);

void imprimeStack(Pilha *p);

#endif
