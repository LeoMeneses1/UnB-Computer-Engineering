/*
 * Beecrowd - Problema 1172 - Substituicao em vetor I
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1072
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x[10];
	for(int i=0; i<10; i++){
		cin >> x[i];
		if(x[i] <= 0) x[i] = 1;
		cout << "X[" << i << "] = " << x[i] << endl;
	}

	return 0;
}

