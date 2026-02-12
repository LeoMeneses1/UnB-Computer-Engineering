/*
 * Beecrowd - Problema 3454 - Alice no Pais do Jogo da Velha
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/3454
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    
    if(a!='X'){
    	printf("?\n");
    
    }else{
    	if(a=='X' && b=='X'){
    		printf("Alice\n");
    		
    	}else if(b=='O' && c=='O'){
    		printf("*\n");
    	
    	}else if (b=='O' && c=='X'){
    		printf("*\n");
    	
    	}else{
    		printf("?\n");
    		
    	}
    
    }

     return 0;
}
