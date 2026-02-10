/*
 * Beecrowd - Problema 1019 - Conversao de Tempo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1019
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int duracao, horas, minutos, segundos;
	scanf("%d", &duracao);
	
	horas = duracao / 3600;
	minutos = (duracao % 3600) / 60;
	segundos = (duracao % 3600) % 60;
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
	
	return 0;
}
