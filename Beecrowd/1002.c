/*
 * Beecrowd - Problema 1002 - Area do Circulo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1002
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	double area, n, raio;
	n=3.14159;
	scanf("%lf", &raio);
	
	area = n * raio * raio;
	
	printf("A=%.4lf\n", area);
	
	return 0;
}
