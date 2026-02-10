/*
 * Beecrowd - Problema 1235 - De Dentro pra Fora
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1235
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j,comprimento, meio;
	char str[1000];
	scanf("%d",&n);
	
	for(i = 0; i<n; i++){
		scanf(" %[^\n]",str);
		getchar();
		comprimento = strlen(str);
		meio = comprimento / 2;	
		
		for(j=meio-1; j>=0; j--){
			printf("%c",str[j]);
		}
		
		for(j=comprimento-1;j>=meio; j--){
		printf("%c",str[j]);
		}
	
		printf("\n");
	}
	return 0;
}
