/*
 * Beecrowd - Problema 3068 - Meteoros
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3068
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    int teste = 1;
    int i,x,y,x1,x2,y1,y2,n;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=EOF){
        if(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0){
            break;
        }else{
            printf("Teste %d\n",teste);
            teste++;
        }
        scanf("%d",&n);
        int meteorito = 0;
        for(i=0; i<n; i++){
            scanf("%d %d",&x,&y);
            if(x >= x1 && x <= x2 && y <= y1 && y >= y2){
                meteorito++;
            }

        }
        printf("%d\n",meteorito);
    }

    return 0;
}
