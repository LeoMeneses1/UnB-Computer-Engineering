/*
 * Beecrowd - Problema 1182 - Coluna na Matriz
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1182
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int l,i,j;
	double matriz[12][12];
	char c;
	scanf("%d %c",&l,&c);
	getchar();
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf",&matriz[i][j]);
		}
	}
	double soma = 0.0;
	for(i=0; i<12; i++){
		soma += matriz[i][l];
	}
	if(c == 'S') printf("%.1lf\n",soma);
	else printf("%.1lf\n",soma/12);
	return 0;
}
