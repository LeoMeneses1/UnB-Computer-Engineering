/*
 * Beecrowd - Problema 1114 - Senha Fixa
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1114
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n;
	
	while(scanf("%d",&n)!=EOF){
		if(n==2002){
			printf("Acesso Permitido\n");
			break;
			
		}else{
			printf("Senha Invalida\n");	
		}
	}
	return 0;
}
