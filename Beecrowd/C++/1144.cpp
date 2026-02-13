/*
 * Beecrowd - Problema 1144 - Sequencia Logica
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1144
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long long n;
	cin >> n;
	for(long long i=1; i<=n; i++){
		cout << i << " " << i*i << " " << i*i*i << endl;
		cout << i << " " << i*i+1 << " " << i*i*i+1 << endl;
	}

	return 0;
}

