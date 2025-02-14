#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Alfredo

int main() {
    char estado; 
    char codigoCarta[4]; 
    char cidade[50]; 
    int populacao, numeroPontosTuristicos; 
    float area, pib; 
    
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado); 

    printf("Digite o código da carta: \n");
    scanf("%3s", codigoCarta); 

    printf("Digite o nome da Cidade: \n");
    getchar();  // Limpa o buffer antes de ler a string
    scanf("%[^\n]", cidade); 

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("\n--- Dados da Carta ---\n"); 
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);

    return 0;
}
