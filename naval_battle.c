#include <stdio.h>

int main()
{
  int board[10][10];
  int i, j;

  // Inicializar tabuleiro com zeros (água)
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      board[i][j] = 0;
    }
  }

  // Posicionar navio 1 (horizontal) na linha 2, colunas 1-3
  for (i = 0; i < 3; i++)
  {
    board[2][1 + i] = 3;
  }

  // Posicionar navio 2 (vertical) na coluna 7, linhas 5-7
  for (i = 0; i < 3; i++)
  {
    board[5 + i][7] = 3;
  }

  // Exibir tabuleiro
  printf("TABULEIRO:\n\n");

  // Cabeçalho com colunas
  printf("   ");
  for (j = 0; j < 10; j++)
  {
    printf("%d ", j);
  }
  printf("\n");

  // Exibir linhas
  for (i = 0; i < 10; i++)
  {
    printf("%d: ", i);
    for (j = 0; j < 10; j++)
    {
      printf("%d ", board[i][j]);
    }
    printf("\n");
  }

  printf("\nLegenda: 0 = Agua | 3 = Navio\n");

  return 0;
}
