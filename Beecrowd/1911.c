/*
 * Beecrowd - Problema 1911 - Ajude Girafales
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1911
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <string.h>

int main(){
	int i,j,n,m,k,p,diferenca,assinatura;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
			
		}
		
		char nome[n][21];
		char original[n][21];	
		
		for(i=0; i<n; i++){
			scanf("%s %s",nome[i],original[i]);	
			
		}
		scanf("%d",&m);
		
		char nome_aula[21];
		char ass_aula[21];
		
		assinatura = 0;
		for(i=0; i<m; i++){
			scanf("%s %s",nome_aula,ass_aula);
			diferenca = 0;
			for(j=0; j<n; j++){
				if(strcmp(nome_aula,nome[j])==0){
					p = strlen(ass_aula);
					for(k=0; k<p; k++){
						if(ass_aula[k] != original[j][k]){
							diferenca++;
							
						}
						
					}
					
					if(diferenca > 1){
						assinatura++;
				
					}
				
				}
			
			}
		
		}
		
		printf("%d\n",assinatura);
		
	}
	
	return 0;
}
