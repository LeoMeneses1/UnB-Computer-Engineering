/*
 * Beecrowd - Problema 1099 - Soma de Impares Consecutivos II
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1099
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <algorithm>  //biblioteca que usa o swap
using namespace std;

int main(){
	int n,i,x,y;
	cin >> n;
	for(i=0; i<n; i++){
		int soma = 0;
		cin >> x >> y;
		if(x > y) swap(x,y);
		for(int j=x+1; j<y; j++){
			if(j%2!=0){
				soma+=j;
			}
		}
		cout << "" << soma << endl;
	}
	return 0;
}

