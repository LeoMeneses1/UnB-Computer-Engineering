/*
 * Beecrowd - Problema 3407 - Hora do cafe
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3407
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,m,i,itemN,itemS,doceN,doceS;
	scanf("%d %d",&n,&m);
	
	doceN = 0;
	doceS = 0;
	
	for(i=0; i<n; i++){
		scanf("%d",&itemN);
		if(itemN==1){
			doceN++;
			
		}
	}
	
	for(i=0; i<n; i++){
		scanf("%d",&itemS);
		if(itemS==1){
			doceS++;
			
		}
	}
	
	if(doceS==doceN && doceS==m){
		printf("Tudo certo.\n");
		
		
	}else if(doceS!=doceN && doceS==m){
		printf("Pegou de Samuel.\n");
		
	}else if(doceS!=doceN && doceS!=m || doceN!=m){
		printf("Pegou de um estranho.\n");
		
	}
	
	return 0;
}
