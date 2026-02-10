/*
 * Beecrowd - Problema 2690 - Nova Senha RA
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2690
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n,i,j;
	char str[566];
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf(" %[^\n]",str);
		int numDigitos = 0;
		for(j=0; j<strlen(str); j++){
			if(str[j] == 'G' || str[j] == 'Q' || str[j] == 'a' || str[j] == 'k' || str[j] == 'u'){
				printf("0");
				numDigitos++;
			}else if(str[j] == 'I' || str[j] == 'S' || str[j] == 'b' || str[j] == 'l' || str[j] == 'v'){
				printf("1");
				numDigitos++;
			}else if(str[j] == 'E' || str[j] == 'O' || str[j] == 'Y' || str[j] == 'c' || str[j] == 'm' || str[j] == 'w'){
				printf("2");
				numDigitos++;
			}else if(str[j] == 'F' || str[j] == 'P' || str[j] == 'Z' || str[j] == 'd' || str[j] == 'n' || str[j] == 'x'){
				printf("3"); 
				numDigitos++;
			}else if(str[j] == 'J' || str[j] == 'T' || str[j] == 'e' || str[j] == 'o' || str[j] == 'y'){
				printf("4");
				numDigitos++;
			}else if(str[j] == 'D' || str[j] == 'N' || str[j] == 'X' || str[j] == 'f' || str[j] == 'p' || str[j] == 'z'){
				printf("5");
				numDigitos++;
			}else if(str[j] == 'A' || str[j] == 'K' || str[j] == 'U' || str[j] == 'g' || str[j] == 'q'){
				printf("6");
				numDigitos++;
			}else if(str[j] == 'C' || str[j] == 'M' || str[j] == 'W' || str[j] == 'h' || str[j] == 'r'){
				printf("7");
				numDigitos++;
			}else if(str[j] == 'B' || str[j] == 'L' || str[j] == 'V' || str[j] == 'i' || str[j] == 's'){
				printf("8");
				numDigitos++;
			}else if(str[j] == 'H' || str[j] == 'R' || str[j] == 'j' || str[j] == 't'){
				printf("9");
				numDigitos++;
			}
			if(numDigitos == 12) break;
		}
		printf("\n");
	}
	return 0;
}

