#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);  // Lê o estado
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);  // Lê o código da carta
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);  // Lê o nome da cidade com espaços
    printf("População: ");
    scanf("%d", &populacao1);  // Lê a população
    printf("Área (em km²): ");
    scanf("%f", &area1);  // Lê a área
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);  // Lê o PIB
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);  // Lê o número de pontos turísticos

    // Entrada de dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);  // Lê o estado
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);  // Lê o código da carta
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);  // Lê o nome da cidade com espaços
    printf("População: ");
    scanf("%d", &populacao2);  // Lê a população
    printf("Área (em km²): ");
    scanf("%f", &area2);  // Lê a área
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);  // Lê o PIB
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);  // Lê o número de pontos turísticos

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);  // Exibe a área com a unidade
    printf("PIB: %.2f bilhões de reais\n", pib1);  // Exibe o PIB com a unidade
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);  // Exibe a área com a unidade
    printf("PIB: %.2f bilhões de reais\n", pib2);  // Exibe o PIB com a unidade
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}



