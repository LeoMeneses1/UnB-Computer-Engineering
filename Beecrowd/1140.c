/*
 * Beecrowd - Problema 1140 - Flores Florescem da Franca
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1140
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <string.h>

int main(){
	int i,n,yes,letra1,letra2;
	char str[8000],letra;
	while(scanf("%[^\n]",str)!=EOF){
		getchar();
		if(strcmp(str, "*")==0){
			break;
		}
		
		n = strlen(str);
		yes=1;
		letra1 = str[0];
		if(letra1>='A' && letra1<='Z'){
			letra1 = letra1+32;
		}
		for(i=0; i<n; i++){
			if(str[i] == ' '){
				letra2 = str[i+1];
				if(letra2>='A' && letra2<='Z'){
					letra2 = letra2+32;
					if(letra2!=letra1){
						yes = 0;
						break;
					}
				}
			}
		}
		if(yes == 1){
			printf("Y\n");
		}else{
			printf("N\n");
		}
	}
	
	return 0;
}
