/*
 * Beecrowd - Problema 2293 - Campo de Minhocas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2293
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <math.h>

int main(){
	int n,m,i,j,soma_linha,soma_coluna,maior_linha, maior_coluna,maior;
	int matriz[100][100];
	scanf("%d %d",&n,&m);
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d",&matriz[i][j]);
		}
	}
	
	soma_linha = 0;
	soma_coluna = 0;
	maior_linha = 0;
	maior_coluna = 0;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			soma_linha+=matriz[i][j];
		}
		if(soma_linha > maior_linha){
			maior_linha = soma_linha;
			soma_linha = 0;
		}else{
			soma_linha = 0;
		}
	}
	
	for(j=0; j<m; j++){
		for(i=0; i<n; i++){
			soma_coluna+=matriz[i][j];
		}
		if(soma_coluna > maior_coluna){
			maior_coluna = soma_coluna;
			soma_coluna = 0;
		}else{
			soma_coluna = 0;
			
		}
		
		
	}
	
	if(maior_coluna>=maior_linha){
		printf("%d\n",maior_coluna);
	}else{
		printf("%d\n",maior_linha);
	}
	
	return 0;
}
