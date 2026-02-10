#include "arvore2.h"

int main(){
	No *raiz = NULL;
	raiz = insere(raiz, 50);
	raiz = insere(raiz, 25);
	raiz = insere(raiz, 80);
	raiz = insere(raiz, 75);
	raiz = insere(raiz, 90);
	raiz = insere(raiz, 2);
	raiz = insere(raiz, 42);
	raiz = insere(raiz, 7);
	raiz = insere(raiz, 101);
	raiz = insere(raiz, 22);
	raiz = insere(raiz, 98);
	raiz = insere(raiz, 45);
	raiz = insere(raiz, 66);
	raiz = insere(raiz, 33);
	raiz = insere(raiz, 86);
	raiz = insere(raiz, 100);
	raiz = insere(raiz, 6);
	raiz = insere(raiz, 1);
	
	printf("Veja se um numero x existe:");
	int x;
	scanf("%d",&x);
	if(busca(raiz,x)) printf("O numero %d existe\n", x);
	else printf("O numero nao existe\n");
	
	printf("----- em ordem ------\n");
	ordem(raiz);
	printf("\n----- pre ordem ------\n");
	preOrdem(raiz);
	printf("\n ------ pos ordem -----\n");
	posOrdem(raiz);	
	
	raiz = remocao(raiz, 1);
	printf("\n apos remover o 1\n");
	printf("\n----- em ordem ------\n");
	ordem(raiz);
	printf("\n----- pre ordem ------\n");
	preOrdem(raiz);
	printf("\n ------ pos ordem -----\n");
	posOrdem(raiz);	
	
	raiz = remocao(raiz, 98);
	printf("\n apos remover o 98\n");
	printf("\n----- em ordem ------\n");
	ordem(raiz);
	printf("\n----- pre ordem ------\n");
	preOrdem(raiz);
	printf("\n ------ pos ordem -----\n");
	posOrdem(raiz);
	
	raiz = remocao(raiz, 50);
	printf("\n apos remover o 50\n");
	printf("\n----- em ordem ------\n");
	ordem(raiz);
	printf("\n----- pre ordem ------\n");
	preOrdem(raiz);
	printf("\n ------ pos ordem -----\n");
	posOrdem(raiz);
	return 0;
}
