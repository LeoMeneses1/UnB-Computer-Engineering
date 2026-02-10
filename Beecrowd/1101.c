/*
 * Beecrowd - Problema 1101 - Sequencia de Numeros e Soma
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1101
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int min(int a, int b){
	if(b>a){
		return a;
		
	}else{
		return b;
		
	}
	
}

int max(int a, int b){
	if(a>b){
		return a;
		
	}else{
		return b;
		
	}
	
}

int main(){
	int m,n,M,N,soma;
	while(scanf("%d %d",&m,&n)!=EOF){
		if(m<=0 || n<=0){
			break;
			
	}
		M = max(m,n);
		N = min(m,n);
		soma = 0;
		
	for(N=N; N<=M; N++){
		soma += N; 
		printf("%d ",N);
		
		}
		
		printf("Sum=%d\n",soma);
		
	}
	
	return 0;
}
