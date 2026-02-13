/*
 * Beecrowd - Problema 1116 - Dividindo X por Y
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1116
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double n,x,y;
	cin >> n;
	
	cout << fixed << setprecision(1);
	for(int i=0; i<n; i++){
		cin >> x >> y;
		if(y==0) 
			cout << "divisao impossivel\n";
		else 
			cout << "" << x/y << endl;	
	}
	return 0;
}

