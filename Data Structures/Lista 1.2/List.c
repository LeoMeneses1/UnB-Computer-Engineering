#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

Lista* criaLista(){
	Lista *l = malloc(sizeof(Lista));		//cria um espaço na memória para a struct Lista;
	if(l == NULL){				//Se for null, a lista não existe.
		return NULL;
		
	}
	
	l->tamanho = 0;				//se a lista foi criada, inicio tamanho = 0, pq não há nenhum item na lista;
	l->inicio = NULL;			//também ininio o inicio como NULL, pois embora a lista exista, ela não tem nada ainda.
	return l;
}

void add(Lista *l, int item){
	if(l == NULL){					//se a lista for null, quer dizer que ela não existe, logo não há como adicionar;
		return;
		
	}
	No *novo = malloc(sizeof(No));		
	if(novo == NULL){
		return;
	}									//crio um espaço na memória para a struct No;
	novo->dado = item;					//aqui eu adiciono o item para o dado da struct No;
	novo->prox = l->inicio;				//faço com que o proximo nó seja o início declarado antes;
	l->inicio = novo;					//e o novo início vai ser o item que foi colocado agora;
	l->tamanho++;						//e adiciono +1 para cada item adicionado;
	
}

int removeItem(Lista *l, int item){
	if(l == NULL || l->tamanho == 0){			//Se a lista não existe ou a lista nãoi tem nada, não há como tirar nada;
		return 0;						
		
	}											//Crio duas variáveis auxiliares para me ajudar a percorrer os nós e
	No *atual = l->inicio;						//achar o item a ser retirado. No caso, o atual vai apontar pro inicio da lista,
	No *anterior = NULL;						//enquanto o anterior vai inicialmente apontar para o NULL;
	while(atual!=NULL && atual->dado != item){	//Enquanto o atual não chegar até o último nó+1 e eu não achar o item a remov.
		anterior = atual;						//o anterior vai virar o atual e o atual vai virar o próximo, dessa forma.
		atual = atual->prox;					//eu vou percorrendo os nós até achar o item a ser retirado;
		
	}
	if(atual == NULL){		//se o atual for igual NULL, quer dizer que eu percorri todos os nós e não achei o item,
		return 0;			//o que indica que ele não existe;
		
	}
	if(anterior == NULL){
		l->inicio = atual->prox; //se o anterior for = NULL, quer dizer que o item a ser retirado é o primeiro nó,
		free(atual);			 //logo eu faço com que a lista comece pelo segundo nó e apago o primeiro;
		
	}else{
		anterior->prox = atual->prox; //se não, eu vou fazer com que o anterior que aponta pro prox, que é o atual, apontar
		free(atual);				  //para o próximo dps do atual, ou seja, eu vou pular o item a ser excluido e excluir ele; 	
		
	}
	l->tamanho--;
	return 1;
}

int search(Lista *l, int item){
	if(l == NULL){
		return 0;
		
	}
	No *aux = l->inicio;						
	while(aux != NULL && aux->dado != item){  //enquanto aux != de null e o item, eu vou percorrer até achar;
		aux = aux->prox;
		
	}
	if(aux == NULL){	//se o aux = null quer dizer que eu rodei todos os nós e não achei o item
		return 0;
		
	}else{
		return 1;		//se não for null foi pq achei.
		
	}
	
}

int isEmpty(Lista *l){
	if(l == NULL || l->tamanho == 0){ //aqui eu vou ver se a lista estiver vazia ou o tamanho dela ser igual a zero.
		return 1;					  //se sim, eu retorno 1 (verdadeiro);
		
	}else{
		return 0;
		
	}
	
}

void append(Lista *l, int item){
	if(l == NULL){
		return;
		
	}
	
	No *novo = malloc(sizeof(No));  //aqui a lógica é parecida com a add, vamos alocar um novo espaço na memória
	if(novo == NULL){
		return;
		
	}
	novo->dado = item;	
	novo->prox = NULL;		//aqui ao invés de fazer o novo apontar pro inicio, faço com que ele aponte pro nada,
							//já que vamos adicionar o item no final da lista;
	if(l->inicio == NULL){
		l->inicio = novo;  //verifico se não há nenhum item na lista, se não tiver eu coloco o novo;
		
	}else{
		No *aux = l->inicio;	//crio um No auxiliar para percorrer até o fim da lista;
		while(aux->prox != NULL){		
			aux = aux->prox;	
			
		}
		aux->prox = novo;   	//quando eu chegar, acrescento o item;
		
	}
	l->tamanho++;
	
}

int indice(Lista *l, int item){
	if(l == NULL){
		return -1;
		
	}
	int posicao = 0;            //crio uma variável que vai ser o indice;
	No *aux = l->inicio;
	
	while(aux != NULL && aux->dado != item){ //vou percorrer a lista, até chegar no item que eu quero;
		aux = aux->prox;
		posicao++;							//aqui eu incremento a posicao pra coincidir com o indice que estamos procurando;
	}
	if(aux == NULL){
		return -1;				//se aux==NULL quer dizer que percorrir a lista toda e não achei o indice;
		
	}
	
	return posicao;
	
}

int insert(Lista *l, int pos, int item){
	if(l == NULL || pos < 0 || pos > l->tamanho){
		return 0;
		
	}
	No *novo = malloc(sizeof(No));  //mesmo processo do add e append
	if(novo == NULL){
		return 0;
		
	}
	
	novo->dado = item;
	if(pos == 0){
		novo->prox = l->inicio;		//se eu quiser botar no inicio da lista, eu faco que nem o add;
		l->inicio = novo;
		
	}else{
		No *anterior = l->inicio;  //crio uma variavel auxiliadora q vai andar pela lista até achar a posicao que
		int i; 
		for(i=0; i<pos-1; i++){	//que queremos colocar, ou melhor, uma posição antes;
			anterior = anterior->prox;
			
		}
		novo->prox = anterior->prox;  //aqui eu conecto o novo item com o item da frente;
		anterior->prox = novo;		  //aqui eu conecto o novo item com o item de trás;
		
	}
	
	l->tamanho++;
	return 1;
}

void imprimeLista(Lista *l){
	if(l == NULL || l->tamanho == 0){
		printf("A lista esta vazia\n");
		return;
		
	}
	No *aux = l->inicio;
	printf("Lista: [");
	while(aux != NULL){
		printf("%d ",aux->dado);
		aux = aux->prox;
		
	}
	printf("]\n");
}

int liberaLista(Lista *l){
	if(l == NULL){
		return 0;
		
	}
	No *aux = l->inicio;
	int contador = 0;
	while(aux != NULL){
		No *temp = aux;
		aux = aux->prox;
		free(temp);
		contador++;
	}
	free(l);
	return contador;
	
}
