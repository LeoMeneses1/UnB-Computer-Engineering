/*
 * Beecrowd - Problema 3049 - Nota Cortada
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3049
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int b, t, soma;
	scanf("%d %d", &b, &t);
	
	soma = b + t;
	
	if(soma < 160){
		printf("2\n");
	}else{
		if(soma > 160){
			printf("1\n");
				
		}else{
			printf("0\n");
		}		
	}
	return 0;
}
