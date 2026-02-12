/*
 * Beecrowd - Problema 1542 - Lendo Livros
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1542
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int q,d,p,paginas;
	while(scanf("%d %d %d",&q,&d,&p)!=-1){
		if(q==0||d==0||p==0){
			break;
		}
		
		paginas = q*d*p/2;
		printf("%d paginas\n",paginas);
	}
	
	return 0;
}
