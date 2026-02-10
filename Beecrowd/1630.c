/*
 * Beecrowd - Problema 1630 - Estacas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1630
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int mdc(int a, int b){
	if(b==0){
		return a;
	}
	return mdc(b,a%b);
}

int main(){
	int x,y,cercas,d,perimetro;
	while(scanf("%d %d",&x,&y)!=EOF){
		cercas = 0;
		perimetro = 0;
		
		d = mdc(x,y);
		perimetro = x*2+y*2;
		cercas = perimetro/d; 
		
		printf("%d\n",cercas);
	}
	
	return 0;
}
