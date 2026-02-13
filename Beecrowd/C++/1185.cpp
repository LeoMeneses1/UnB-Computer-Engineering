/*
 * Beecrowd - Problema 1185 - Acima da Diagonal Secundaria
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1185
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int l;
	char t;
	float m[12][12];
	cin >> t;
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			cin >> m[i][j];
		}
	}
	
	float soma = 0.0;
	for(int i=0; i<11; i++){
		for(int j=0; j<11-i; j++){
			soma += m[i][j];
		}
	}
	
	cout << fixed << setprecision(1);
	if(t == 'S'){
		cout << soma << endl;
	}else{
		cout << soma/66.0 << endl;
	}
	return 0;
}

