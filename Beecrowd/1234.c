/*
 * Beecrowd - Problema 1234 - Sentenca Dancante
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1234
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <string.h>

int main(){
	int i,n,maiuscula;
	char str[51],atual;
	while(scanf("%[^\n]",str)!=EOF){
		getchar();;
		n = strlen(str);
		maiuscula = 1;
		
		for(i=0; i<n; i++){
			atual = str[i];
			
			if(atual>='a' && atual<='z' || atual>='A' && atual<='Z'){
				if(maiuscula==1){
					if(atual >= 'A' && atual <= 'Z'){
						printf("%c",atual);
					}else{
						printf("%c",atual-32);
					}
			
				}else{
					if(atual >= 'A' && atual <= 'Z'){
						printf("%c",atual+32);
					}else{
						printf("%c",atual);
					}
				
				}
				maiuscula = !maiuscula;
			}else{
				printf("%c",atual);
			}
				
		}
	
	printf("\n");
	
	}
	
	return 0;
}
