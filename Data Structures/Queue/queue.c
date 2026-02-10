#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

Fila* queue(){
	Fila *f = malloc(sizeof(Fila));
	if(f == NULL){
		return NULL;
		
	}
	f->tamanho = 0;
	f->inicio = NULL;
	return f;
}

void enqueue(Fila *f, int item){
	if(f == NULL){
		return;
		
	}
	No *novo = malloc(sizeof(No));
	if(novo == NULL){
		return;
		
	}
	novo->dado = item;
	novo->prox = NULL;
	if(f->inicio == NULL){
		f->inicio = novo;
		
	}else{
	No *aux = f->inicio;
		while(aux->prox != NULL){
			aux = (No*)aux->prox;
		
		}
		aux->prox = (struct No*)novo;
	
	}
	f->tamanho++;
}

int dequeue(Fila *f){
	if(f == NULL || f->tamanho == 0){
		return -1;
		
	}
	No *aux = f->inicio;
	int valor = aux->dado;
	f->inicio = (No*)aux->prox;
	
	free(aux);
	f->tamanho--;
	
	return valor;
}

int front(Fila *f){
	if(f == NULL || f->tamanho == 0){
		return -1;
		
	}

	int valor = f->inicio->dado;
	return valor;
}

int isEmpty(Fila *f){
	if(f == NULL || f->tamanho == 0){
		return 1;
		
	}else{
		return 0;
		
	}
	
}

int size(Fila *f){
	if(f == NULL){
		return -1;
		
	}
	int elementos = f->tamanho;
	return elementos;
}

void imprimeFila(Fila *f){
	if(f == NULL || f->tamanho == 0){
		printf("A fila esta vazia\n");
		return;
		
	}
	No *aux = f->inicio;
	printf("[");
	while(aux != NULL){
		printf("%d ",aux->dado);	
		aux = (No*)aux->prox;
	}
	printf("]\n");
}


