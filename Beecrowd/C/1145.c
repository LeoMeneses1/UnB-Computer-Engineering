/*
 * Beecrowd - Problema 1145 - Sequencia Logica 2
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1145
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int x,y,i;
	scanf("%d %d",&x,&y);
	
	for(i=1; i<=y; i++){
		printf("%d",i);
		if(i%x==0){
			printf("\n");
		}else if(i==y){
			printf("\n");
		}else{
			printf(" ");	
		}	
	}
	return 0;
}
