/*
 * Beecrowd - Problema 1013 - O Maior
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1013
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int a,b,c, MAIOR_AB, MAIOR_ABC;
	scanf("%d %d %d", &a, &b, &c);
	
	MAIOR_AB = (a+b+abs(a-b))/2;
	MAIOR_ABC = (MAIOR_AB+c+abs(MAIOR_AB - c))/2;
	
	printf("%d eh o maior\n", MAIOR_ABC);
	
	return 0;
}
