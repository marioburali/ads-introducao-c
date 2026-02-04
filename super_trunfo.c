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
    unsigned long int populacao_c1;
    scanf(" %lu", &populacao_c1);
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
    unsigned long int populacao_c2;
    scanf(" %lu", &populacao_c2);
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


    // Exibir Carta 01
    printf("\nCarta 1:\n");
    printf("\nEstado: %c\n", letra_c1);
    printf("\nCódigo: %s\n", codigo_c1);
    printf("\nNome da Cidade: %s\n", nome_cidade_c1);
    printf("\nPopulação: %lu\n", populacao_c1);
    printf("\nÁrea: %.2f km²\n", area_c1);
    printf("\nPIB: %.2f bilhões de reais\n", pib_c1);
    printf("\nNúmero de Pontos Turísticos: %d\n", pontos_turisticos_c1);
    float densidade_c1 = (float)populacao_c1 / area_c1;
    float inverso_densidade_c1 = area_c1 / (float)populacao_c1;
    printf("\nDensidade Populacional: %.2f habitantes/km²\n", densidade_c1);
    float pib_per_capita_c1 = (pib_c1 * 1000000) / populacao_c1;
    printf("\nPIB per capita: %.2f reais\n", pib_per_capita_c1);
    float super_poder_c1 = (float)populacao_c1 + area_c1 + pib_c1 + (float)pontos_turisticos_c1 + pib_per_capita_c1 + inverso_densidade_c1;
    printf("Super Poder: %.2f\n", super_poder_c1);

    // Exibir Carta 02
    printf("\n\nCarta 2:\n");
    printf("\nEstado: %c\n", letra_c2);
    printf("\nCódigo: %s\n", codigo_c2);
    printf("\nNome da Cidade: %s\n", nome_cidade_c2);
    printf("\nPopulação: %lu\n", populacao_c2);
    printf("\nÁrea: %.2f km²\n", area_c2);
    printf("\nPIB: %.2f bilhões de reais\n", pib_c2);
    printf("\nNúmero de Pontos Turísticos: %d\n", pontos_turisticos_c2);
    float densidade_c2 = (float)populacao_c2 / area_c2;
    float inverso_densidade_c2 = area_c2 / (float)populacao_c2;
    printf("\nDensidade Populacional: %.2f habitantes/km²\n", densidade_c2);
    float pib_per_capita_c2 = (pib_c2 * 1000000) / populacao_c2;
    printf("\nPIB per capita: %.2f reais\n", pib_per_capita_c2);
    float super_poder_c2 = (float)populacao_c2 + area_c2 + pib_c2 + (float)pontos_turisticos_c2 + pib_per_capita_c2 + inverso_densidade_c2;
    printf("Super Poder: %.2f\n", super_poder_c2);

    // Comparar Cartas
    printf("\n\nComparação de Cartas:\n");
    if (populacao_c1 > populacao_c2) printf("População: Carta 1 venceu!\n");
    else if (populacao_c1 < populacao_c2) printf("População: Carta 2 venceu!\n");
    else printf("População: Empate!\n");
    if (area_c1 > area_c2) printf("Área: Carta 1 venceu!\n");
    else if (area_c1 < area_c2) printf("Área: Carta 2 venceu!\n");
    else printf("Área: Empate!\n");
    if (pib_c1 > pib_c2) printf("PIB: Carta 1 venceu!\n");
    else if (pib_c1 < pib_c2) printf("PIB: Carta 2 venceu!\n");
    else printf("PIB: Empate!\n");
    if (pontos_turisticos_c1 > pontos_turisticos_c2) printf("Número de Pontos Turísticos: Carta 1 venceu!\n");
    else if (pontos_turisticos_c1 < pontos_turisticos_c2) printf("Número de Pontos Turísticos: Carta 2 venceu!\n");
    else printf("Número de Pontos Turísticos: Empate!\n");
    if (densidade_c1 < densidade_c2) printf("Densidade Populacional: Carta 1 venceu!\n");
    else if (densidade_c1 > densidade_c2) printf("Densidade Populacional: Carta 2 venceu!\n");
    else printf("Densidade Populacional: Empate!\n");
    if (pib_per_capita_c1 > pib_per_capita_c2) printf("PIB per capita: Carta 1 venceu!\n");
    else if (pib_per_capita_c1 < pib_per_capita_c2) printf("PIB per capita: Carta 2 venceu!\n");
    else printf("PIB per capita: Empate!\n");
    if (super_poder_c1 > super_poder_c2) printf("Super Poder: Carta 1 venceu!\n");
    else if (super_poder_c1 < super_poder_c2) printf("Super Poder: Carta 2 venceu!\n");
    else printf("Super Poder: Empate!\n");
    return 0;
}