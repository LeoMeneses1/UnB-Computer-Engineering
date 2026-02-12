/*
 * Beecrowd - Problema 1094 - Experiencias
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1094
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	double n,quantia,i,per_c,per_r,per_s,total,coelho,sapo,rato;
	char c;
	scanf("%lf",&n);
	
	coelho = 0;
	sapo = 0;
	rato = 0;
	quantia = 0;
	per_c = 0;
	per_r = 0;
	per_s = 0;
	total = 0;
	
	for(i=1; i<=n; i++){
		scanf("%lf %c",&quantia,&c);
		
		total += quantia;
		if(c=='C'){
			coelho += quantia;
			
		}else if(c=='R'){
			rato += quantia;
			
		}else{
			sapo += quantia;
			
		}
		
		
		
	}
	
	per_c = (coelho*100)/total;
	per_r = (rato*100)/total;
	per_s = (sapo*100)/total;
	
	printf("Total: %.0lf cobaias\n",total);
	printf("Total de coelhos: %.0lf\n",coelho);
	printf("Total de ratos: %.0lf\n",rato);
	printf("Total de sapos: %.0lf\n",sapo);
	printf("Percentual de coelhos: %.2lf %%\n",per_c);
	printf("Percentual de ratos: %.2lf %%\n",per_r);
	printf("Percentual de sapos: %.2lf %%\n",per_s);
	
	return 0;
}
