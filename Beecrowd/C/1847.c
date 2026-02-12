/*
 * Beecrowd - Problema 1847 - Bem-vindos e Bem-vindas ao Inverno
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1847
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && c>=b){
		printf(":)\n");
		
	}else if(a<b && b>=c){
		printf(":(\n");
		
	}else if(a<b && b<c){
		if(b-a>c-b){
			printf(":(\n");
		
		}else if(b-a<=c-b){
			printf(":)\n");
			
		}
		
	}else if(a>b && b>c){
		if(a-b>b-c){
			printf(":)\n");
			
		}else if(a-b<=b-c){
			printf(":(\n");
			
		}
		
	}else if(a==b && c>b){
		printf(":)\n");
		
	}else if(a==b && b>=c){
		printf(":(\n");
		
	}
		
	return 0;
}
