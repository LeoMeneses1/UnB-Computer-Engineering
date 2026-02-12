/*
 * Beecrowd - Problema 1961 - Pula Sapo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1961
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,p,i;
    scanf("%d %d",&p, &n);
    int v[n];

    for(i=0; i<n; i++){
        scanf("%d",&v[i]);
    }
    int certo = 1;
    for(i=0; i<n-1; i++){
        if(abs(v[i] - v[i+1]) > p){
            certo = 0;
            break;
        }

    }
    if(certo){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }
    return 0;
}
