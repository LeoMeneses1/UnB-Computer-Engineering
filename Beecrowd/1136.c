/*
 * Beecrowd - Problema 1136 - Bingo!
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1136
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <math.h>

int main(){
	int n,b,i,j,forma,diferenca;
	int bolas[92];
	int possivel[91]={0};
	while(scanf("%d %d",&n,&b)!=EOF){
		if(n==0 && b==0){
			break;
			
		}
		
		for(i=0; i<91; i++){
			possivel[i] = 0;
			
		}
		for(i=0; i<b; i++){
			scanf("%d",&bolas[i]);
			
		}
		for(i=0; i<b; i++){
			for(j=0; j<b; j++){
				diferenca = abs(bolas[i]-bolas[j]);
				possivel[diferenca] = 1;
				
			}
			
			
		}
		
		forma = 1;
		for(i=0; i<n+1; i++){
			if(possivel[i]==0){
				forma = 0;
				break;
				
			}
			
			
		}
		if(forma == 0){
			printf("N\n");
			
		}else{
			printf("Y\n");
			
		}	
		
	}
	
	return 0;
}
