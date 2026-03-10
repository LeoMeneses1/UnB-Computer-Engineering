/*
 * Beecrowd - Problema 1023 - Estiagem!
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1023
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define ll long long


int main(){
	ios_base::sync_with_stdio(false); 	//desativa o printf e scanf para deixar o codigo mais rapido
	cout << fixed << setprecision(2);
	
	int n;
	int cidade = 1;
	while(cin >> n){
		if(n==0) break;
		if(cidade > 1) cout << endl;  	//da um \n antes de todos os casos, menos no primeiro
		int MC[201] = {0};				//vetor de media de consumo por pessoa;
		int TP = 0; 					//total de pessoas
		int TC = 0;						//total de consumo
		for(int i=0; i<n; i++){
			int x,y;
			cin >> x >> y;
			TP += x;
			TC += y;
			int CP = y/x;				//consumo por pessoa
			MC[CP] += x;				//ja ordeno o nivel de consumo
		}
		cout << "Cidade# " << cidade << ":" << endl;
		bool eh_primeiro = true;		//vou usar para colocar espaco antes de todos, menos no primeiro
		for(int i=0; i<201; i++){
			if(MC[i] != 0){
				if(!eh_primeiro) cout << " ";
				cout << MC[i] << "-" << i;
				eh_primeiro = false;
			}
		}
		double media = (double)TC / TP;
		media = trunc(media * 100.0) / 100.0;
		cout << "\nConsumo medio: " << media << " m3.\n";
		cidade++;
	}
	return 0;
}
