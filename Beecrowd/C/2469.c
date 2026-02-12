/*
 * Beecrowd - Problema 2469 - Notas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2469
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,i,maior,seq;
	int v[10000];
	int freq[10000] = {0};
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d",&v[i]);
		freq[v[i]]++;
		
	}
	
	maior = 0;
	seq = 0;
	for(i=0; i<10000; i++){
		if(freq[i]>=seq){
			seq = freq[i];
			maior = i;
		}
	}
	
	printf("%d\n",maior);
	return 0;
}
