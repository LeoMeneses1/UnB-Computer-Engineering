/*
 * Beecrowd - Problema 1113 - Crescente e Decrescente
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1113
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x,y;
	while(1){
		cin >> x >> y;
		if(x == y) 
			break;
		if(x > y)
			cout << "Decrescente\n";
		else
			cout << "Crescente\n"; 	
	}
	return 0;
}

