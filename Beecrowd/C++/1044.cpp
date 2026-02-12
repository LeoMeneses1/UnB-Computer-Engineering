/*
 * Beecrowd - Problema 1044 - Multiplos
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1044
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(a%b == 0 || b%a == 0) cout << "Sao Multiplos\n";
	else cout << "Nao sao Multiplos\n";
	return 0;
}

