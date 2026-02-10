/*
 * Beecrowd - Problema 1046 - Tempo de Jogo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1046
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    int inicial, final, duracao;
    scanf("%d %d", &inicial, &final);
    
    duracao = final - inicial;
    
    if(duracao <= 24 && duracao > 0){
    	printf("O JOGO DUROU %d HORA(S)\n", duracao);
    
    }else if(duracao == 0){
    	printf("O JOGO DUROU 24 HORA(S)\n");
    
    }else if(duracao < 0){
	duracao = duracao + 24;
	printf("O JOGO DUROU %d HORA(S)\n", duracao);    
    }	

    return 0;
}
