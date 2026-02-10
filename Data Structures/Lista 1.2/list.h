#ifndef LISTA_H
#define LISTA_H

typedef struct{
	int dado;
	struct No *prox;
	
}No;

typedef struct{
	No *inicio;
	int tamanho;
	
}Lista;

Lista* criaLista();

void add(Lista *l, int item);

int removeItem(Lista *l, int item);

int search(Lista *l, int item);

int isEmpty(Lista *l);

void append(Lista *l, int item);

int indice(Lista *l, int item);

int insert(Lista *l, int pos, int item);

void imprimeLista(Lista *l);

int liberaLista(Lista *l);

#endif
