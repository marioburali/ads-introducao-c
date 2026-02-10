#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int option, number, guess;

  printf("Bem vindo ao Jogo de Adivinhação!\n");
  printf("Menu Principal:\n");
  printf("1. Jogar\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &option);

  switch (option) {
    case 1:
      srand(time(0));
      number = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
      printf("Tente adivinhar o número entre 1 e 100!\n");
      do {
        printf("Digite seu palpite: ");
        scanf("%d", &guess);
        if (guess < number) {
          printf("Muito baixo! Tente novamente.\n");
        } else if (guess > number) {
          printf("Muito alto! Tente novamente.\n");
        } else {
          printf("Parabéns! Você acertou o número!\n");
        }
      } while (guess != number);
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. O computador irá gerar um número aleatório entre 1 e 100.\n");
      printf("2. Você deve tentar adivinhar o número.\n");
      printf("3. O computador irá fornecer dicas se seu palpite for muito alto ou muito baixo.\n");
      printf("4. O jogo continua até que você acerte o número.\n");
      break;
    case 3:
      printf("Obrigado por jogar! Até a próxima!\n");
      break;
    default:
      printf("Opção inválida! Por favor, escolha uma opção válida.\n");
      break;
  }
}