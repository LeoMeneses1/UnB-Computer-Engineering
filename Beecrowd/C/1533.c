/*
 * Beecrowd - Problema 1533 - Detetive Watson
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1533
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,v,i,indice,primeiro,segundo,indice_segundo;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
			
	}
	
	indice = -1;
	primeiro = -1;
	segundo = -1;
	indice_segundo = -1;
	for(i=1; i<=n; i++){
		scanf("%d",&v);
		if(v>primeiro){
			segundo = primeiro;
			indice_segundo = indice;
			primeiro = v;
			indice = i;
		}else if(v>segundo){
			segundo = v;
			indice_segundo = i;
		}
		
	}
	
	printf("%d\n",indice_segundo);
		
	}
	
	
	return 0;
}
