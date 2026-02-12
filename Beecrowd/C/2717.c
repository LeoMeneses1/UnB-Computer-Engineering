/*
 * Beecrowd - Problema 2717 - Tempo de Duende
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2717
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int faltam_n, a,b, total;
	scanf("%d %d %d", &faltam_n, &a, &b);
	
	if(faltam_n >= a+b){
		printf("Farei hoje!\n");
	}else{
		printf("Deixa para amanha!\n");
	}
	
	return 0;
}
