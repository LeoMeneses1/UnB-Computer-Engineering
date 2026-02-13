/*
 * Beecrowd - Problema 1075 - Resto 2
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1075
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<10000; i++){
		if(i%n==2) cout << "" << i << endl;
	}

	return 0;
}

