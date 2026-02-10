/*
 * Beecrowd - Problema 2339 - Avioes de Papel
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2339
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int c,p,f;
	scanf("%d %d %d",&c,&p,&f);
	
	if(c*f<=p){
		printf("S\n");
		
	}else{
		printf("N\n");
		
	}
	
	return 0;
}
