/*
 * Beecrowd - Problema 1228 - Grid de Largada
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1228
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include<math.h>

int main(){
	int n,i,j,ultrapassagem;
	int partida[25];
	int chegada[25];
	while(scanf("%d",&n)!=EOF){
		int pos_partida[n+1];
		int pos_chegada[n+1];
		for(i=0; i<n; i++){
			scanf("%d",&partida[i]);
			pos_partida[partida[i]]=i;
		}
		for(i=0; i<n; i++){
			scanf("%d",&chegada[i]);
			pos_chegada[chegada[i]]=i;
		}
		ultrapassagem = 0;
		for(i=1; i<=n; i++){
			for(j=i+1; j<=n; j++){
				int largadaA = pos_partida[i];
				int largadaB = pos_partida[j];
				int chegadaA = pos_chegada[i];
				int chegadaB = pos_chegada[j];
				if(largadaA<largadaB && chegadaA>chegadaB){
					ultrapassagem++;
				}else if(largadaA>largadaB && chegadaA<chegadaB){
					ultrapassagem++;
				}
			}
		}
		printf("%d\n",ultrapassagem);
	}
	return 0;
}
