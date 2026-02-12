/*
 * Beecrowd - Problema 1007 - Diferenca
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1007
 * * Autor: Leonardo Meneses
 */

#include <iostream>

using namespace std;

int main(){
	int a,b,c,d,x;
	cin >> a >> b >> c >> d;
	
	x = (a*b) - (c*d);
	
	cout << "DIFERENCA = " << x << endl;
	return 0;
}
