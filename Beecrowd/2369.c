/*
 * Beecrowd - Problema 2369 - Conta de Agua
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2369
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int N, N1, N2, N3, total1;
	scanf("%d",&N);
	
	if(N<=10){
		printf("7\n");
		
	}else if(N>10 && N<=30){
		N1 = N-10;
		total1 = N1+7;
		printf("%d\n",total1);
		
	}else if(N>30 && N<=100){
		N2 = N - 30;
		total1 = N2 * 2 + 20 + 7;
		printf("%d\n",total1);
		 
	}else if(N>100){
		N3 = N - 100;
		total1 = N3 * 5 + 20 + 140 + 7;
		printf("%d\n",total1);
	}
	
	return 0;
}
