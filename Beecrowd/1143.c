/*
 * Beecrowd - Problema 1143 - Quadrado e ao Cubo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1143
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		printf("%d %d %d",i,i*i,i*i*i);
		printf("\n");
	}
	
	return 0;
}
