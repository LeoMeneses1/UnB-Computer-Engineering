/*
 * Beecrowd - Problema 2234 - Cachorros-Quentes
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2234
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <math.h>

int	main(){
	double M,H,P;
	scanf("%lf %lf", &H, &P);
	
	M = (H/P);
	
	printf("%.2lf\n", M);
	
	return 0;
}
