/*
 * Beecrowd - Problema 1010 - Calculo Simples
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1010
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int c1,c2,n1,n2;
	double v1,v2,total;
	cin >> c1 >> n1 >> v1;
	cin >> c2 >> n2 >> v2;
	
	total = n1*v1 + n2*v2;
	
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << total << endl;
	return 0;
}

