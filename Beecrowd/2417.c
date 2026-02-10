/*
 * Beecrowd - Problema 2417 - Campeonato
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2417
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    int Cv,Ce,Cs,Fv,Fe,Fs,pontuacaoC,pontuacaoF;
    scanf("%d %d %d %d %d %d",&Cv,&Ce,&Cs,&Fv,&Fe,&Fs);	
    
    pontuacaoC = Cv*3+Ce;
    pontuacaoF = Fv*3+Fe;
    
    if(pontuacaoC > pontuacaoF){
    	printf("C\n");
    	
    }else if(pontuacaoF > pontuacaoC){
    	printf("F\n");
    	
    }else if(pontuacaoF == pontuacaoC){
    	if(Cs>Fs){
    		printf("C\n");
    		
    	}else if(Fs>Cs){
    		printf("F\n");
    		
    	}else{
    		printf("=\n");
    	
    	}
    }

    return 0;
}
