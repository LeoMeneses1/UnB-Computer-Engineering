/*
 * Beecrowd - Problema 2175 - Qual o Mais Rapido
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2175
 * * Autor: Leonardo Meneses
 */

#include<stdio.h>

int main(){
	float O,B,I;
	scanf("%f %f %f",&O,&B,&I);
	
	if(O<B && O<I){
		printf("Otavio\n");
		
	}else if(B<O && B<I){
		printf("Bruno\n");
		
	}else if(I<B && I<O){
		printf("Ian\n");
		
	}else{
		printf("empate\n");
		
	}
	
	return 0;
}
