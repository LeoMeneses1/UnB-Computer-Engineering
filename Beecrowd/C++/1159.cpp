/*
 * Beecrowd - Problema 1159 - Soma de Pares Consecutivos
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1159
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		if(n%2!=0) n++;
		int soma = 0;
		for(int i=0; i<5; i++){
			soma += n;
			n+=2;
		}
		cout << soma << endl;
	}
	return 0;
}

