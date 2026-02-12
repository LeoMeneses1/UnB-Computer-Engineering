/*
 * Beecrowd - Problema 1048 - Aumento de Salario
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1048
 * * Autor: Leonardo Meneses
 */

#include <stdio.h>

int main(){
	float s,salario,reajuste;
	scanf("%f",&s);
	
	if(s<=400.00){
		salario = s + s * 15 / 100;
		reajuste = salario - s;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 15 %%\n");
		
	}else if(s>400.00 && s<=800.00){
		salario = s + s * 12 / 100;
		reajuste = salario - s;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 12 %%\n");
		
	}else if(s>800.00 && s<=1200.00){
		salario = s + s * 10 / 100;
		reajuste = salario - s;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 10 %%\n");
		
	}else if(s>1200.00 && s<=2000.00){
		salario = s + s * 7 / 100;
		reajuste = salario - s;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 7 %%\n");
		
	}else if(s>2000.00){
		salario = s + s * 4 / 100;
		reajuste = salario - s;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 4 %%\n");
	}
	
	return 0;
}
