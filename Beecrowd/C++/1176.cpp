/*
 * Beecrowd - Problema 1176 - Fibonacci em Vetor
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1176
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long long int t, fib[61];
	fib[0] = 0;
	fib[1] = 1;
	for(int i=2; i<61; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	cin >> t;
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		cout << "Fib(" << n << ") = " << fib[n] << endl;
	}

	return 0;
}

