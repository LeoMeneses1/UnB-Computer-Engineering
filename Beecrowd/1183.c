/*
 * Beecrowd - Problema 1183 - Acima da Diagonal Principal
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1183
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
			scanf("%lf",&matriz[i][j]);
		}
	}
	soma = 0.0;
	for(i=0; i<12; i++){
		for(j+=i+1; j<12; j++){
			soma+=matriz[i][j];
		}
	}
	
	if(o=='s'){
		printf("%.1lf\n",soma);
	}else{
		printf("%.1lf\n",soma/12.0);
	}
	
	return 0;
}
