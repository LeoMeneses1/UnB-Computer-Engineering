/*
 * Beecrowd - Problema 1006 - Media 2
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1006
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a,b,c,m;
	cin >> a >> b >> c;
	
	m = (a*2 + b*3 + c*5) / 10;
	
	cout << fixed << setprecision(1);
	cout << "MEDIA = " << m << endl;
	return 0;
}
