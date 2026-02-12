/*
 * Beecrowd - Problema 3145 - Uma Jornada Inesperada
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3145
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	double N,X,D;
	scanf("%lf %lf", &N, &X);

	D = X/(N+2);
	
	printf("%.2lf\n",D);
	return 0;
}
