/*
 * Beecrowd - Problema 1172 - Substituindo em Vetor I
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1172
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i;
	int x[10] = {0};
	
	for(i=0; i<10; i++){
		scanf("%d",&x[i]);
		
	}
	
	for(i=0; i<10; i++){
		if(x[i]<=0){
			printf("X[%d] = 1\n",i);
			
		}else{
			printf("X[%d] = %d\n",i,x[i]);
			
		}
		
	}
	
	return 0;
}
