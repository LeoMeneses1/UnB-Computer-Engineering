/*
 * Beecrowd - Problema 1015 - Distancia Entre Dois Pontos
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1015
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <math.h>

int	main(){
	double x1,y1,x2,y2, distancia;
	scanf ("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	
	distancia = sqrt ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	
	printf("%.4lf\n", distancia);
	
	return 0;
}
