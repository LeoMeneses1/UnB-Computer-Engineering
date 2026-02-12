/*
 * Beecrowd - Problema 2342 - Overflow
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2342
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int N,P,Q,SP;
	char(C);
	
	scanf("%d", &N);
	scanf("%d %c %d", &P, &C, &Q);
	
	if(C == '+'){
		SP = P + Q;
	}else{
		SP = P * Q;
	}

	if(SP > N){
		printf("OVERFLOW\n");
	}else{
		printf("OK\n");
	}
		
	return 0;
}
