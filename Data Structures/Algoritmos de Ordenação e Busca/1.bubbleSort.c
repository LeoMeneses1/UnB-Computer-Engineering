#include <stdio.h>
#include <stdlib.h>

int bubbleSort(int v[10]){
	int i,j,backup;
	int comparacoes = 0;
	for(i=0; i<10-1; i++){
		for(j=0; j<9-i; j++){
			comparacoes++;
			if(v[j] > v[j+1]){
				backup = v[j];
				v[j] = v[j+1];
				v[j+1] = backup;
			}
		}
	}
	return comparacoes;
}

void imprimeVetor(int v[10]){
	int i;
	printf("[");
	for(i=0; i<10; i++){
		if(i == 9){
			printf("%d]\n",v[i]);
		}else{
			printf("%d ",v[i]);
		}
	}
}

int main(){
	int v[10] = {45, 9, 1, 5, 98, 77, 54, 66, 9, 25};
	printf("Seu vetor atual eh: ");
	imprimeVetor(v);
	
	int comparacoes = bubbleSort(v);
	
	printf("O vetor ordenado eh: ");
	imprimeVetor(v);
	printf("O numero de comparacoes foi: %d\n",comparacoes);
	return 0;
}

