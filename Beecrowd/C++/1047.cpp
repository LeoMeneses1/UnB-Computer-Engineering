/*
 * Beecrowd - Problema 1047 - Tempo de Jogo com Minutos
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1047
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int hi,mi,hf,mf;
	cin >> hi >> mi >> hf >> mf;
	
	int totali = hi * 60 + mi;
	int totalf = hf * 60 + mf;
	
	int duracao,hora,minuto;
	if(totali < totalf){
		duracao = totalf - totali;
		hora = duracao / 60;
		minuto = duracao % 60;
		cout << "O JOGO DUROU "<< hora << " HORA(S) E " << minuto << " MINUTO(S)\n";
		
	}else if(totali > totalf){
		duracao = totalf - totali + 1440;
		hora = duracao / 60;
		minuto = duracao % 60;
		cout << "O JOGO DUROU "<< hora << " HORA(S) E " << minuto << " MINUTO(S)\n";
		
	}else{
		cout <<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
	}
	return 0;
}

