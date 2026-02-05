#include <stdio.h>
#include <stdlib.h>

void verifica(int x);

int main () {
	
	int i, x;
	printf("Digite o valor :");
	scanf("%d",&x);
	
	for (i=0; i<=x; i++){
	
	}
	
	verifica(x);
	
	return 0;
}

void verifica(int x){
	int i, ct_primos = 0;

	for (i=1;i<=x;i++){
		printf("\nIndice: %d",i);
		if (x%i==0){
			ct_primos += 1;
			printf(" ct_primos = %d\n",ct_primos);
		}
	}

	
	if (ct_primos == 2){
		printf("\nPrimo");
	}else{
		printf("\nNao primo");
	
	}


}
