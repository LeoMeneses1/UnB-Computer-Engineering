/*
 * Beecrowd - Problema 1040 - Media 3
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1040
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
    double n1,n2,n3,n4,p1,p2,p3,p4,media;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    p1 = n1 * 2.00;
    p2 = n2 * 3.00;
    p3 = n3 * 4.00;
    p4 = n4;
    
    media = (p1+p2+p3+p4)/10;
    
    if(media >= 7.0){
    	printf("Media: %.1lf\n",media);
    	printf("Aluno aprovado.\n");
    	
    }else if(media < 5.0){
	printf("Media: %.1lf\n",media);
	printf("Aluno reprovado.\n");
	
    }else{
    	double prova_recuperacao, media_final;
    	scanf("%lf",&prova_recuperacao);
    	
    	media_final = (prova_recuperacao + media) / 2;
    	
    	if(media_final >= 5){
    	   printf("Media: %.1lf\n",media);
    	   printf("Aluno em exame.\n");
    	   printf("Nota do exame: %.1lf\n",prova_recuperacao);
    	   printf("Aluno aprovado.\n");
    	   printf("Media final: %.1lf\n",media_final);
    	   
    	}else{
			printf("Media: %.1lf\n",media);
    	   	printf("Aluno em exame.\n");
    	  	printf("Nota do exame: %.1lf\n",prova_recuperacao);
    	   	printf("Aluno reprovado.\n");
    	   	printf("Media final: %.1lf\n",media_final);  	
    	}
    }
    return 0;
}
