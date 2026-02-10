/*
 * Beecrowd - Problema 2386 - Telescopio
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2386
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int i,a,n,f,flag;
 	scanf("%d",&a);
 	scanf("%d",&n);
 	
 	flag = 0;
 	for(i=0; i<n; i++){
 		scanf("%d",&f);
 		if(f*a>=40000000){
 			flag++;	
 		}
 		
	 }
	
	printf("%d\n",flag);
	
	return 0;
}
