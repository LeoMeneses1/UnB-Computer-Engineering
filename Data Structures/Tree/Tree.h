#ifndef ARVORE_H
#define ARVORE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int dado;
	struct No *esquerda;
	struct No *direita;
}No;

No* criaNo(int valor);

No* insere(No *no, int valor);

int busca(No *no, int valor);

No* remocao(No *no, int valor);

void buscaLargura(No *no);

void ordem(No *no);

void posOrdem(No *no);

void preOrdem(No *no);

#endif
