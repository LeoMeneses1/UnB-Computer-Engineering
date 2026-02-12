/*
 * Beecrowd - Problema 1005 - Media 1
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1005
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double n1,n2,m;
	cin >> n1 >> n2;
	
	m = (n1*3.5 + n2*7.5) / 11;
	
	cout << fixed << setprecision(5);
	cout << "MEDIA = " << m << endl;
	return 0;
}
