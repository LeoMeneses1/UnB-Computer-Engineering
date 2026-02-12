/*
 * Beecrowd - Problema 2161 - Raiz Quadrada de 10
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2161
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

double raiz(double n){
	if(n==0){
		return 3.0;
	}
	if(n==1){
		return 6.0;
	}
	return 6.0+1.0/raiz(n-1);
	
}
int main(){
	double n,resultado;
	scanf("%lf",&n);
	
	if(n>0){
		resultado = 3 + 1/raiz(n);
		
	}else{
		resultado = 3.0;
		
	}
	
	printf("%.10lf\n",resultado);
	
	return 0;
}
