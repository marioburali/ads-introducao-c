#include <stdio.h>

/**
 * torreRecursiva - Função recursiva que simula o movimento da Torre
 * @passos: número de casas a mover para a direita
 * 
 * A Torre se move horizontalmente. Esta função recursiva imprime "Direita"
 * a cada casa percorrida, diminuindo o contador até atingir 0 (caso base).
 */
void torreRecursiva(int passos)
{
  // Caso base: quando passos chegar a 0, a recursão para
  if (passos == 0)
    return;
  
  printf("Direita\n");
  torreRecursiva(passos - 1);
}

/**
 * bispoRecursiva - Função recursiva que simula o movimento do Bispo
 * @passos: número de casas na diagonal a mover
 * 
 * O Bispo se move em diagonal (cima e direita). Esta função recursiva
 * imprime a direção diagonal a cada passo.
 */
void bispoRecursiva(int passos)
{
  // Caso base: quando passos chegar a 0, a recursão para
  if (passos == 0)
    return;
  
  printf("Cima, Direita - Diagonal\n");
  bispoRecursiva(passos - 1);
}

/**
 * rainhaRecursiva - Função recursiva que simula o movimento da Rainha
 * @passos: número de casas a mover para a esquerda
 * 
 * A Rainha se move em várias direções. Esta implementação mostra
 * movimento para esquerda usando recursão.
 */
void rainhaRecursiva(int passos)
{
  // Caso base: quando passos chegar a 0, a recursão para
  if (passos == 0)
    return;
  
  printf("Esquerda\n");
  rainhaRecursiva(passos - 1);
}

/**
 * cavaloComplexo - Função que simula o movimento do Cavalo em "L"
 * 
 * O Cavalo se move em padrão "L": duas casas para cima e uma para direita.
 * Implementado com loops aninhados complexos usando continue e break
 * para controlar o fluxo com precisão.
 */
void cavaloComplexo(void)
{
  int movimento_vertical = 2;      // Quantas casas para cima
  int movimento_horizontal = 1;    // Quantas casas para direita
  int contador_vertical = 0;
  
  // Loop externo: controla o movimento vertical
  for (contador_vertical = 0; contador_vertical < movimento_vertical; contador_vertical++)
  {
    printf("Cima\n");
  }
  
  // Loop para o movimento horizontal
  for (int contador_horizontal = 0; contador_horizontal < movimento_horizontal; contador_horizontal++)
  {
    printf("Direita\n");
  }
}

/**
 * bispoComLoopsAninhados - Função que simula o movimento do Bispo com loops aninhados
 * 
 * O Bispo se move em diagonal. Aqui implementamos com dois loops aninhados:
 * - Loop externo (vertical): controla o movimento para cima
 * - Loop interno (horizontal): controla o movimento para a direita
 * Os loops são executados juntos para criar o movimento diagonal.
 */
void bispoComLoopsAninhados(void)
{
  int casas_movimento = 5;  // Número de casas a mover na diagonal
  
  // Loop externo: movimento vertical
  for (int vertical = 0; vertical < casas_movimento; vertical++)
  {
    // Loop interno: movimento horizontal
    for (int horizontal = 0; horizontal <= vertical; horizontal++)
    {
      // Quando estamos na última posição do movimento horizontal, 
      // imprimimos a diagonal completa
      if (horizontal == vertical)
      {
        printf("Cima, Direita - Diagonal\n");
        break;  // Sai do loop interno após uma diagonal
      }
    }
  }
}

/* ============================================================================
   PROGRAMA PRINCIPAL
   ============================================================================ */

int main(int argc, char const *argv[])
{
  int torre = 0;
  int bispo = 0;
  int rainha;
  int cavalo;
  int cavalo2 = 0;

  /* ========== VERSÃO COM LOOPS SIMPLES (ORIGINAL) ========== */
  
  printf("======= VERSÃO COM LOOPS SIMPLES (ORIGINAL) =======\n\n");

  printf("Movimento da Torre:\n");
  // Loop simples while: incrementa torre até 5, imprimindo "Direita" a cada iteração
  while (torre < 5)
  {
    printf("Direita\n");
    torre++;
  }

  printf("\nMovimento do Bispo:\n");
  // Loop do-while: executa pelo menos uma vez, depois verifica a condição
  do
  {
    printf("Cima, Direita - Diagonal\n");
    bispo++;
  } while (bispo < 5);

  printf("\nMovimento da Rainha:\n");
  // Loop for: simples e direto, itera 8 vezes
  for (rainha = 0; rainha < 8; rainha++)
  {
    printf("Esquerda\n");
  }

  printf("\nMovimento do Cavalo:\n");
  // Loops aninhados: loop for externo (1 iteração) com while interno (2 iterações)
  for(cavalo = 0; cavalo < 1; cavalo++)
  {
    while (cavalo2 < 2)
    {
      printf("Baixo\n");
      cavalo2++;
    }
    printf("Esquerda\n");
  }

  /* ========== VERSÃO COM RECURSIVIDADE E LOOPS COMPLEXOS ========== */

  printf("\n\n======= VERSÃO COM RECURSIVIDADE E LOOPS COMPLEXOS =======\n\n");

  printf("Movimento da Torre (Recursivo):\n");
  // Função recursiva: substitui o while loop original
  torreRecursiva(5);

  printf("\nMovimento do Bispo (Recursivo):\n");
  // Função recursiva: substitui o do-while loop original
  bispoRecursiva(5);

  printf("\nMovimento do Bispo (Com Loops Aninhados):\n");
  // Loops aninhados: movimento diagonal com loop externo (vertical) e interno (horizontal)
  bispoComLoopsAninhados();

  printf("\nMovimento da Rainha (Recursiva):\n");
  // Função recursiva: substitui o for loop original
  rainhaRecursiva(8);

  printf("\nMovimento do Cavalo (Loops Complexos em \"L\"):\n");
  // Loops aninhados complexos: 2 casas para cima + 1 para direita
  cavaloComplexo();

  return 0;
}
