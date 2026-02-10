/*
 * Beecrowd - Problema 1018 - Cedulas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1018
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	int dinheiro, cem, cinquenta, vinte, dez, cinco, dois, um;
	scanf("%d", &dinheiro);
	
	cem = dinheiro/100;
	cinquenta = (dinheiro%100)/50;
	vinte =  ((dinheiro%100)%50)/20;
	dez =  (((dinheiro%100)%50)%20)/10;
	cinco = ((((dinheiro%100)%50)%20)%10)/5;
	dois = (((((dinheiro%100)%50)%20)%10)%5)/2;
	um = ((((((dinheiro%100)%50)%20)%10)%5)%2)/1;
	
	printf("%d\n", dinheiro);
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n", cinquenta);
	printf("%d nota(s) de R$ 20,00\n", vinte);
	printf("%d nota(s) de R$ 10,00\n", dez);
	printf("%d nota(s) de R$ 5,00\n", cinco);
	printf("%d nota(s) de R$ 2,00\n", dois);
	printf("%d nota(s) de R$ 1,00\n", um);
	
	return 0;
}
