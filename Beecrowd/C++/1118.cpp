/*
 * Beecrowd - Problema 1118 - Varias Notas com Validacao
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1118
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout << fixed << setprecision(2);
	int calculo = 1;
	while(calculo == 1){
		double x,media;
		double nota = 0.0;
		int val = 0;
		while(val < 2){
			cin >> x;
			if(x < 0 || x > 10){
				cout << "nota invalida\n";
			}else{
				val++;
				nota+=x;
			}
		}
		media = nota/2.0;
		cout << "media = " << media << endl;
		cout << "novo calculo (1-sim 2-nao)\n";
		cin >> calculo;
		while(calculo != 1 && calculo != 2){
			cout << "novo calculo (1-sim 2-nao)\n";
			cin >> calculo;
		}
	}
	return 0;
}

