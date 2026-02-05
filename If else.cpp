#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int val1=0, val2=0;
	
	printf("Digite o Valor de 1: ");
	scanf("%d",&val1);
	printf("Digite o valor de 2: ");
	scanf("%d",&val2);
	//scanf("%d %d",&val1,&val2);
	
	//printf("Val1: %d \nVal2: %d",val1,val2);
	
	int soma=0;
	//int soma = val1 + val2;
	soma = val1 + val2;
	
	printf("Valor da Soma: %d",soma);
	if(soma%2 == 0){
		printf("Par");
	
	}else if(soma == 444){
		printf("Valor= 444");
	}
	
	else
		printf("Impar");

	return 0;}

