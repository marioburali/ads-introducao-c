#include <stdio.h>
#include <string.h>

void limpar_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
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

    printf("Qual atributo deseja comparar? (1 - População, 2 - Área, 3 - PIB, 4 - Número de Pontos Turísticos, 5 - Densidade Populacional, 6 - PIB per capita, 7 - Super Poder, 8 - Todos): ");
    int escolha;
    scanf(" %d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\n========== COMPARAÇÃO: POPULAÇÃO ==========");
        printf("\n%s: %lu habitantes\n", nome_cidade_c1, populacao_c1);
        printf("%s: %lu habitantes\n\n", nome_cidade_c2, populacao_c2);
        if (populacao_c1 > populacao_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c1);
        else if (populacao_c1 < populacao_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c2);
        else
            printf("🤝 Resultado: EMPATE!\n");
        break;
    case 2:
        printf("\n========== COMPARAÇÃO: ÁREA ==========");
        printf("\n%s: %.2f km²\n", nome_cidade_c1, area_c1);
        printf("%s: %.2f km²\n\n", nome_cidade_c2, area_c2);
        if (area_c1 > area_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c1);
        else if (area_c1 < area_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c2);
        else
            printf("🤝 Resultado: EMPATE!\n");
        break;
    case 3:
        printf("\n========== COMPARAÇÃO: PIB ==========");
        printf("\n%s: %.2f bilhões de reais\n", nome_cidade_c1, pib_c1);
        printf("%s: %.2f bilhões de reais\n\n", nome_cidade_c2, pib_c2);
        if (pib_c1 > pib_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c1);
        else if (pib_c1 < pib_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c2);
        else
            printf("🤝 Resultado: EMPATE!\n");
        break;
    case 4:
        printf("\n========== COMPARAÇÃO: PONTOS TURÍSTICOS ==========");
        printf("\n%s: %d pontos\n", nome_cidade_c1, pontos_turisticos_c1);
        printf("%s: %d pontos\n\n", nome_cidade_c2, pontos_turisticos_c2);
        if (pontos_turisticos_c1 > pontos_turisticos_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c1);
        else if (pontos_turisticos_c1 < pontos_turisticos_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c2);
        else
            printf("🤝 Resultado: EMPATE!\n");
        break;
    case 5:
        printf("\n========== COMPARAÇÃO: DENSIDADE POPULACIONAL ==========");
        printf("\n%s: %.2f hab/km²\n", nome_cidade_c1, densidade_c1);
        printf("%s: %.2f hab/km²\n\n", nome_cidade_c2, densidade_c2);
        printf("(Nota: MENOR densidade vence neste atributo)\n\n");
        if (densidade_c1 < densidade_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c1);
        else if (densidade_c1 > densidade_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c2);
        else
            printf("🤝 Resultado: EMPATE!\n");
        break;
    case 6:
        printf("\n========== COMPARAÇÃO: PIB PER CAPITA ==========");
        printf("\n%s: %.2f reais\n", nome_cidade_c1, pib_per_capita_c1);
        printf("%s: %.2f reais\n\n", nome_cidade_c2, pib_per_capita_c2);
        if (pib_per_capita_c1 > pib_per_capita_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c1);
        else if (pib_per_capita_c1 < pib_per_capita_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c2);
        else
            printf("🤝 Resultado: EMPATE!\n");
        break;
    case 7:
        printf("\n========== COMPARAÇÃO: SUPER PODER ==========");
        printf("\n%s: %.2f\n", nome_cidade_c1, super_poder_c1);
        printf("%s: %.2f\n\n", nome_cidade_c2, super_poder_c2);
        if (super_poder_c1 > super_poder_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c1);
        else if (super_poder_c1 < super_poder_c2)
            printf("🏆 Resultado: %s VENCEU!\n", nome_cidade_c2);
        else
            printf("🤝 Resultado: EMPATE!\n");
        break;
    case 8:
        printf("\n\n========== COMPARAÇÃO COMPLETA ==========\n\n");

        printf("--- POPULAÇÃO ---\n");
        printf("%s: %lu habitantes\n", nome_cidade_c1, populacao_c1);
        printf("%s: %lu habitantes\n", nome_cidade_c2, populacao_c2);
        if (populacao_c1 > populacao_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c1);
        else if (populacao_c1 < populacao_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c2);
        else
            printf("🤝 EMPATE!\n\n");

        printf("--- ÁREA ---\n");
        printf("%s: %.2f km²\n", nome_cidade_c1, area_c1);
        printf("%s: %.2f km²\n", nome_cidade_c2, area_c2);
        if (area_c1 > area_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c1);
        else if (area_c1 < area_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c2);
        else
            printf("🤝 EMPATE!\n\n");

        printf("--- PIB ---\n");
        printf("%s: %.2f bilhões de reais\n", nome_cidade_c1, pib_c1);
        printf("%s: %.2f bilhões de reais\n", nome_cidade_c2, pib_c2);
        if (pib_c1 > pib_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c1);
        else if (pib_c1 < pib_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c2);
        else
            printf("🤝 EMPATE!\n\n");

        printf("--- PONTOS TURÍSTICOS ---\n");
        printf("%s: %d pontos\n", nome_cidade_c1, pontos_turisticos_c1);
        printf("%s: %d pontos\n", nome_cidade_c2, pontos_turisticos_c2);
        if (pontos_turisticos_c1 > pontos_turisticos_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c1);
        else if (pontos_turisticos_c1 < pontos_turisticos_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c2);
        else
            printf("🤝 EMPATE!\n\n");

        printf("--- DENSIDADE POPULACIONAL (MENOR VENCE) ---\n");
        printf("%s: %.2f hab/km²\n", nome_cidade_c1, densidade_c1);
        printf("%s: %.2f hab/km²\n", nome_cidade_c2, densidade_c2);
        if (densidade_c1 < densidade_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c1);
        else if (densidade_c1 > densidade_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c2);
        else
            printf("🤝 EMPATE!\n\n");

        printf("--- PIB PER CAPITA ---\n");
        printf("%s: %.2f reais\n", nome_cidade_c1, pib_per_capita_c1);
        printf("%s: %.2f reais\n", nome_cidade_c2, pib_per_capita_c2);
        if (pib_per_capita_c1 > pib_per_capita_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c1);
        else if (pib_per_capita_c1 < pib_per_capita_c2)
            printf("🏆 Vencedor: %s\n\n", nome_cidade_c2);
        else
            printf("🤝 EMPATE!\n\n");

        printf("--- SUPER PODER ---\n");
        printf("%s: %.2f\n", nome_cidade_c1, super_poder_c1);
        printf("%s: %.2f\n", nome_cidade_c2, super_poder_c2);
        if (super_poder_c1 > super_poder_c2)
            printf("🏆 Vencedor: %s\n", nome_cidade_c1);
        else if (super_poder_c1 < super_poder_c2)
            printf("🏆 Vencedor: %s\n", nome_cidade_c2);
        else
            printf("🤝 EMPATE!\n");
        break;
    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 8.\n");
    }
    return 0;
}