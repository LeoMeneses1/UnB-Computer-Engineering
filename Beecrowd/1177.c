/*
 * Beecrowd - Problema 1177 - Preenchimento de Vetor II
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1177
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int v,i;
	int n[10] = {0};
	scanf("%d",&v);
	
	for(i=0; i<10; i++){
		printf("N[%d] = %d\n",i,v);
		v = v*2;
	}
	return 0;
}
