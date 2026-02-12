/*
 * Beecrowd - Problema 1038 - Lanche
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1038
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    double codigo, quantidade;
    scanf("%lf %lf", &codigo, &quantidade);
    
    if(codigo == 1){
       quantidade = quantidade * 4.00;
       printf("Total: R$ %.2lf\n",quantidade);
       
    }else if(codigo == 2){
    	quantidade = quantidade * 4.50;
    	printf("Total: R$ %.2lf\n",quantidade);
    	
    }else if(codigo == 3){
    	quantidade = quantidade * 5.00;
    	printf("Total: R$ %.2lf\n",quantidade);
    
    }else if(codigo == 4){
    	quantidade = quantidade * 2.00;
    	printf("Total: R$ %.2lf\n",quantidade);
    	
    }else{
    	quantidade = quantidade * 1.50;
    	printf("Total: R$ %.2lf\n",quantidade);
    	
	}
    return 0;
}
