#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int valor;
  struct Arvore *esquerda;
  struct Arvore *direita;
}Arvore;

void pre_ordem(Arvore *no){
	printf("Valor Nó Raiz: %i\n", no->valor);
	if (no->esquerda != NULL){
		pre_ordem(no->esquerda);
	}
	if (no->direita != NULL){
		pre_ordem(no->direita);
	}
}

void em_ordem(Arvore *no){
	if (no->esquerda != NULL){
		pre_ordem(no->esquerda);
	}
	printf("Valor Nó Raiz: %i\n", no->valor);
	if (no->direita != NULL){
		pre_ordem(no->direita);
	}
}

void pos_ordem(Arvore *no){
	if (no->esquerda != NULL){
		pre_ordem(no->esquerda);
	}
	if (no->direita != NULL){
		pre_ordem(no->direita);
	}
	printf("Valor Nó Raiz: %i\n", no->valor);
}

int main(void) {
	Arvore *n1;
	n1 = malloc(sizeof(Arvore));
	
	n1 ->valor = 5;
	
	Arvore *n2;
	n2 = malloc(sizeof(Arvore));
	
	n2 -> valor = 9;
	n1 -> esquerda = n2;
	n2 -> esquerda = NULL;
	
	Arvore *n3;
	n3 = malloc(sizeof(Arvore));
	
	n3 -> valor = 15;
	n1 -> direita = n3;
	n3 -> esquerda = NULL;
	
	Arvore *n4;
	n4 = malloc(sizeof(Arvore));
	
	n4 -> valor = 21;
	n2 -> direita = n4;
	n4 -> esquerda = NULL;
	n4 -> direita = NULL;
	
	Arvore *n5;
	n5 = malloc(sizeof(Arvore));
	
	n5 -> valor = 39;
	n3 -> direita = n5;
	n5 -> esquerda = NULL;
	n5 -> direita = NULL;	
	
	printf("Ordem pre ordem: \n");
	pre_ordem(n1);
	printf("Ordem em ordem: \n");
	em_ordem(n1);
	printf("Ordem pos ordem: \n");
	pos_ordem(n1);
	
	return 0;
}
