/*
 * Beecrowd - Problema 1259 - Pares e Impares
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1259
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <stdlib.h>

int prioridade(int a, int b){
	if(a % 2 == 0 && b % 2 != 0) return 1;
	else if(a%2 != 0 && b%2 == 0) return 0;
	else if(a%2 == 0 && b%2 == 0){
		if(a < b) return 1;
		else return 0;
	}else if(a%2 != 0 && b%2 != 0){
		if(a < b) return 0;
		else return 1;
	}
	return 0;
}

void merge(int n, int v[n], int inicio, int meio, int fim){
	int tamanho = fim - inicio + 1;
	int aux[tamanho];
	int i = inicio;
	int j = meio + 1;
	int k = 0;
	while(i<=meio && j<=fim){
		if(prioridade(v[i], v[j])){
			aux[k++] = v[i++];
		}else{
			aux[k++] = v[j++];
		}
	}
	while(i <= meio) aux[k++] = v[i++];
	while(j <= fim) aux[k++] = v[j++];
	for(i=inicio, k=0; k<tamanho; i++, k++){
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

void imprimeVetor(int n, int v[n]){
	int i = 0;
	for(; i<n; i++){
		printf("%d\n",v[i]);
	}
}

int main(){
	int i,n;
	scanf("%d",&n);
	int v[n];
	for(i=0; i<n; i++){
		scanf("%d",&v[i]);
	}
	mergeSort(n,v,0,n-1);
	imprimeVetor(n,v);
	return 0;
}

