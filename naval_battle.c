#include <stdio.h>

#define BOARD_SIZE 10

int main()
{
  int board[BOARD_SIZE][BOARD_SIZE];
  int i, j;
  int row, col;
  int valid;

  // Inicializar tabuleiro com zeros (água)
  for (i = 0; i < BOARD_SIZE; i++)
  {
    for (j = 0; j < BOARD_SIZE; j++)
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
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE)
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
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE)
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
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE)
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
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE)
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

  // Matrizes de habilidades
  printf("\n\n__MATRIZES DE HABILIDADES:__\n");
  // Cone
  int cone[3][5];
  for (i = 0; i < 3; i++)
  {
    int inicio = 2 - i;         // Coluna inicial (centro - largura/2)
    int quantidade = 2 * i + 1; // Quantos símbolos nessa linha

    for (j = 0; j < quantidade; j++)
    {
      cone[i][inicio + j] = 1; // Preenchendo com 1
    }
  }

  // Exibir cone
  printf("\n\nCONE:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("%d ", cone[i][j]);
    }
    printf("\n");
  }

  // Cruz
  int cruz[5][5];
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (i == 2 || j == 2)
      {
        cruz[i][j] = 1; // Preenchendo com 1
      }
      else
      {
        cruz[i][j] = 0; // Preenchendo com 0
      }
    }
  }

  // Exibir cruz
  printf("\n\nCRUZ:\n");
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("%d ", cruz[i][j]);
    }
    printf("\n");
  }

  // Octaedro
  int octaedro[5][5];
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      octaedro[i][j] = 0;  // Inicializar com 0
    }
  }

  // Preencher octaedro com lógica de losango
  for (i = 0; i < 5; i++)
  {
    int metade = 2;                          // Centro (5/2 = 2)
    int distancia = (i > metade) ? (i - metade) : (metade - i);  // |i - 2|
    int quantidade = 5 - 2 * distancia;      // Largura do losango
    int inicio = distancia;                  // Posição inicial
    
    for (j = 0; j < quantidade; j++)
    {
      octaedro[i][inicio + j] = 1;
    }
  }

  // Exibir octaedro
  printf("\n\nOCTAEDRO:\n");
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("%d ", octaedro[i][j]);
    }
    printf("\n");
  }

  // Exibir tabuleiro
  printf("\n\n__TABULEIRO:__\n\n");

  // Cabeçalho com colunas
  printf("   ");
  for (j = 0; j < BOARD_SIZE; j++)
  {
    printf("%d ", j);
  }
  printf("\n");

  // Exibir linhas
  for (i = 0; i < BOARD_SIZE; i++)
  {
    printf("%d: ", i);
    for (j = 0; j < BOARD_SIZE; j++)
    {
      printf("%d ", board[i][j]);
    }
    printf("\n");
  }

  printf("\nLegenda: 0 = Agua | 3 = Navio\n");

  return 0;
}
