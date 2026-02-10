/*
 * Beecrowd - Problema 3170 - Bolinhas de Natal
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3170
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int b,g, metade, faltam;
	scanf("%d %d",&b,&g);
	
	metade = (g/2);
	
	if(metade > b){
		faltam = metade - b;
		printf("Faltam %d bolinha(s)\n",faltam);
	}else{
		
	printf("Amelia tem todas bolinhas!\n");
	}
	
	return 0;
}
