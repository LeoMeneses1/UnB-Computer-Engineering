/*
 * Beecrowd - Problema 1153 - Fatorial Simples
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1153
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

long long fatorial(long long n){
	if(n<=1){
		return 1;
	}
	return n*fatorial(n-1);
}

int main(){
	long long n;
	scanf("%lld",&n);
	
	printf("%lld\n",fatorial(n));
	
	return 0;
}
