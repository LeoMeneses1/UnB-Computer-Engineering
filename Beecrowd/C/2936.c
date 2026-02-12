/*
 * Beecrowd - Problema 2936 - Quanta Mandioca
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2936
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int curupira, boitata, boto, mapin, lara, chica, total, curupiraT, boitataT, botoT, mapinT, laraT;
	scanf("%d %d %d %d %d", &curupira, &boitata, &boto, &mapin, &lara);
	
	curupiraT = 300 * curupira;
	boitataT = 1500 * boitata;
	botoT = 600 * boto;
	mapinT = 1000 * mapin;
	laraT = 150 * lara;
	chica = 225;
	
	total = curupiraT + boitataT + botoT + mapinT + laraT + chica;
	
	printf("%d\n", total);
	
	return 0;
}
