/*
 * Beecrowd - Problema 1097 - Sequencia IJ 3
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1097
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	for(int i=1; i<=9; i+=2){
		for(int j=i+6; j>=i+4; j--){
			cout << "I=" << i << " J=" << j << endl;
		}
	}
	return 0;
}

