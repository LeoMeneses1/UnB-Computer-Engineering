/*
 * Beecrowd - Problema 1045 - Tipos de Triangulos
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1045
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

double max(double a, double b){
	if(a>b){
		return a;
		
	}else{
		return b;
		
	}
	
}

double min(double a, double b){
	if(a<b){
		return a;
		
	}else{
		return b;
		
	}
	
}
int main(){
	double a,b,c,a1,b1,c1;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	a1 = max(a, max(b,c));
	c1 = min(a, min(b,c));
	b1 = a + b + c - (a1 + c1);
	
	if(a1>=b1+c1){
		printf("NAO FORMA TRIANGULO\n");
		
	}else{
		if(a1*a1 == b1*b1+c1*c1){
			printf("TRIANGULO RETANGULO\n");
			
		}else if(a1*a1 > b1*b1+c1*c1){
			printf("TRIANGULO OBTUSANGULO\n");
			
		}else if(a1*a1 < b1*b1+c1*c1){
			printf("TRIANGULO ACUTANGULO\n");
			
		}
		if(a1==b1 && a1==c1){
			printf("TRIANGULO EQUILATERO\n");
			
		}else if(a1==b1 || b1==c1 || c1==a1){
			printf("TRIANGULO ISOSCELES\n");
			
		}
		
	}
	
	return 0;
}
