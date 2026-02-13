/*
 * Beecrowd - Problema 1150 - Ultrapassando Z
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1150
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x,z;
	cin >> x >> z;
	while(z <= x) cin >> z;
	
	int soma = 0;
	int numeros = 0;
	while(soma <= z){
		soma+=x;
		x++; 
		numeros++;
	}
	cout << numeros << endl;
	return 0;
}

