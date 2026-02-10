/*
 * Beecrowd - Problema 1178 - Preenchimento de Vetor III
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1178
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int t,i;
	int n[1000] = {0};
	scanf("%d",&t);

	for(i=1; i<1000; i++){
		n[i] = i%t;
	}
	
	for(i=0; i<1000; i++){
		printf("N[%d] = %d\n",i,n[i]);
		
	}
	
	return 0;
}
