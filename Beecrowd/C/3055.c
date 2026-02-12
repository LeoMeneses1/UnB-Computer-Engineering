/*
 * Beecrowd - Problema 3055 - Nota Esquecida
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3055
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int prova1, prova2, media;
	scanf("%d %d", &prova1, &media);
	prova2 = 2*media-prova1;
	
	printf("%d\n",prova2);
	
	return 0;
}
