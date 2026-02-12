/*
 * Beecrowd - Problema 1011 - Esfera
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1011
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159

int main(){
	double raio,area;
	cin >> raio;
	
	area = 4.0/3.0 * pi * raio*raio*raio;
	
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << area << endl;
	return 0;
}

