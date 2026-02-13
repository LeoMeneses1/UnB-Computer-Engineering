/*
 * Beecrowd - Problema 1155 - Sequencia S
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1155
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double s=0;
	for(double i=1; i<=100; i++){
		s += 1/i;
	}
	cout << fixed << setprecision(2);
	cout << s << endl;
	return 0;
}

