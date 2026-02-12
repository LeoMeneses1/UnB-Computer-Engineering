/*
 * Beecrowd - Problema 2783 - Figurinhas de Copa
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2783
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,n,m,c,x,y,faltam;
	int carimbadas[4000] = {0};
	int compradas[4000] = {0};
	scanf("%d %d %d",&n,&c,&m);
	
	faltam = 0;
		
	for(i=1; i<=c; i++){
		scanf("%d",&x);
		carimbadas[x] = 1;
	}
	
	for(i=1; i<=m; i++){
		scanf("%d",&y);
		compradas[y] = 1;	
	}
	
	for(i=1; i<=n; i++){
		if(carimbadas[i]==1 && compradas[i]==0){
			faltam++;
		}
		
	}
	
	printf("%d\n",faltam);
	
	return 0;
}
