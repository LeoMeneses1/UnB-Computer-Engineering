/*
 * Beecrowd - Problema 1179 - Preenchimento de Vetor IV
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1179
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int par[5], impar[5];
	int count_impar = 0;
	int count_par = 0;
	int n;
	for(int i=0; i<15; i++){
		cin >> n;
		if(n%2==0){
			par[count_par] = n;
			count_par++;
		}else{
			impar[count_impar] = n;
			count_impar++;
		}
		if(count_par == 5){
			for(int j=0; j<5; j++){
				cout << "par[" << j << "] = " << par[j] << endl; 
			}
			count_par = 0;
			
		}else if(count_impar == 5){
			for(int j=0; j<5; j++){
				cout << "impar[" << j << "] = " << impar[j] << endl; 
			}
			count_impar = 0;
		}
	}
	for(int i=0; i<count_impar; i++){
		cout << "impar[" << i << "] = " << impar[i] << endl;
	}
	for(int i=0; i<count_par; i++){
		cout << "par[" << i << "] = " << par[i] << endl;
	}
	return 0;
}

