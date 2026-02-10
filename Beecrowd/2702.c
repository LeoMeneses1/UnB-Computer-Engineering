/*
 * Beecrowd - Problema 2702 - Escolha Dificil
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2702
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int Ft,Bt,Mt,F,B,M, famintos;
	scanf("%d %d %d",&Ft,&Bt,&Mt);
	scanf("%d %d %d",&F,&B,&M);
	
	if(Ft>=F && Bt>=B && Mt>=M){
		printf("0\n");
		
	}else if(Ft<F && Bt>=B && Mt>=M){
		famintos = F-Ft;
		printf("%d\n",famintos);
		
	}else if(Ft<F && Bt<B && Mt>=M){
		famintos = (F-Ft) + (B-Bt);
		printf("%d\n",famintos);
		
	}else if(Ft<F && Bt<B && Mt<M){
		famintos = (F-Ft) + (B-Bt) + (M-Mt);
		printf("%d\n",famintos);
		
	}else if(Ft>=F && Bt<B && Mt<M){
		famintos = (B-Bt) + (M-Mt);
		printf("%d\n",famintos);
		
	}else if(Ft>=F && Bt<B && Mt>=M){
		famintos = B-Bt;
		printf("%d\n",famintos);
		
	}else if(Ft>=F && Bt>=B && Mt<M){
		famintos = M-Mt;
		printf("%d\n",famintos);

	}else if(Ft<F && Bt>=B && Mt<M){
		famintos = (F-Ft) + (M-Mt);
		printf("%d\n",famintos);
		
	}
	
	return 0;
}
