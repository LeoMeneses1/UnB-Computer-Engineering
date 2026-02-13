/*
 * Beecrowd - Problema 1175 - Troca em Vetor I
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1175
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n[20];
	int i,j;
	for(i=0; i<20; i++){
		cin >> n[i];
	}
	for(i=0, j=19; i<10; i++, j--){
		int backup = n[i];
		n[i] = n[j];
		n[j] = backup;
	}
	for(i=0; i<20; i++){
		cout << "N[" << i << "] = " << n[i] << endl;
	}

	return 0;
}

