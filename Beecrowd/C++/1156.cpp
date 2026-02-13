/*
 * Beecrowd - Problema 1156 - Sequencia S II
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1156
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double s=1;
	double i,j;
	for(i=3, j=2; i<=39; i+=2, j=2*j){
		s += i/j;
	}
	cout << fixed << setprecision(2);
	cout << s << endl;
	return 0;
}

