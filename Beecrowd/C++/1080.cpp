/*
 * Beecrowd - Problema 1080 - Maior e Posicao
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1080
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	int maior = 0;
	int posicao = 0;
	for(int i=1; i<=100; i++){
		cin >> n;
		if(n > maior){
			maior = n;
			posicao = i;
		}
	}
	cout << "" << maior << "\n";
	cout << "" << posicao << "\n";
	return 0;
}

