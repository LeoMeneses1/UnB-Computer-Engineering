/*
 * Beecrowd - Problema 1182 - coluna na Matriz
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1182
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int l;
	char t;
	float m[12][12];
	cin >> l >> t;
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			cin >> m[i][j];
		}
	}
	
	float soma = 0.0;
	for(int i=0; i<12; i++){
		soma += m[i][l];
	}
	
	cout << fixed << setprecision(1);
	if(t == 'S'){
		cout << soma << endl;
	}else{
		cout << soma/12.0 << endl;
	}
	return 0;
}

