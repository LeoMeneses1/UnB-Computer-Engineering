/*
 * Beecrowd - Problema 1158 - Soma de Impares Consecutivos III
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1158
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int x,y;
		cin >> x >> y;
		int soma = 0;
		for(int j=0; j<y; j++){
			if(x%2!=0){
				soma += x;
				x+=2;
			}else{
				x++;
				j--;
			}
		}
		cout << soma << endl;
	}

	return 0;
}

