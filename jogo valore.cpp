#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numero = 5;
	int palpite;
	
	
	printf("Tente adivinhar o numero : ");
	scanf("%d", &palpite);
	
	while (palpite != numero){
	
		printf("\nPalpite errado");
		
		if (palpite>numero) {
			printf("\nPalpite muito alto");
		}
		else{
			printf("\nPalpite muito baixo");
		}
	
	printf("\nTente novamente: ");
	scanf("%d", &palpite);

}

	printf("Parabens!");
	
	return 0;
}
