/*
 * Beecrowd - Problema 1865 - Mjonir
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1865
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <string.h>

int main(){
	int n,i,newton;
	char str[50000];
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%s %d",str,&newton);
		if(strcmp(str,"Thor")==0){
			printf("Y\n");
		}else{
			printf("N\n");
		}
	}
	
	return 0;
}
