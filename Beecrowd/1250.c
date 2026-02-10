/*
 * Beecrowd - Problema 1250 - Kiloman
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1250
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,j,n,t,atingido;
	int altura[51];
	char pj[51];
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d",&t);
		atingido=0;
		for(j=0; j<t; j++){
			scanf("%d",&altura[j]);
		}
		getchar();
		for(j=0; j<t; j++){
			scanf("%c",&pj[j]);
		}
		for(j=0; j<t; j++){
			if(pj[j]=='J' && altura[j]>2){
				atingido++;
			}
			if(pj[j]=='S' && altura[j]<=2){
				atingido++;
			}
			
		}
		printf("%d\n",atingido);
	}
	
	return 0;
}
