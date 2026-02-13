/*
 * Beecrowd - Problema 1154 - Idades
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1154
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout << fixed << setprecision(2);
	int x;
	double n = 0.0; 
	double soma = 0.0;
	while(cin >> x){
		if(x < 0){
			cout << soma/n << endl;
			break;
		}
		soma += x;
		n++;
	}

	return 0;
}

