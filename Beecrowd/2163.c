/*
 * Beecrowd - Problema 2163 - O Despertar da Forca
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2163
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
typedef long long ll;

int main(){
	int n,m,i,j,final_n,final_m;
	ll matriz[1000][1000];
	scanf("%d %d",&n,&m);
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%lld",&matriz[i][j]);
		}
	}
	
	final_n = 0;
	final_m = 0;
	
	for(i=1; i<n-1; i++){
		for(j=1; j<m-1; j++){
			if(matriz[i][j]==42 && matriz[i-1][j-1]==7 && matriz[i-1][j]==7 && matriz[i-1][j+1]==7 && matriz[i][j-1]==7 && matriz[i][j+1]==7 && matriz[i+1][j-1]==7 && matriz[i+1][j]==7 && matriz[i+1][j+1]==7){
				final_n=i+1;
				final_m=j+1;
				goto busca;
			}
		}
	}
	busca:
		printf("%d %d\n",final_n,final_m);
		
	return 0;
}
