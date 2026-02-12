/*
 * Beecrowd - Problema 1006 - Media 2
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1006
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	double a,b,c, media;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	media = (a*2+b*3+c*5)/10;
	
	printf("MEDIA = %.1lf\n", media);
	
	return 0;
}
