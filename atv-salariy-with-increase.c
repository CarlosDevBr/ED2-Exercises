#include <stdio.h>

int aumentoSalario(int *salario, char meta) {
	return *salario = *salario * 1.2;
}

int main(void) {
	int salario = 0, slrAtual;
	char meta;

	printf("Bateu a meta? [S/N]\n");
	scanf(" %c", &meta);
	
	if(meta = 'n'){
		printf("nao houve alteracao no salario.");
	} 
	else if (meta = 's') {
		printf("Digite o salario: ");
		scanf("%d", &salario);
	
		aumentoSalario(&salario, meta);
		
		printf("Salario : %d", salario);
	} 
	else {
		printf("Valor invalido.");	
	}

  return 0;
}
