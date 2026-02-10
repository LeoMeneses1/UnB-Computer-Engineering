/*
 * Beecrowd - Problema 1020 - Idade em Dias
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1020
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int idade_em_dias, anos, meses, dias;
	scanf("%d", &idade_em_dias);
	
	anos = idade_em_dias / 365;
	meses = (idade_em_dias % 365) / 30;
	dias = (idade_em_dias % 365) % 30;
	
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	
	return 0;
}
