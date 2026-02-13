/*
 * Beecrowd - Problema 1096 - Sequencia IJ 2
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1096
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	for(int i=1; i<=9; i+=2){
		for(int j=7; j>=5; j--){
			cout << "I=" << i << " J=" << j << endl;
		}
	}
	return 0;
}

