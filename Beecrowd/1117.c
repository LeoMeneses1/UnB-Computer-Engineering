/*
 * Beecrowd - Problema 1117 - Validacao da Nota
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1117
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	double nota1,nota2,media;
	while(scanf("%lf",&nota1)!=EOF){
		if(nota1<0 || nota1>10){
			printf("nota invalida\n");
		}else{
			while(scanf("%lf",&nota2)!=EOF){
				if(nota2<0 || nota2>10){
					printf("nota invalida\n");
				
				}else{
					media = (nota2+nota1)/2;
					printf("media = %.2lf\n",media);
    				break;		
				}
			
			}
		
		}
	
	}
	
	return 0;
}
