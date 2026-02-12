/*
 * Beecrowd - Problema 1095 - Sequencia IJ 1
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1095
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,j;
	
	j = 60; 
	i = 1;
	
	while(j>=0){
		printf ("I=%d J=%d\n",i,j);
		
		i += 3;
		j -= 5;
		
	}
	
	return 0;
}
