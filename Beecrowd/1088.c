/*
 * Beecrowd - Problema 1088 - Bolhas e Baldes
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1088
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <stdlib.h>

long long comparacoes = 0;

void merge(int n, int v[n], int inicio, int meio, int fim){
	int tamanho = fim - inicio + 1; 
	int aux[tamanho];
	int i = inicio;
	int j = meio + 1;
	int k = 0;
	while(i <= meio && j <= fim){
		if(v[i] < v[j]) aux[k++] = v[i++];
		else{
			aux[k++] = v[j++];
			comparacoes += meio-i+1;
		}
	}
	while(i <= meio) aux[k++] = v[i++];
    while(j <= fim) aux[k++] = v[j++];
    for(i=inicio, k=0; k<tamanho; k++,i++){
    	v[i] = aux[k];
	}
}

void mergeSort(int n, int v[n], int inicio, int fim){
	if(inicio < fim){
		int meio = inicio + (fim - inicio) / 2;
		mergeSort(n,v,inicio,meio);
		mergeSort(n,v,meio+1,fim);
		merge(n,v,inicio,meio,fim);
	}
}

int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		if(n == 0) break;
		int v[n];
		comparacoes = 0;
		for(i=0; i<n; i++){
			scanf("%d",&v[i]);
		}
			mergeSort(n,v,0,n-1);
			if(comparacoes % 2 != 0) printf("Marcelo\n");
			else printf("Carlos\n");
	}
	return 0;
}

