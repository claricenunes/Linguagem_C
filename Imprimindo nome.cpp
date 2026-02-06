#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char nome[50];

printf("Digite seu nome: ");
scanf("%s",&nome);

//printf("\n%s Primeiro elemento: %c", nome, nome[0] );


switch (nome[0]){
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'I':
	case 'i':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("\nO nome comeca com uma vogal");
		break;
		
	default:
		printf("\nO nome comeca com uma consoante");
		break;
		
		
	break;
}	

	return 0;
}



