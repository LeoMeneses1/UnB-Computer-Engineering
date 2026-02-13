/*
 * Beecrowd - Problema 1095 - Sequencia IJ 1
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1095
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int I = 1;
	int J = 60;
	while(J >= 0){
		cout << "I=" << I << " J=" << J << endl;
		I+=3; J-=5;
	}

	return 0;
}

