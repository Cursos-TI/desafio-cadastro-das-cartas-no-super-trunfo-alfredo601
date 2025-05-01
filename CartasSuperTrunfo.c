#include <stdio.h>

// Estrutura para armazenar as informações da carta
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib; // Em bilhões de reais
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos para a primeira carta
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos para a segunda carta
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}
