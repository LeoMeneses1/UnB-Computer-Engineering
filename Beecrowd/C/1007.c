/*
 * Beecrowd - Problema 1007 - Diferenca
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1007
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int a,b,c,d, diferenca;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	diferenca = a*b-c*d;
	
	printf("DIFERENCA = %d\n", diferenca);
	
	return 0;
}
