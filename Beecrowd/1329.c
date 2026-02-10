/*
 * Beecrowd - Problema 1329 - Cara ou Coroa
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1329
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    int x,y,n,r,i;
    int v[20000];
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
    }
    
        x = 0;
        y = 0;
        for(i=0; i<n; i++){
            scanf("%d",&v[i]);
            if(v[i] == 0){
                x++;
            }else{
                y++;
            }
        }
        printf("Mary won %d times and John won %d times\n",x,y);
    }
    
    return 0;
}
