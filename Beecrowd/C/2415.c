/*
 * Beecrowd - Problema 2415 - Consecutivos
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2415
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,n,valor,atual,maior;
	int v[60000];
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d",&v[i]);
	}
	
	valor = v[0];
	atual = 1;
	maior = 1;
	for(i=1; i<n; i++){
		if(v[i]==valor){
			atual++;
		if(atual>maior){
			maior=atual;
		}
			
		}else{
			valor = v[i];
			atual=1;
		}
		
	}
	
	printf("%d\n",maior);
	return 0;
}
