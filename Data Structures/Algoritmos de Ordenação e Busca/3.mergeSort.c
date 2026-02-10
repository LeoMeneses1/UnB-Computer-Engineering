#include <stdio.h>
#include <stdlib.h>

void merge(int n, int v[n], int inicio, int meio, int fim){
	int aux[n];      //esse vai ser o vetor temporario que vamos usar para colocar os vetores em ordem
	int i = inicio;  //esse vai ser o indice do primeiro vetor depois que separarmos;
	int j = meio+1;  //esse vai ser o indice do segundo vetor
	int k = 0;		 //e esse vai ser o indice de aux;
	
	//agora eu vou comecar a comparar os dois vetores divididos ate o fim de um dos dois e botar o menor no vetor aux
	while(i <= meio && j <= fim){
	//se o item i da primeira metade do vetor for maior que o j do segundo vetor eu coloco o v[j] no meu vetor aux
		if(v[i] > v[j]){
			aux[k] = v[j];
			k++; j++;
		}else{
	//se nao, eu faco o contrario
			aux[k] = v[i];
			k++; i++;
		}
	}
	
	//agora eu preencho com o que sobrou de uma das duas metades
	while(i <= meio){
		aux[k] = v[i]; 
		k++, i++;
	}
	while(j <= fim){
		aux[k] = v[j];
		k++; j++;
	}
	
	//por fim, com o vetor aux todo ordenado, eu passo para o vetor original;
	for(i=inicio, k=0; i<=fim; i++,k++){
		v[i] = aux[k];
	}
}

void mergeSort(int n, int v[n], int inicio, int fim){
	if(inicio < fim){
		int meio = (inicio + fim) / 2;
		mergeSort(n,v,inicio,meio);
		mergeSort(n,v,meio+1,fim);
		merge(n,v,inicio,meio,fim);
	}
}

void imprimeVetor(int n, int v[n]){
	int i = 0;
	for(; i<n; i++){
		if(i == n-1)
			printf("%d\n",v[i]);
		else
			printf("%d ",v[i]);
	}
}

int main(){
	int n,i,j;
	printf("De um tamanho de 1 a 100 para seu vetor:\n");
	scanf("%d",&n);
	int v[n];
	printf("Agora preencha seu vetor: ");
	for(i=0; i<n; i++){
		scanf("%d",&v[i]);
	}
	mergeSort(n,v,0,n-1);
	printf("\nesse eh seu vetor ordenado:\n");
	imprimeVetor(n,v);
	
	return 0;
}

