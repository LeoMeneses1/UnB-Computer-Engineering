/*
 * Beecrowd - Problema 1963 - O Filme
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1963
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	double A, B, porcetagem;
	scanf("%lf %lf", &A, &B);
	
	porcetagem = ((B - A) / A) * 100;
	
	printf("%.2lf%%\n", porcetagem);
	
	return 0;
}
