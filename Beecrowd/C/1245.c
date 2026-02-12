/*
 * Beecrowd - Problema 1245 - Botas Perdidas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1245
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,m,j;
	char l;
	while(scanf("%d", &n) != EOF){
		int vetorDireita[n];
		int vetorEsquerda[n];
		int ind_Esq = 0;
		int ind_Dir = 0;
		for(i=0; i<n; i++){
			scanf("%d %c",&m, &l);
			getchar();
			if(l == 'E'){
				vetorEsquerda[ind_Esq] = m;
				ind_Esq++;
			}else{
				vetorDireita[ind_Dir] = m;
				ind_Dir++;
			}
		}
		int par = 0;
		for(i=0; i<ind_Esq; i++){
			for(j=0; j<ind_Dir; j++){
				if(vetorEsquerda[i] == vetorDireita[j]){
					par++;
					vetorDireita[j] = -1;
					break;
				}
			}
		}
		printf("%d\n",par);
	}
	return 0;
}

