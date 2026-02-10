/*
 * Beecrowd - Problema 2807 - Iccanofib
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2807
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    int n,i;
    long long v[41] = {0};
    v[0] = 0;
    v[1] = 1;
    for(i=2; i<41; i++){
        v[i] = v[i-2]+v[i-1];
    }
    scanf("%d",&n);
    for(i=n; i>1; i--){
        printf("%lld ",v[i]);
    }
    printf("%lld\n",v[1]);
    return 0;
}
