#include <stdio.h>
#include "Pilha.h"

int main(){
	Pilha *p = stack();
	isEmpty(p);
	push(p,10);
	push(p,20);
	push(p,4);
	push(p,14);
	push(p,50);
	push(p,41);
	
	printf("\n");
	isEmpty(p);
	
	imprimePilha(p);
	
	printf("O primeiro item da pilha eh %d",peek(p));
	
	pop(p);
	pop(p);
	pop(p);
	pop(p);
	pop(p);
	
	printf("\n");
	imprimePilha(p);
	
	return 0;
}
