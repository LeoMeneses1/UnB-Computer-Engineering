/*
 * Beecrowd - Problema 1131 - Grenais
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1131
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,g,n,inter,gremio,empate,grenais;
	inter = 0;
	gremio = 0;
	empate = 0;
	grenais = 0;
	while(n!=2){
		scanf("%d %d",&i,&g);
		grenais++;
		if(i>g){
			inter++;
			
		}else if(g>i){
			gremio++;
			
		}else{
			empate++;
			
		}
		printf("Novo Grenal (1-sim 2-nao)\n");
		scanf("%d",&n);
	}
	
	printf("%d grenais\n",grenais);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gremio);
	printf("Empates:%d\n",empate);
	
	if(inter>gremio){
		printf("Inter venceu mais\n");
		
	}else if(gremio>inter){
		printf("Gremio venceu mais\n");
		
	}else{
		printf("Nao houve vencedor\n");
		
	}
	
	return 0;
}
