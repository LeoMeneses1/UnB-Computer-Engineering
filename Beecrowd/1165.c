/*
 * Beecrowd - Problema 1165 - Numero Primo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1165
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int primo(int x){
	int i;
	
	if(x<=1){
		return;
	}
	if(x==2){
		return 1;
	}
	if(x%2==0){
		return;
	}else{
		for(i=3; i<=x; i+=2){
			if(x%i==0){
				return;
			}else{
				return 1;
			}
			
		}
		
	}	
	
}

int main(){
	int n,x,i;
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d",&x);
		
		if(primo(x)){
			printf("%d eh primo\n",x);
			
		}else{
			printf("%d nao eh primo\n",x);
			
		}
		
	}
	
	return 0;
}
