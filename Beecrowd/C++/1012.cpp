/*
 * Beecrowd - Problema 1012 - Area
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1012
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	
	double triangulo = a*c/2;
	double circulo = pi*c*c;
	double trapezio = (a+b) * c/2;
	double quadrado = b*b;
	double retangulo = a*b;
	
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << triangulo << endl;	
	cout << "CIRCULO: " << circulo << endl;
	cout << "TRAPEZIO: " << trapezio << endl;
	cout << "QUADRADO: " << quadrado << endl;
	cout << "RETANGULO: " << retangulo << endl;
	return 0;
}

