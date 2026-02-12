/*
 * Beecrowd - Problema 2712 - Rodizio Veicular
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2712
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <string.h>

int main(){
	int i,n,j,nao;
	char str[101];
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%s",str);
		j=strlen(str);
		nao=0;
		
		if(j!=8){
			nao++;
			
			}if(str[0]<65 || str[0]>90){
				nao++;
				
			}if(str[1]<65 || str[1]>90){
				nao++;
				
			}if(str[2]<65 || str[2]>90){
				nao++;
				
			}if(str[3]!='-'){
				nao++;

			}if(str[4]<48 || str[4]>57){
				nao++;

			}if(str[5]<48 || str[5]>57){
				nao++;

			}if(str[6]<48 || str[6]>57){
				nao++;

			}if(str[7]<48 || str[7]>57){
				nao++;
			}
		
		if(nao!=0){
			printf("FAILURE\n");
				
		}else{
			if(str[7]==49 || str[7]==50){
			printf("MONDAY\n");
		
			}else if(str[7]==51 || str[7]==52){
			printf("TUESDAY\n");
			
			}else if(str[7]==53 || str[7]==54){
			printf("WEDNESDAY\n");
			
			}else if(str[7]==55 || str[7]==56){
			printf("THURSDAY\n");
			
			}else if(str[7]==57 || str[7]==48){
			printf("FRIDAY\n");
			
			}
		
		}
	
	}
		
	
	return 0;
}
