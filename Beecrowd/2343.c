/*
 * Beecrowd - Problema 2343 - Cacadores de Mito
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2343
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,i,j,I,x,y,caiu;
	int matriz[8][5];
	scanf("%d",&n);
	
	for(i=0; i<8; i++){
		for(j=0; j<5; j++){
			matriz[i][j]=-1;
		}
	}
	
	for(i=0; i<n; i++){
		scanf("%d %d",&matriz[x][y]);
		if(matriz[x][y]!=-1){
			caiu++;
		}
	}
	
	if(caiu>0){
		printf("1\n");
	}else{
		printf("0\n");
	}
	
	return 0;
}
