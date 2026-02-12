/*
 * Beecrowd - Problema 1041 - Coordenadas de um Ponto
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1041
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double x,y;
	cin >> x >> y;
	if(x == 0 && y == 0){
		cout << "Origem\n";
	}else if(x > 0 && y < 0){
		cout << "Q4\n";
	}else if(x < 0 && y > 0){
		cout << "Q2\n";
	}else if(x < 0 && y < 0){
		cout << "Q3\n";
	}else if(x > 0 && y > 0){
		cout << "Q1\n";
	}else if(x == 0 && y != 0){
		cout << "Eixo Y\n";
	}else if(x != 0 && y == 0){
		cout << "Eixo X\n";
	}
	return 0;
}

