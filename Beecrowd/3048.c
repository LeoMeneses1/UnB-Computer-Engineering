/*
 * Beecrowd - Problema 3048 - Sequencia Secreta
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3048
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,i,ultimo,atual,pego;
	scanf("%d",&n);
	
	pego = 0;
	ultimo = 0;
	for(i=0; i<n; i++){
		scanf("%d",&atual);
		
		if(atual!=ultimo){
			pego++;
			ultimo = atual;
			
		}
		
	}
	
	printf("%d\n",pego);
	
	return 0;
}
