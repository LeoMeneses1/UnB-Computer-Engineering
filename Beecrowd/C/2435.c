/*
 * Beecrowd - Problema 2435 - Corrida
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2435
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    float N,D,V,N1,D1,V1,T,T1;
    scanf("%f %f %f",&N,&D,&V);
    scanf("%f %f %f",&N1,&D1,&V1);
    
    T = D/V;
    T1 = D1/V1;
    
    if(T<T1){
    	printf("%.0f\n",N);
    
    }else if(T>T1){
    	printf("%.0f\n",N1);
    
    }

    return 0;
}
