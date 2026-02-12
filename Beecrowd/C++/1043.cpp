/*
 * Beecrowd - Problema 1043 - Triangulo
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1043
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(1);
	if(a >= b+c || b >= c+a || c >= a+b){
		cout << "Area = " << (a+b) * (c/2) << endl;
	}else{
		cout << "Perimetro = " << a+b+c << endl;
	}
	return 0;
}

