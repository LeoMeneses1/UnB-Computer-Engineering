/*
 * Beecrowd - Problema 3301 - Sobrinho do Meio
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3301
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int h,z,l;
	scanf("%d %d %d",&h,&z,&l);
	
	if(h>z && h<l || h>l && h<z){
		printf("huguinho\n");
		
	}else if(z>h && z<l || z>l && z<h){
		printf("zezinho\n");
		
	}else{
		printf("luisinho\n");
		
	}
	
	return 0;
}
