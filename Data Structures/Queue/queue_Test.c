#include <stdio.h>
#include "Fila.h"

int main(){
	Fila *f = queue();
	if(f != NULL){
		printf("A fila foi criada\n\n");
		
	}else{
		return 0;
		
	}
	
	enqueue(f, 10);
	enqueue(f, 20);
	enqueue(f, 30);
	enqueue(f, 40);
	
	imprimeFila(f);
	
	dequeue(f);
	dequeue(f);
	
	imprimeFila(f);
	
	enqueue(f, 10);
	imprimeFila(f);
	
	printf("\n");
	
	printf("o primeiro valor da fila eh %d\n\n",front(f));
	
	if(isEmpty(f) == 0){
		printf("A lista contem elementos\n");
		
	}else{
		printf("A lista esta vazia\n\n");
		
	}
	
	printf("A quantidade de elementos eh %d\n\n",size(f));
	
	printf("-----depois da mudanca-----\n\n");
	dequeue(f);
	dequeue(f);
	dequeue(f);
	
	if(isEmpty(f) == 0){
		printf("A lista contem elementos\n");
		
	}else{
		printf("A lista esta vazia\n\n");
		
	}
	
	printf("A quantidade de elementos eh %d\n\n",size(f));
		
	return 0;
}
