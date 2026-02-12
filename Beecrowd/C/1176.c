/*
 * Beecrowd - Problema 1176 - Fibonacci em Vetor
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1176
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	long long int i,t,n,v[61];
	scanf("%lld",&t);
	
	v[0] = 0;
	v[1] = 1;
	
	for(i=2; i<61; i++){
		v[i] = v[i-1] + v[i-2];
			
	}
	for(i=0; i<t; i++){
		scanf("%lld",&n);
		
		printf("Fib(%lld) = %lld\n",n,v[n]);
		
	}
	
	return 0;
}
