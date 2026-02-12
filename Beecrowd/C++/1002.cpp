/*
 * Beecrowd - Problema 1002 - Area do Circulo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1002
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>

using namespace std;

#define n 3.14159;

int main(){
	double raio, area;
	cin >> raio;
	
	area = raio * raio * n;
	
	cout << fixed << setprecision(4);
	cout << "A=" << area << endl;
	return 0;
}

