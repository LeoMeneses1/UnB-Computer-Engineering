/*
 * Beecrowd - Problema 2782 - Escadinha
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2782
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	long long unsigned int n,i,escada,ns,dif1,dif2,v[50000];
	scanf("%llud",&n);
	
	escada = 1;
	
	for(i=0; i<n; i++){
		scanf("%llud",&ns);
		v[i] = ns;
	}
	
	if(n==1|| n==2){
		printf("1\n");
		return 0;
	}
	
	dif1 = v[1]-v[0];
	
	for(i=2; i<n; i++){
		dif2 = v[i]-v[i-1];
		if(dif2!=dif1){
			escada++;
			dif1 = dif2;
		}
		
	}
	
	printf("%llud",escada);
	
	return 0;
}
