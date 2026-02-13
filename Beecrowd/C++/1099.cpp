/*
 * Beecrowd - Problema 1099 - Soma de Impares Consecutivos II
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1099
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int maior(int a, int b){
	if(a > b) return a;
	else return b;
}

int menor(int a, int b){
	if(a < b) return a;
	else return b;
}

int main(){
	int n,i,x,y;
	cin >> n;
	for(i=0; i<n; i++){
		int soma = 0;
		cin >> x >> y;
		
		int X = menor(x,y);
		int Y = maior(x,y);
		for(int j=X+1; j<Y; j++){
			if(j%2!=0){
				soma+=j;
			}
		}
		cout << "" << soma << endl;
	}
	return 0;
}

