/*
 * Beecrowd - Problema 1548 - Fila do Recreio
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1548
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

void ordena(int v[10000], int m){
	int i,j,backup;
	for(i=0; i<m-1; i++){
		for(j=i+1; j<m; j++){
			if(v[i] < v[j]){
				backup = v[i];
				v[i] = v[j];
				v[j] = backup;
			}
		}
	}
}

int main(){
	int i,n,m;
	int chegada[10000] = {0};
	int organizado[10000] = {0};
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&m);
		int j;
		for(j=0; j<m; j++){
			scanf("%d",&chegada[j]);
			organizado[j] = chegada[j];
		}
		ordena(organizado, m);
		int nao = 0;
		int k;
		for(k=0; k<m; k++){
			if(organizado[k] == chegada[k]){
				nao++;
			}
			
		}
		printf("%d\n",nao);
	}
	
	return 0;
}
