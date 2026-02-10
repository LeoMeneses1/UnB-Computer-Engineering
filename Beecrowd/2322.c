/*
 * Beecrowd - Problema 2322 - Peca Perdida
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2322
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,n,peca;
	int v[1001] = {0};
	scanf("%d",&n);
	
	for(i=0; i<n-1; i++){
		scanf("%d",&peca);
		v[peca] = 1;
	}
	
	for(i=1; i<=n; i++){
		if(v[i]==0){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
