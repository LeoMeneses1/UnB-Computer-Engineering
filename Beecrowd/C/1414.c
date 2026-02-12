/*
 * Beecrowd - Problema 1414 - Copa do Mundo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1414
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

typedef struct{
	char nome[50];
	int pontos;
}Selecao;

int main(){
	int t,n,i;
	while(scanf("%d %d",&t,&n)!=EOF){
		if(n == 0 && t == 0) break;
		Selecao v[t];	
		for(i=0; i<t; i++){
			scanf("%s",v[i].nome);
			scanf("%d",&v[i].pontos);
		}
		int total = 0;
		int empate = 0;
		for(i=0; i<t; i++){
			total += v[i].pontos;
		}
		empate = 3*n - total;	
		printf("%d\n",empate);
	}
	return 0;
}
