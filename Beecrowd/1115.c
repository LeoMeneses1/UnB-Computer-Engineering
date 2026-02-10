/*
 * Beecrowd - Problema 1115 - Quadrante
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1115
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int x,y;
	while(scanf("%d %d",&x,&y)!=EOF){
		if(x==0 || y==0){
			break;
			
		}
		if(x>0 && y>0){
			printf("primeiro\n");
			
		}else if(x>0 && y<0){
			printf("quarto\n");
			
		}else if(x<0 && y<0){
			printf("terceiro\n");
			
		}else{
			printf("segundo\n");
			
		}
		
	}
	
	return 0;
}
