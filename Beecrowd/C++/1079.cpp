/*
 * Beecrowd - Problema 1079 - Medias Ponderadas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1079
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double n,n1,n2,n3;
	cin >> n;
	double media = 0.0;
	for(int i=0; i<n; i++){
		cin >> n1 >> n2 >> n3;
		media = (n1*2 + n2*3 + n3*5) / 10;
		cout << fixed << setprecision(1);
		cout << "" << media << "\n";
	}
	return 0;
}

