/*
 * Beecrowd - Problema 2416 - Corrida
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2416
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int C, N, termino;
	scanf("%d %d",&C, &N);
	
	termino = C%N;
	
	printf("%d\n", termino);
	
	return 0;
}
