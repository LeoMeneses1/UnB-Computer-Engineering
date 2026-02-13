/*
 * Beecrowd - Problema 1096 - Sequencia IJ 2
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1096
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i=1;
	int j=7;
	while(j >= 5){
		cout << "I=" << i << " J=" << j << endl;
		j--;
		if(i==9 && j==4) break;
		
		if(j==4){
			j=7;
			i+=2;
		}
	}
	return 0;
}

