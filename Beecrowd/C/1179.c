#include <stdio.h>

int main(){
	int i,n,pares,impares;
	int par[5],impar[5];
	
	pares = 0;
	impares = 0;
	
	for(i=0; i<15; i++){
		scanf("%d",&n);
		if(n%2==0){
			par[pares] = n;
			pares++;
	
		}else{
			impar[impares] = n;
			impares++;
		}
		if(pares==5){
			for(int j=0; j<5; j++){
			printf("par[%d] = %d\n",j,par[j]);
			}
			
			pares=0;
			
		}
		if(impares==5){
			for(int j=0; j<5; j++){
			printf("impar[%d] = %d\n",j,impar[j]);
			}
			
			impares = 0;
			
		}
		
	}
	
	for(int j=0; j<impares; j++){
		printf("impar[%d] = %d\n",j,impar[j]);
		
	}
	
	for(int j=0; j<pares; j++){
		printf("par[%d] = %d\n",j,par[j]);
	}
	
	
	return 0;
}
