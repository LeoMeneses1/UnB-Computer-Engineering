/*
 * Beecrowd - Problema 1060 - Números Positivos
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1060
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double i,n;
	int positivo = 0;
	for(i=0; i<6; i++){
		cin >> n;
		if(n > 0) positivo++;
	}
	cout << "" << positivo << " valores positivos\n";
	return 0;
}

