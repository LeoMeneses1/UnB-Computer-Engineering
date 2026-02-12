/*
 * Beecrowd - Problema 1009 - Salario com bonus
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1009
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double salario, vendas;
	string x;
	cin >> x >> salario >> vendas;
	
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << salario + (vendas * 0.15) << endl;
	return 0;
}

