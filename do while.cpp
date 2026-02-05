#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int menu=0;
	
	do{
	printf("Digite o valor do menu: ");
	scanf("%d",&menu);
	}while(menu == 0 || menu < 0||menu > 6);
	
	switch(menu){
		case 1:
			printf("Valor 1");
		break ;
		case 2:
			printf("Valor 2");
		break ; 
		case 3:
			printf("Valor 3");
		break ;
		case 4:
			printf("Valor 4");
		break ;
		case 5:
			printf("Valor 5");
		break ;
		
		default:
		break;	
	}
	
	return 0;
}

