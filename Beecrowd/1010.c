/*
 * Beecrowd - Problema 1010 - Calculo Simples
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1010
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int codigo1, peca1, codigo2, peca2;
	double valor1, valor2, soma;
	scanf("%d %d %lf", &codigo1, &peca1, &valor1);
	scanf("%d %d %lf", &codigo2, &peca2, &valor2);
	
	soma = peca1*valor1 + peca2*valor2;
	
	printf("VALOR A PAGAR: R$ %.2lf\n", soma);
	return 0;
}
