/*
 * Beecrowd - Problema 1157 - Divisores I
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1008
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		if(n%i==0) cout << i << endl;
	}
	return 0;
}

