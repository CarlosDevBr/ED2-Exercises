#include <stdio.h>
#include <stdlib.h>

typedef struct noArvore {
 int valor;
 struct noArvore* esquerda;
 struct noArvore* direita;
}no;

void imprimePreOrdem(no* n){

    if( n != NULL){
        printf("%i ", n->valor);
        imprimePreOrdem(n->esquerda);
        imprimePreOrdem(n->direita);
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
	}// COMPLETAR O C�DIGO PARA INSERIR UMA ABB.
	// Obs: N�o permitir valores duplicados.
	// Obs2: Colocar cada n� em sua posi��o correta.
	else if(n->valor == valor){
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
	no* n = NULL;
	n = inserirNo(n, 9);
	n = inserirNo(n, 8);
	n = inserirNo(n, 10);
	printf("\n\nPRE-ORDEM\n");
	imprimePreOrdem(n);
	free(n);

}