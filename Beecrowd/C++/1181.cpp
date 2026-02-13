/*
 * Beecrowd - Problema 1181 - Linha na Matriz
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1181
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
	for(int j=0; j<12; j++){
		soma += m[l][j];
	}
	
	cout << fixed << setprecision(1);
	if(t == 'S'){
		cout << soma << endl;
	}else{
		cout << soma/12.0 << endl;
	}
	return 0;
}

