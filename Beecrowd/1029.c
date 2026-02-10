/*
 * Beecrowd - Problema 1029 - Fibonacci, quantas chamadas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1029
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>


int chamadas[40];
long long calls[40];
long long fib(int n, int chamadas[40]){
	long long resposta;
	
	if(n==0){
		calls[n] = 1;
		return 0;
		
	}
	if(n==1){
		calls[n] = 1;
		return 1;
		
	}
	if(chamadas[n]!=-1){
		return chamadas[n];
	}
	
	resposta = fib(n-1,chamadas) + fib(n-2,chamadas);
	chamadas[n] = resposta;
	calls[n] = calls[n-1] + calls[n-2]+1;
	return resposta;
	
}

int main(){
	int n,x,i;
	long long solve;
	scanf("%d",&n);
	
	for(i=0; i<=40; i++){
		chamadas[i] = -1;
		calls[i] = -1;
		
	}
	
	for(i=0; i<n; i++){
		scanf("%d",&x);
		solve = fib(x,chamadas);
		printf("fib(%d) = %lld calls = %lld\n",x,calls[x]-1,solve);
	}
	
	return 0;
}
