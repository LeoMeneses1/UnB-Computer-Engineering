/*
 * Beecrowd - Problema 2443 - Soma de Fracoes
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2443
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int mdc(int a, int b){
	if(b==0){
		return a;
	}else{
	return mdc(b, a%b);
	
	}
}

int main(){
	int a,b,c,d,divisor,numerador,minimo,d_final,n_final;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	divisor = b*d;
	numerador = (a*d)+(c*b);
	minimo = mdc(numerador, divisor);
	
	n_final = numerador / minimo;
	d_final = divisor / minimo;
	
	printf("%d %d\n",n_final, d_final);
	
	

	return 0;
}
