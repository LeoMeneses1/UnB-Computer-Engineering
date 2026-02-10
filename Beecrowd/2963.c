/*
 * Beecrowd - Problema 2963 -Bobo da Corte
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2963
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	long long int n,i,votos1,votosr,vence;
	scanf("%lld",&n);
	scanf("%lld",&votos1);
	
	vence = 0;
	
	for(i=1; i<n; i++){
		scanf("%lld",&votosr);
		
		if(votos1<votosr){
			vence = 1;
			
		}
		
	}
	
	if(vence==0){
		printf("S\n");
		
	}else{
		printf("N\n");
		
	}
	
	return 0;
}
