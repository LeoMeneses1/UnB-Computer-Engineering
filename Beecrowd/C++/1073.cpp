/*
 * Beecrowd - Problema 1073 - Quadrado de Pares
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1073
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i,n;
	cin >> n;
	for(i=2; i<=n; i+=2){
		cout << i << "^2 = " << i*i << endl;
	}
	return 0;
}

