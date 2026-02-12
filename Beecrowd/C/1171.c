/*
 * Beecrowd - Problema 1171 - Frequencia de numeros
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1171
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,n,x,v[50000]={0};
	scanf("%d",&n);

	for(i=0; i<n; i++){
		scanf("%d",&x);
		v[x]++;
	}	
		
	for(i=1; i<=2001; i++){
		if(v[i]>0){
		printf("%d aparece %d vez(es)\n",i,v[i]);
		}
	}
	
	return 0;
}
