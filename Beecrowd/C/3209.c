/*
 * Beecrowd - Problema 3209 - Tomada Eletricas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3209
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,tomadas,entradas,j;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&tomadas);
		int soma = 0;
		for(j=0; j<tomadas; j++){
			scanf("%d",&entradas);
			if(j == tomadas-1){
				soma += entradas;
			}else{
				soma += entradas - 1;
			}
		}
		printf("%d\n",soma);
	}
	return 0;
}

