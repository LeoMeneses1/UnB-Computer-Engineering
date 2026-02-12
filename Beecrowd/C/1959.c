/*
 * Beecrowd - Problema 1959 - Poligonos Regulares Simples
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1959
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	long long int N,L,P;
	scanf("%lld %lld", &N, &L);
	
	P = N*L;
	
	printf("%lld\n", P);
		
	return 0;
}
