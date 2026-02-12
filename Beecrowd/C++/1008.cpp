/*
 * Beecrowd - Problema 1008 - Salario
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1008
 * * Autor: Leonardo Meneses
 */
 
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int number, hour;
	double value;
	cin >> number >> hour >> value;
	
	cout << fixed << setprecision(2);
	cout << "NUMBER = " << number << endl;
	cout << "SALARY = U$ " << value * hour << endl;
	return 0;
}
