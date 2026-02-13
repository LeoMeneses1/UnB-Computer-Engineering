/*
 * Beecrowd - Problema 1078 - Tabuada
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1078
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=10; i++){
		cout << "" << i << " x " << n << " = " << n*i << endl; 
	}
	return 0;
}

