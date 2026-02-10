/*
 * Beecrowd - Problema 1151 - Fibonacci Facil
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1151
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,i;
	int v[100];
	scanf("%d",&n);
	
	v[0]=0;
	v[1]=1;
	for(i=0; i<n; i++){
		v[i]=v[i-1]+v[i-2];
		printf("%d ",v[i]);
	}
	
	return 0;
}
