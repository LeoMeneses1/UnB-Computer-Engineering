/*
 * Beecrowd - Problema 3342 - Keanu
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3342
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int n, total, cores;
	scanf("%d", &n);
	
	total = n*n;
	
	cores = total / 2;
	
	if(total % 2 == 0){
		printf("%d casas brancas e %d casas pretas\n", cores, cores);
	}else{
		printf("%d casas brancas e %d casas pretas\n", cores + 1, cores);
	}

	return 0;
}
