/*
 * Beecrowd - Problema 1618 - Colisao
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1618
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int n,i,j,ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
	while(scanf("%d",&n)!=EOF){
		for(i=0; i<n; i++){
			scanf("%d %d %d %d %d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy,&rx,&ry);
			if(rx>=ax && rx<=bx && ry>=ay && ry<=cy){
				printf("1\n");
			}else{
				printf("0\n");
			}
		}
	}
	
	return 0;
}
