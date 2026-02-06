#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

int *alocacao (int qtd);
int main (){
	

	int menu=1;	
	int qtd;
	
	printf("\nDigite a quantidade de valores : ");
	scanf("%d", &qtd);
	
	int *ponteiro = alocacao(qtd); 	
	
	do {
	
	int idx, val;
		
	printf("\nDigite um valor para o indice entre 0 e %d : ",qtd-1);
	scanf("%d",&idx);
	
	if (idx>=0&&idx<qtd){
		printf("\nNo indice: %d\nDigite o valor: ", idx);
		scanf("%d",&val);
		
	ponteiro[idx] = val;
	
	}
	
	else {
		printf("\nErro");
	}
	
	printf("1 para ficar, 0 para sair : ");
	scanf("%d", &menu);
	
	}while (menu==1);

	
	for (int i=0;i<qtd;i++){
		printf("Endereco : %p \nEspaco %d = %d\n", (void *)&ponteiro[i],i,ponteiro[i]);
	}
	
	free (ponteiro);
	
	return 0;
}

int *alocacao (int qtd){
	
	int *ponteiro = (int*) malloc (qtd*sizeof(int));
	
	if (ponteiro == NULL){
		printf("\nErro na alocacao de memoria.");
		exit(1);
	}
	
	return ponteiro;
	
}


