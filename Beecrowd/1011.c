/*
 * Beecrowd - Problema 1011 - Esfera
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1011
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	double raio, pi, volume;
	pi=3.14159;
	scanf("%lf", &raio);
	
	volume = 4.0/3 * pi * raio * raio * raio;
	
	printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}
