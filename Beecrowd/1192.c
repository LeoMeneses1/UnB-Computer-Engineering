/*
 * Beecrowd - Problema 1192 - O Jogo Matematico de Paula
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1192
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <string.h>

int main(){
    int n,i;
    char digito[100];
    while(scanf("%d",&n) != EOF){
        for(i=0; i<n; i++){
            scanf("%s",digito);
            getchar();
            int x,y;
            x = digito[0]-48;
            y = digito[2]-48;
            if(x == y){ 
                printf("%d\n",x*y);
            }else{
                if(digito[1] <= 122 && digito[1] >= 97){
                    printf("%d\n",y+x);
                }else{
                    printf("%d\n",y-x);
                }
            }
        }
    }

    return 0;
}
