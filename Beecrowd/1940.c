/*
 * Beecrowd - Problema 1940 - Jogo da Estrategia
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1940
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int j,r,i,jogador,pontos;
	int placar[501] = {0};
	scanf("%d %d",&j,&r);
	for(i=0; i<j*r; i++){
		scanf("%d",&pontos);
		jogador = (i%j) + 1;
		placar[jogador] += pontos;
	}
	int maior = -1;
	int vencedor;
	for(i=1; i<=j; i++){
		if(placar[i] >= maior){
			maior = placar[i];
			vencedor = i;
		}
	}
	printf("%d\n",vencedor);
	return 0;
}

