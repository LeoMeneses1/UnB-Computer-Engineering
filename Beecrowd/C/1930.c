/*
 * Beecrowd - Problema 1930 - Tomadas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1930
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int T1, T2, T3, T4, conexao;
	scanf("%d %d %d %d", &T1, &T2, &T3, &T4);
	
	conexao = (T1 - 1) + (T2 - 1) + (T3 - 1) + T4;
	
	printf("%d\n", conexao);
	
	return 0;
}
