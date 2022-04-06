#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int idade;
  float peso;
  float altura;
}Atleta;

int main(void) {
  Atleta *A1;
  A1 = malloc(sizeof(Atleta));

  A1 -> idade = 22;
  A1 -> peso = 55.98;
  A1 -> altura = 1.68;

  printf("ATLETA 1\n%d, %.2f, %.2f", A1 -> idade, A1 -> peso, A1 -> altura);
  
  Atleta *A2;
  A2 = malloc(sizeof(Atleta));

  A2 -> idade = 58;
  A2 -> peso = 45.1;
  A2 -> altura = 1.53;

  printf("\nATLETA 2\n%d, %.2f, %.2f", A2 -> idade, A2 -> peso, A2 -> altura);
  
  Atleta *A3;
  A3 = malloc(sizeof(Atleta));

  A3 -> idade = 13;
  A3 -> peso = 38.1;
  A3 -> altura = 1.34;

  printf("\nATLETA 3\n%d, %.2f, %.2f", A3 -> idade, A3 -> peso, A3 -> altura);

  free(A1);
  free(A2);
  free(A3);
  return 0;
}
