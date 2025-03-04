#include <stdio.h>

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int main() {
    char estado1, estado2; 
    char codigoCarta1[4], codigoCarta2[4]; 
    char cidade1[50], cidade2[50]; 
    int populacao1, populacao2, numeroPontosTuristicos1, numeroPontosTuristicos2; 
    float area1, area2, pib1, pib2;

    // Recebendo dados para a primeira carta
    printf("Digite a letra do estado para a Carta 1: \n");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta para a Carta 1: \n");
    scanf("%3s", codigoCarta1); 

    printf("Digite o nome da Cidade para a Carta 1: \n");
    getchar();  // Limpa o buffer antes de ler a string
    scanf("%[^\n]", cidade1); 

    printf("Digite o numero da população para a Carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km² para a Carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB para a Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos para a Carta 1: \n");
    scanf("%d", &numeroPontosTuristicos1);

    // Recebendo dados para a segunda carta
    printf("Digite a letra do estado para a Carta 2: \n");
    scanf(" %c", &estado2); 

    printf("Digite o código da carta para a Carta 2: \n");
    scanf("%3s", codigoCarta2); 

    printf("Digite o nome da Cidade para a Carta 2: \n");
    getchar();  // Limpa o buffer antes de ler a string
    scanf("%[^\n]", cidade2); 

    printf("Digite o numero da população para a Carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km² para a Carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB para a Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos para a Carta 2: \n");
    scanf("%d", &numeroPontosTuristicos2);

    // Cálculos
    float densidadePopulacional1 = calcularDensidadePopulacional(populacao1, area1);
    float densidadePopulacional2 = calcularDensidadePopulacional(populacao2, area2);
    float pibPerCapita1 = calcularPibPerCapita(pib1, populacao1);
    float pibPerCapita2 = calcularPibPerCapita(pib2, populacao2);

    // Comparação pelo atributo População
    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");

    printf("Carta 1 - %s (Estado: %c): População: %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (Estado: %c): População: %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
