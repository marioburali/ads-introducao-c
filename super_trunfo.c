#include <stdio.h>
#include <string.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    printf("Super Trunfo Game Initialized!\n");
    printf("Para começar, você deve criar duas cartas com atributos diferentes.\n");
    printf("Cada carta deve ter um nome e três atributos: Estado, Código da Carta, Nome da Cidade, População, Área (em km²), PIB e Número de pontos turísticos.\n");
    printf("Bora jogar!\n");
    printf("Escolha uma letra de A a H: ");
    char letra_c1;
    scanf(" %c", &letra_c1);
    printf("Escolha um número de 1 a 4: ");
    int numero_c1;
    scanf(" %d", &numero_c1);
    char codigo_c1[4];
    sprintf(codigo_c1, "%c%02d", letra_c1, numero_c1);
    printf("Digite o nome da cidade: ");
    char nome_cidade_c1[50];
    limpar_buffer();
    fgets(nome_cidade_c1, sizeof(nome_cidade_c1), stdin);
    nome_cidade_c1[strcspn(nome_cidade_c1, "\n")] = 0;
    printf("Digite a população: ");
    int populacao_c1;
    scanf(" %d", &populacao_c1);
    printf("Digite a área (em km²): ");
    float area_c1;
    scanf(" %f", &area_c1);
    printf("Digite o PIB: ");
    float pib_c1;
    scanf(" %f", &pib_c1);
    printf("Digite o número de pontos turísticos: ");
    int pontos_turisticos_c1;
    scanf(" %d", &pontos_turisticos_c1);
    printf("Carta 1 criada com sucesso!\n");

    printf("Agora, crie a segunda carta.\n");
    printf("Escolha uma letra de A a H: ");
    char letra_c2;
    scanf(" %c", &letra_c2);
    printf("Escolha um número de 1 a 4: ");
    int numero_c2;
    scanf(" %d", &numero_c2);
    char codigo_c2[4];
    sprintf(codigo_c2, "%c%02d", letra_c2, numero_c2);
    printf("Digite o nome da cidade: ");
    char nome_cidade_c2[50];
    limpar_buffer();
    fgets(nome_cidade_c2, sizeof(nome_cidade_c2), stdin);
    nome_cidade_c2[strcspn(nome_cidade_c2, "\n")] = 0;
    printf("Digite a população: ");
    int populacao_c2;
    scanf(" %d", &populacao_c2);
    printf("Digite a área (em km²): ");
    float area_c2;
    scanf(" %f", &area_c2);
    printf("Digite o PIB: ");
    float pib_c2;
    scanf(" %f", &pib_c2);
    printf("Digite o número de pontos turísticos: ");
    int pontos_turisticos_c2;
    scanf(" %d", &pontos_turisticos_c2);
    printf("Carta 2 criada com sucesso!\n");

    printf("\nCarta 1:\n");
    printf("\nEstado: %c\n", letra_c1);
    printf("\nCódigo: %s\n", codigo_c1);
    printf("\nNome da Cidade: %s\n", nome_cidade_c1);
    printf("\nPopulação: %d\n", populacao_c1);
    printf("\nÁrea: %.2f km²\n", area_c1);
    printf("\nPIB: %.2f bilhões de reais\n", pib_c1);
    printf("\nNúmero de Pontos Turísticos: %d\n", pontos_turisticos_c1);

    printf("\n\nCarta 2:\n");
    printf("\nEstado: %c\n", letra_c2);
    printf("\nCódigo: %s\n", codigo_c2);
    printf("\nNome da Cidade: %s\n", nome_cidade_c2);
    printf("\nPopulação: %d\n", populacao_c2);
    printf("\nÁrea: %.2f km²\n", area_c2);
    printf("\nPIB: %.2f bilhões de reais\n", pib_c2);
    printf("\nNúmero de Pontos Turísticos: %d\n", pontos_turisticos_c2);
    return 0;
}