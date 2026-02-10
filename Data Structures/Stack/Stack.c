#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

Pilha* stack(){
	Pilha *p = malloc(sizeof(Pilha));
	if(p == NULL){
		return NULL;
	}
	p->tamanho = 0;
	p->inicio = NULL;
	return p;
}

void push(Pilha *p, int item){
	if(p == NULL){
		return;
	}	
	No *novo = malloc(sizeof(No));
	if(novo == NULL){
		return;
	}
	novo->numero = item;
	novo->prox = (struct No*)p->inicio;
	p->inicio = (No*)novo;
	p->tamanho++;
}

int pop(Pilha *p){
	if(p == NULL || p->inicio == NULL || p->tamanho == 0){
		return 0;
	}
	No *aux = p->inicio;
	int valor = (No*)aux->numero;
	p->inicio = (No*)aux->prox;
	free(aux);
	p->tamanho--;
	return valor;
}

int peek(Pilha *p){
	if(p == NULL || p->inicio == NULL || p->tamanho == 0){
		return 0;
	}
	return p->inicio->numero;
}

void isEmpty(Pilha *p){  
	if(p == NULL || p->inicio == NULL || p->tamanho == 0){   //acabei misturando a isEmpty com a size kkkk
		printf("A pilha esta vazia :(\n");
	}else{
		printf("A pilha contem %d elementos\n",p->tamanho);
	}
}

void imprimePilha(Pilha *p){
	if(p == NULL) return;
	No *aux = (struct No*)p->inicio;
	while(aux != NULL){
		printf("%d ",aux->numero);
		aux = (No*)aux->prox;
	}
	printf("\n");
}
