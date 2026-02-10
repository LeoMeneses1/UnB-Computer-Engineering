/*
 * Beecrowd - Problema 1028 - Figurinhas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1028
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int gcd (int a, int b){
	if(b==0){
		return a;
		
	}
	return gcd(b,a%b);
	
}


int main(){
	int f,f1,f2,i;
	scanf("%d",&f);
	
	for(i=0; i<f; i++){
		scanf("%d %d",&f1,&f2);
		printf("%d\n",gcd(f1,f2));
		
		}
	
	return 0;
}
