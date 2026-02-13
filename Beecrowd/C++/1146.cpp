/*
 * Beecrowd - Problema 1146 - Sequencias Crescentes
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1146
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x;
	while(cin >> x){
		if(x == 0) break;
		for(int i=1; i<=x; i++){
			if(i == x){
				cout << i << endl;
			}else{
				cout << i << " ";
			}
		}
	}
	return 0;
}

