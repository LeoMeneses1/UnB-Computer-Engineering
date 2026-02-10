/*
 * Beecrowd - Problema 1134 - Tipo de Combustivel
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1134
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    int tipo,a,g,d;
    
    a=0;
    g=0;
    d=0;
    
    while(scanf("%d",&tipo)!=EOF){
    	if(tipo==1){
	   a++;

         }else if(tipo==2){
           g++;
         
         }else if(tipo==3){
           d++;
         
         }else if(tipo==4){
           break;
         
         }

    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);

    return 0;
}
