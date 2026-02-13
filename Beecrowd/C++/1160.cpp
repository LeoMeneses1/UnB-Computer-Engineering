/*
 * Beecrowd - Problema 1160 - Crescimento Populacional
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1160
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int t,pa,pb;
	double g1,g2;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> pa >> pb >> g1 >> g2;
		int anos = 0;
		while(pa <= pb){
			pa = pa+(g1/100 * pa);
			pb = pb+(g2/100 * pb);
			anos++;
			if(anos > 100) break;
		}
		if(anos > 100)
			cout << "Mais de 1 seculo.\n";
		else
		cout << anos << " anos.\n";
	}

	return 0;
}

