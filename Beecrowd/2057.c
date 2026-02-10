/*
 * Beecrowd - Problema 2057 - Fuso Horario
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2057
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int s,t,f,chegada;
	scanf("%d %d %d",&s,&t,&f);
	
	chegada = s+t+f;
	
	if(chegada>=24){
		chegada = chegada - 24;
		
	}else if(chegada<0){
		chegada = chegada + 24;
		
	}
	
	printf("%d\n",chegada);
	
	return 0;
}
