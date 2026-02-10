/*
 * Beecrowd - Problema 2779 - Album da Copa
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2779
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,m,i,f,faltam,v[301];
	scanf("%d",&n);
	scanf("%d",&m);
	
	for(i=0; i<=n; i++){
		v[i] = 0;
		
	}
	
	for(i=0; i<m; i++){
		scanf("%d",&f);
		v[f] = 1;
		
	}
	
	faltam = 0;
	
	for(i=1; i<=n; i++){
		if(v[i] == 0){
			faltam++;
			
		}

	}
	
	printf("%d\n",faltam);
	
	return 0;
}
