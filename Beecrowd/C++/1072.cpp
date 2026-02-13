/*
 * Beecrowd - Problema 1072 - Intervalo 2
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1072
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n,i,x;
	cin >> n;
	int in = 0;
	int out = 0;
	for(i=0; i<n; i++){
		cin >> x;
		if(x >= 10 && x <= 20){
			in++;
		}else{
			out++;
		}
	}
	cout << in << " in\n";
	cout << out << " out\n";
	return 0;
}

