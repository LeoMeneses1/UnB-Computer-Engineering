/*
 * Beecrowd - Problema 1180 - Menor e Posicao
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1180
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	cin >> arr[0];
	int menor = arr[0];
	int posicao = 0;
	for(int i=1; i<n; i++){
		cin >> arr[i];
		if(arr[i] < menor){
			menor = arr[i];
			posicao = i;
		}
	}
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << posicao << endl;
	return 0;
}

