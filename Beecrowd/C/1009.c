/*
 * Beecrowd - Problema 1009 - Salario com Bonus
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1009
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	double a,b,total;
	char str[100];
	scanf("%s %lf %lf",str,&a,&b);
	
	total = a+(b*15/100);
	
	printf("TOTAL = R$ %.2lf",total);
	
	return 0;
}
