/*
 * Beecrowd - Problema 1129 - Leitura Otica
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1129
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,n,a,b,c,d,e,contadora;
	char sim;
	
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
	
	for(i=0; i<n; i++){
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
		
		contadora = 0;
		sim = '*';
		
		if(a<=127){
			sim = 'A';
			contadora++;
		}
		if(b<=127){
			sim = 'B';
			contadora++;
		}
		if(c<=127){
			sim = 'C';
			contadora++;
		}
		if(d<=127){
			sim = 'D';
			contadora++;
		}
		if(e<=127){
			sim = 'E';
			contadora++;
		}
		
		if(contadora == 1){
			printf("%c\n",sim);
		}else{
			printf("*\n");
		}	
	
		}
	}
	
	return 0;
}
