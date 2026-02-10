/*
 * Beecrowd - Problema 3432 - Interceptando Informacoes
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3432
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,i,b,nove;
	
	n = 8;
	nove = 0;
	
	for(i=0; i<n; i++){
		scanf("%d",&b);
		if(b==9){
			nove = 1;
			
		}
		
	}
	
	if(nove==0){
		printf("S\n");
		
	}else{
		printf("F\n");
		
	}
	
	return 0;
}
