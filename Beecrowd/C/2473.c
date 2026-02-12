/*
 * Beecrowd - Problema 2473 - Loteria
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2473
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,a,s,acerto;
	int aposta[100] = {0};
	int sorteado[100] = {0};
	
	for(i=0; i<6; i++){
		scanf("%d",&a);
		aposta[a] = 1;
	}
	
	for(i=0; i<6; i++){
		scanf("%d",&s);
		sorteado[s] = 1;
	}

	acerto=0;
	for(i=0; i<=99; i++){
		if(aposta[i]==1 && sorteado[i]==1){
			acerto++;
		}
		
	}
	
	if(acerto<3){
		printf("azar\n");
	}else if(acerto==3){
		printf("terno\n");
	}else if(acerto==4){
		printf("quadra\n");
	}else if(acerto==5){
		printf("quina\n");
	}else if(acerto==6){
		printf("sena\n");
	}
	
	return 0;
}
