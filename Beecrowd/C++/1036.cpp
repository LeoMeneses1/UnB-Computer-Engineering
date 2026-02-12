/*
 * Beecrowd - Problema 1036 - Formula de Bhaskara
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1036
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	if((b*b) - (4*a*c) < 0 || a == 0){
		cout << "Impossivel calcular\n";
	}else{
		double r1, r2;
		r1 = (-b + sqrt((b*b) - (4*a*c))) / (2 * a);
		r2 = (-b - sqrt((b*b) - (4*a*c))) / (2 * a);
		cout << fixed << setprecision(5);
		cout << "R1 = " << r1 << endl;
		cout << "R2 = " << r2 << endl;	
	}
	return 0;
}

