#include "arvore2.h"

No* criaNo(int valor){
	No *novo = malloc(sizeof(No));
	if(novo != NULL){
		novo->dado = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
	}
	return novo;
}

No* insere(No *no, int valor){
	if(no == NULL){
		return criaNo(valor);
	}else{
		if(valor > no->dado){
			no->direita = insere(no->direita, valor);
		}else{
			no->esquerda = insere(no->esquerda, valor);
		}
	}
	return no;
}

int busca(No *no, int valor){
	if(no == NULL) return 0;
	if(valor == no->dado){
		return 1;
	}else if(valor > no->dado){
		return busca(no->direita, valor);
	}else{
		return busca(no->esquerda, valor);
	} 
}

No* remocao(No *no, int valor){
	if(no == NULL) return NULL;
	if(valor == no->dado){
		if(no->esquerda == NULL && no->direita == NULL){
			free(no);
			return NULL;
			
		}else if(no->direita == NULL && no->esquerda != NULL){
			No *aux = no->esquerda;
			free(no);
			return aux;
			
		}else if(no->direita != NULL && no->esquerda == NULL){
			No *aux = no->direita;
			free(no);
			return aux;
			
		}else{
			No *aux = no->esquerda;
			while(aux->direita != NULL){
				aux = aux->direita;
			}
			no->dado = aux->dado;
			no->esquerda = remocao(no->esquerda, aux->dado);
			
		}
	}else if(valor > no->dado){
		no->direita = remocao(no->direita, valor);
	}else{
		no->esquerda = remocao(no->esquerda, valor);
	}
	return no;
}

typedef struct No2{
	No *no;
	struct No2 *prox;
}No2;

typedef struct{
	No2 *inicio;
}Fila;

Fila* criaFila(){
	Fila *f = malloc(sizeof(Fila));
	if(f != NULL){
		f->inicio = NULL;
	}
	return f;
}

void insereFila(Fila *f, No* novo){
	if(f == NULL) return;
	No2 *novo2 = malloc(sizeof(No2));
	if(novo2 == NULL) return;
	novo2->no = novo;
	novo2->prox = NULL;
	if(f->inicio == NULL){
		f->inicio = novo2;
	}else{
		No2 *aux = f->inicio;
		while(aux->prox != NULL){
			aux = aux->prox;
		}
		aux->prox = novo2;
	}
}

No* removeFila(Fila *f){
	if(f == NULL) return;
	No2 *aux = f->inicio;
	No *temp = aux->no;
	f->inicio = f->inicio->prox;
	free(aux);
	return temp;
}

int filaVazia(Fila *f){
	if(f == NULL || f->inicio == NULL) return 0;
	return 1;
}

void buscaLargura(No *no){
	if(no == NULL) return ;
	Fila *f = criaFila();
	if(f == NULL) return;
	insereFila(f, no);
	while(filaVazia(f)){
		No *atual = removeFila(f);
		printf("%d ",atual->dado);
		if(atual->esquerda != NULL) insereFila(f, atual->esquerda);
		if(atual->direita != NULL) insereFila(f,atual->direita);
	}
	free(f);
}

void ordem(No *no){
	if(no != NULL){
		ordem(no->esquerda);
		printf("%d ",no->dado);
		ordem(no->direita);
	}
}

void preOrdem(No *no){
	if(no != NULL){
		printf("%d ",no->dado);
		preOrdem(no->esquerda);
		preOrdem(no->direita);
	}
}

void posOrdem(No *no){
	if(no != NULL){
		posOrdem(no->esquerda);
		posOrdem(no->direita);
		printf("%d ",no->dado);
	}
}
