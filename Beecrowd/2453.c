/*
 * Beecrowd - Problema 2453 - Lingua do P
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2453
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <string.h>

int main(){
    char texto[5000];
    int n,i;
    scanf("%[^\n]",texto);

    n = strlen(texto);

    for(i=0; i<n;){
        if(texto[i] == ' '){
            printf("%c", texto[i]);
            i++;
        }else{
            printf("%c",texto[i+1]);
            i+=2;
        }
        
    }
    printf("\n");

    return 0;
}
