#include <stdio.h>
#include <stdlib.h>

struct noArvore {
 int valor;
 struct noArvore* esquerda;
 struct noArvore* direita;
};

typedef struct noArvore no;

void imprimePreOrdem(no* n){

    if( n != NULL){
        printf("%i ", n->valor);
        imprimePreOrdem(n->esquerda);
        imprimePreOrdem(n->direita);
   }
}

void imprimeEmOrdem(no* n){

    if( n != NULL){

        imprimeEmOrdem(n->esquerda);
        printf("%i ", n->valor);
        imprimeEmOrdem(n->direita);
   }
}

void imprimePosOrdem(no* n){

    if( n != NULL){

        imprimePosOrdem(n->esquerda);
        imprimePosOrdem(n->direita);
        printf("%i ", n->valor);
   }
}

void buscarNo(no* n, int valorBuscado){
	if (n != NULL){
		if (valorBuscado == n->valor){
			printf("\nValor encontrado");
		}else if (valorBuscado < n->valor){
			buscarNo(n->esquerda, valorBuscado);
		}else if (valorBuscado > n->valor){
			buscarNo(n->direita, valorBuscado);
		}
	}else{
		printf("\n NAO ENCONTRADO");
	}
	
}
no* novoNo(int valor){
	no* novo =  (no*) malloc(sizeof(no));
	novo->valor = valor;
	novo->esquerda = NULL;
	novo->direita = NULL;
	return novo;
}

no* inserirNo(no* n, int valor){
	if (n == NULL){
		n =  novoNo(valor);
	}else if(n->valor == valor){
		printf(" ELEMENTO DUPLICADO");
		return n;
	}else if (valor < n->valor){
		if (n->esquerda == NULL){
			n->esquerda =  novoNo(valor);	
		}else{
			inserirNo(n->esquerda, valor);
		}
	}else if(valor > n->valor){
		if (n->direita == NULL){
			n->direita =  novoNo(valor);	
		}else{
			inserirNo(n->direita, valor);
		}
	}
	return n;
}

void main(){
	/*
    no* n =  (no*) malloc(sizeof(no));
	no* n1 = (no*) malloc(sizeof(no));
	no* n2 = (no*) malloc(sizeof(no));
	n->valor = 10;
	n1->valor = 20;
	n1->esquerda = NULL;
	n1->direita = NULL;
	
	n2->valor = 30;	
	n2->esquerda = NULL;
	n2->direita = NULL;
	
	n->esquerda = n1;
	n->direita = n2;
	*/
	no* n = NULL;
	n = inserirNo(n, 20);
	n = inserirNo(n, 10);
	n = inserirNo(n, 30);
	n = inserirNo(n, 25);
	n = inserirNo(n, 45);
	printf("%i ", n->valor);
    printf("\nPre-Ordem:");
    imprimePreOrdem(n);
     printf("\nEm-Ordem:");
    imprimeEmOrdem(n);
     printf("\nPos-Ordem:");
    imprimePosOrdem(n);
	buscarNo(n, 40);
	
	free(n);

}

