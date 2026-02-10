/*
 * Beecrowd - Problema 2950 - As Duas Torres
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2950
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	double N, X, Y, ICM;
	scanf("%lf %lf %lf", &N, &X, &Y);
	
	ICM = N/(X+Y);
	
	printf("%.2lf\n",ICM); 
	
	return 0; 
}
