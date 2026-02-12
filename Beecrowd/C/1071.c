/*
 * Beecrowd - Problema 1071 - Soma de Impares Consecutivos
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1071
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int maior(int a, int b){
	if(a>b){
		return a;
		
	}else{
		return b;
		
	}
	
}

int menor(int a, int b){
	if(a>b){
		return b;
		
	}else{
		return a;
		
	}
	
}

int main(){
	int x,y,i,soma;
	scanf("%d %d",&x,&y);
	
	x = maior(x,y);
	y = menor(x,y);
	soma=0;
	for(i=y+1; i>y&&i<x; i++){
		if(i%2!=0){
			soma+=i;
				
		}
		
	}
	
	printf("%d\n",soma);
	return 0;
}
