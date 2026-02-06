#include <cstdio>
#include <cstdlib>

struct no{
	int valor;
	no* direita;
	no* esquerda;
};
void imprimiremordem(no*raiz);

no*criarno(int valor){
	no*novo=(no*)malloc (sizeof(no));
	novo->valor=valor;
	novo->esquerda=NULL;
	novo->direita=NULL;
	return novo;
}

no*inserir(no*raiz,int valor){
	if (raiz == NULL){
		return criarno(valor);
}
	if (valor<raiz->valor){
		raiz->esquerda=inserir(raiz->esquerda,valor);
	}else{
		raiz->direita=inserir(raiz->direita,valor);
	}
	return raiz;
	}

void imprimirArvore(no* raiz, int espaco) {
    if (raiz == NULL) return;
    espaco += 5;
    imprimirArvore(raiz->direita, espaco);
    printf("\n");
    for (int i = 5; i < espaco; i++) printf(" ");
    printf("%d\n", raiz->valor);
    imprimirArvore(raiz->esquerda, espaco);
}
int main() {
	no* raiz= NULL;
	int valores[]= {4, 2, 6, 1, 3, 5, 7};
	printf("Inserindo valores");
	
	for (int i=0;i<7;i++){
		raiz=inserir(raiz,valores[i]);
	}
	
	printf("Visualizacao da Arvore (Deitada):\n");
    printf("--------------------------------\n");
    imprimirArvore(raiz, 0);
    printf("--------------------------------\n");

    return 0;
	}
