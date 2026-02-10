/*
 * Beecrowd - Problema 1164 - Numero Perfeito
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1164
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int perfeito(int x){
	int i,soma;
	soma = 0;
	
	for(i=1; i<x; i++){
		if(x%i==0){
			soma+=i;	
		}
		
	}
	
	if(soma!=x){
		return 0;
	}else{			
		return 1;
	}
}

int main(){
	int n,x,i;
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d",&x);
		
		if(perfeito(x)){
			printf("%d eh perfeito\n",x);
			
		}else{
			printf("%d nao eh perfeito\n",x);
			
		}
		
	}
	
	return 0;
}
