/*
 * Beecrowd - Problema 1017 - Gasto de Combustivel
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1017
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int horas, velocidade_m, kml;
	double distancia, litros;
	scanf("%d %d", &horas, &velocidade_m);
	
	kml = 12.0;
	
	distancia = horas*velocidade_m;
	litros = distancia/kml;
	
	printf("%.3lf\n", litros);
	
	return 0;
}
