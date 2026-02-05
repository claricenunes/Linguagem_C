#include <stdio.h>
#include <stdlib.h>

void clarice (int x);

int main(){
	
	int x;
	
	printf("Valor de X: ");
	scanf("%d",&x);
	
	clarice (x);

	return 0;
}

void clarice (int x){
	
	int ct_primos =0;
	
	for(int i=1 ; i<=x ; i++){
		printf("\n\tIndice: %d",i);
	
		if( x % i == 0){
		//ct_primos = ct_primos + 1;
		ct_primos += 1;
		}
	
	printf("\nValor de Primos: %d",ct_primos);
	
	};
	if(ct_primos > 2){
		printf("\nValor não e primo");
	
	}else{
		printf("\nValor Primo");
	};
}
