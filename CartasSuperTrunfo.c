#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado; // Variavel para armazenar a letra da Cidade de A - H
    char codigoCarta[4]; // Variavel para armazenar o código da cidade. A01 até A04 o número dentro dos colchetes é para delimitar o tamanho da string
    char cidade[50]; // Variavel para armazenar o nome de cada cidade
    int populacao, numeroPontosTuristicos; // Variavel para armazenar a população da cidade em km² e o numero de pontos turisticos.
    float area, pib; // Variavel para armazenar a área da cidade e Variavel para armazenar o PIB da cidade.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado); 

    printf("Digite o código da carta: \n");
    scanf("%3s", codigoCarta); // 3s foi adicionado para limitar o código a 3 catacteres

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", cidade); // tive que pesquisar na internet pois o programa estava dando erro somente colocando espaço como aprendido até aqui no modulo do curso.

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao);

    printf("Digite o numero da area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n--- Dados da Carta ---\n"); // adicionei esta linha para melhorar a visualização da saída
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);

    return 0;
}
