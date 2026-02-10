/*
 * Beecrowd - Problema 1061 - Tempo de um Evento
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1061
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int	main(){
	int dia, hora, minuto, segundo, diaf, horaf, minutof, segundof, segundototal, segundototal2, soma, w,x,y,z;
	scanf("Dia %d\n",&dia);
	scanf("%d : %d : %d\n",&hora,&minuto,&segundo);
	scanf("Dia %d\n",&diaf);
	scanf("%d : %d : %d",&horaf,&minutof,&segundof);
	
	if(horaf>=hora){
		w = diaf - dia;
		segundototal = (hora*3600) + (minuto*60) + segundo;
		segundototal2 = (horaf*3600) + (minutof*60) + segundof;
		soma = segundototal2-segundototal;
		x = soma/3600;
		y = (soma%3600)/60;
		z = (soma%3600)%60;
		printf("%d dia(s)\n",w);
		printf("%d hora(s)\n",x);
		printf("%d minuto(s)\n",y);
		printf("%d segundo(s)\n",z);
		
	}else if(horaf<hora){
		w = diaf - dia - 1;
		segundototal = (hora*3600) + (minuto*60) + segundo;
		segundototal2 = (86400) + (horaf*3600) + (minutof*60) + segundof;
		soma = segundototal2-segundototal;
		x = soma/3600;
		y = (soma%3600)/60;
		z = (soma%3600)%60;
		printf("%d dia(s)\n", w);
		printf("%d hora(s)\n", x);
		printf("%d minuto(s)\n", y);
		printf("%d segundo(s)\n", z);
 }
	
	return 0;
}
