/*
 * Beecrowd - Problema 2780 - Basquete de Robos
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2780
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int D;
	scanf("%d",&D);
	
	if(D<=800){
		printf("1\n");
		
	}else if(D<=1400){
		printf("2\n");
	
	}else if(D<=2000){
		printf("3\n");
		
	}
	
	return 0; 
}
