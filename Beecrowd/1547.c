/*
 * Beecrowd - Problema 1547 - Adivinha
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1547
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <math.h>

int main(){
	int n,qt,s,indice,mais_perto,i,j,aluno;
	scanf("%d",&n);
	mais_perto = 200;
	
	for(i=0; i<n; i++){
		scanf("%d %d",&qt,&s);
		indice = 0;
		
		for(j=1; j<=qt; j++){
			scanf("%d",&aluno);
			
			if(abs(aluno - s) < mais_perto){
				mais_perto = abs(aluno - s);
				indice = j;
				
			}
			
		}
		mais_perto = 200;
		printf("%d\n",indice);
		
	}
	
	return 0;
}
