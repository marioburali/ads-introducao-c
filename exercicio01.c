#include <stdio.h>

int main() {
  int idade;
  float altura;
  char nome[50];
  int matricula;

  printf("Digite seu nome: ");
  scanf("%49s", nome);
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite sua altura (em metros): ");
  scanf("%f", &altura);
  printf("Digite sua matrícula: ");
  scanf("%d", &matricula);
  printf("\n--- Dados Informados ---\n");
  printf("Nome: %s\n", nome);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2f metros\n", altura);
  printf("Matrícula: %d\n", matricula);
  return 0;
}
