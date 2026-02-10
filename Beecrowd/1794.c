/*
 * Beecrowd - Problema 1794 - Lavanderia
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1794
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int LA, LB, SA, SB, N;
	scanf("%d %d %d %d %d", &N, &LA, &LB, &SA, &SB);
	
	if(N >= LA && N <= LB && N >= SA && N <= SB){
		printf("possivel\n");
		
	}else{
		printf("impossivel\n");
	}
	
	return 0;
}
