#include <stdio.h>

int main()
{
  int board[10][10];
  int i, j;
  int row, col;
  int valid;

  // Inicializar tabuleiro com zeros (água)
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      board[i][j] = 0;
    }
  }

  // Posicionar navio 1 (horizontal) na linha 2, colunas 1-3
  printf("Posicionando Navio 1 (Horizontal)...\n");
  valid = 1;
  for (i = 0; i < 3; i++)
  {
    row = 2;
    col = 1 + i;
    // Validar limites
    if (row < 0 || row >= 10 || col < 0 || col >= 10)
    {
      printf("ERRO: Navio 1 fora dos limites na posicao [%d][%d]\n", row, col);
      valid = 0;
      break;
    }
    // Validar sobreposicao
    if (board[row][col] != 0)
    {
      printf("ERRO: Navio 1 sobrepoe outro navio na posicao [%d][%d]\n", row, col);
      valid = 0;
      break;
    }
  }
  if (valid)
  {
    for (i = 0; i < 3; i++)
    {
      board[2][1 + i] = 3;
    }
    printf("Navio 1 posicionado com sucesso!\n\n");
  }

  // Posicionar navio 2 (vertical) na coluna 7, linhas 5-7
  printf("Posicionando Navio 2 (Vertical)...\n");
  valid = 1;
  for (i = 0; i < 3; i++)
  {
    row = 5 + i;
    col = 7;
    // Validar limites
    if (row < 0 || row >= 10 || col < 0 || col >= 10)
    {
      printf("ERRO: Navio 2 fora dos limites na posicao [%d][%d]\n", row, col);
      valid = 0;
      break;
    }
    // Validar sobreposicao
    if (board[row][col] != 0)
    {
      printf("ERRO: Navio 2 sobrepoe outro navio na posicao [%d][%d]\n", row, col);
      valid = 0;
      break;
    }
  }
  if (valid)
  {
    for (i = 0; i < 3; i++)
    {
      board[5 + i][7] = 3;
    }
    printf("Navio 2 posicionado com sucesso!\n\n");
  }

  // Posicionar navio 3 (diagonal \) linhas 0-2, colunas 4-6
  printf("Posicionando Navio 3 (Diagonal \\)...\n");
  valid = 1;
  for (i = 0; i < 3; i++)
  {
    row = 0 + i;
    col = 4 + i;
    // Validar limites
    if (row < 0 || row >= 10 || col < 0 || col >= 10)
    {
      printf("ERRO: Navio 3 fora dos limites na posicao [%d][%d]\n", row, col);
      valid = 0;
      break;
    }
    // Validar sobreposicao
    if (board[row][col] != 0)
    {
      printf("ERRO: Navio 3 sobrepoe outro navio na posicao [%d][%d]\n", row, col);
      valid = 0;
      break;
    }
  }
  if (valid)
  {
    for (i = 0; i < 3; i++)
    {
      board[0 + i][4 + i] = 3;
    }
    printf("Navio 3 posicionado com sucesso!\n\n");
  }

  // Posicionar navio 4 (diagonal /) linhas 9-7, colunas 0-2
  printf("Posicionando Navio 4 (Diagonal /)...\n");
  valid = 1;
  for (i = 0; i < 3; i++)
  {
    row = 9 - i;
    col = 0 + i;
    // Validar limites
    if (row < 0 || row >= 10 || col < 0 || col >= 10)
    {
      printf("ERRO: Navio 4 fora dos limites na posicao [%d][%d]\n", row, col);
      valid = 0;
      break;
    }
    // Validar sobreposicao
    if (board[row][col] != 0)
    {
      printf("ERRO: Navio 4 sobrepoe outro navio na posicao [%d][%d]\n", row, col);
      valid = 0;
      break;
    }
  }
  if (valid)
  {
    for (i = 0; i < 3; i++)
    {
      board[9 - i][0 + i] = 3;
    }
    printf("Navio 4 posicionado com sucesso!\n\n");
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
