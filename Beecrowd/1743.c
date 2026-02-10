/*
 * Beecrowd - Problema 1743 - Maquina de Verificacao Automatizada
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1743
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    int entrada[6];
    int plug[6];
    int i;
    for(i=0; i<5; i++){
        scanf("%d",&entrada[i]);
    }
    for(i=0; i<5; i++){
        scanf("%d",&plug[i]);
    }
    int certo = 1;
    for(i=0; i<5; i++){
        if(entrada[i] == plug[i]){
            certo = 0;
            break;
        }

    }
    if(certo){
        printf("Y\n");
    }else{
        printf("N\n");
    }
    return 0;
}
