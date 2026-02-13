/*
 * Beecrowd - Problema 1173 - Preenchimento de Vetor I
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1173
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x,n[10];
	cin >> x;
	n[0] = x;
	for(int i=1; i<10; i++){
		n[i] = 2*n[i-1];
	}
	for(int i=0; i<10; i++){
		cout << "N[" << i << "] = " << n[i] << endl;
	}
	return 0;
}

