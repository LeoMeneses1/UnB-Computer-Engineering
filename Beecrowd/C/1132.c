/*
 * Beecrowd - Problema 1132 - Multiplos de 13
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1132
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
	int x,y,X,Y,soma;
	scanf("%d %d",&x,&y);
	
	X = min(x,y);
	Y = max(x,y);
	soma = 0;
	
	for(X=X; X<=Y; X++){
		if(X%13!=0){
			soma+=X;
			
		}
		
	}
	
	printf("%d",soma);
	
	return 0;
}
