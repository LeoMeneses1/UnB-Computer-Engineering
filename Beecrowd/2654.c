/*
 * Beecrowd - Problema 2654 - Godofor
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2654
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char nome[6000];
	int poder;
	int deuses;
	int morreu;
}Deus;

int main(){
	int n,i;
	scanf("%d",&n);
	Deus x[n];
	for(i=0; i<n; i++){
		scanf("%s %d %d %d",x[i].nome, &x[i].poder, &x[i].deuses, &x[i].morreu);
	}
	char divindade[6000];
	Deus lider = x[0];
	for(i=1; i<n; i++){
		if(lider.poder < x[i].poder){
			lider = x[i];
		}else if(lider.poder == x[i].poder){
			if(lider.deuses < x[i].deuses){
				lider = x[i];
			}else if(lider.deuses == x[i].deuses){
				if(lider.morreu > x[i].morreu){
					lider = x[i];
				}else if(lider.morreu == x[i].morreu){
					if(strcmp(lider.nome, x[i].nome) > 0){
						lider = x[i];
					}
				}
			}
		}
	}	
	printf("%s\n",lider.nome);
	return 0;
}
