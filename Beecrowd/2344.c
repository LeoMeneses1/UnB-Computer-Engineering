/*
 * Beecrowd - Problema 2344 - Notas da Prova
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2344
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int nota;
	scanf("%d",&nota);
	
	if(nota <= 100 && nota >= 86){
		printf("A\n");
		
	}else if(nota <= 85 && nota >=61){
		printf("B\n");
		
	}else if(nota <= 60 && nota >=36){
		printf("C\n");
		
	}else if(nota <= 35 && nota >= 1){
		printf("D\n");
		
	}else{
		printf("E\n");
		
	}
	
	return 0;
}
