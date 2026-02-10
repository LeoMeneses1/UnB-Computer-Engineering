/*
 * Beecrowd - Problema 2787 - Xadrez
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2787
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int l,c;
	scanf("%d %d",&l, &c);
	
	if(l % 2 != 0 && c % 2 == 0 || l % 2 == 0 && c % 2 != 0){
	  printf("0\n");	
	}else{
		printf("1\n");
 	}

	return 0;
}
