/*
 * Beecrowd - Problema 1187 - Area Superior
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1187
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,j;
	double matriz[12][12],soma;
	char o;
	scanf("%c",&o);
	getchar();
	
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf",&matriz);
		}
	}
	
	soma=0.0;
	for(i=0; i<5; i++){
		for(j=0; j<12; j++){
			if(j>i && j+i<11){
				soma+=matriz[i][j];
			}
		}
	}
	
	if(o=='S'){
		printf("%.1lf\n",soma);
	}else{
		printf("%.1lf\n",soma/30.0);
	}
	
	return 0;
}
