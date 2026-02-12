#include <stdio.h>

int main(int argc, char const *argv[])
{
  int torre = 0;
  int bispo = 0;
  int rainha = 0;

  printf("Movimento da Torre: \n");

  while (torre < 5)
  {
    printf("Direita \n");
    torre++;
  }

  printf("\nMovimento do Bispo: \n");

  do
  {
    printf("Cima, Direita - Diagonal \n");
    bispo++;
  } while (bispo < 5);

  printf("\nMovimento da Rainha: \n");
  for (rainha = 0; rainha < 8; rainha++)
  {
    printf("Esquerda \n");
  }

  return 0;
}
