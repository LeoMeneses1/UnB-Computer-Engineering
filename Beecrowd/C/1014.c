/*
 * Beecrowd - Problema 1014 - Consumo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1014
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int x;
	double combustivel, media;
	
	scanf("%d %lf", &x, &combustivel);
	
	media = x/combustivel;
	
	printf("%.3lf km/l\n", media);
	
	return 0;
}
