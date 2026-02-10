/*
 * Beecrowd - Problema 1893 - Fases da Lua
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1893
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,f;
	scanf("%d %d",&i,&f);
	
	if(f<=2){
		printf("nova\n");
		
	}else if(i<f && f>=3 && f<=96){
		printf("crescente\n");
		
	}else if(f>=97 && f<=100){
		printf("cheia\n");
		
	}else{
		printf("minguante\n");
		
	}
	
	return 0;
}
