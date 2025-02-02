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
    char codigoCarta[3]; // Variavel para armazenar o código da cidade. A01 até A04
    char cidade[20]; // Variavel para armazenar o nome de cada cidade
    int populacao, numeroPontosTuristicos; // Variavel para armazenar a população da cidade em km² e o numero de pontos turisticos.
    float area, pib; // Variavel para armazenar a área da cidade e Variavel para armazenar o PIB da cidade.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite a letra do estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta);

    print("Digite o nome da Cidade: \n");
    scanf("%s", &cidade);

    print("Digite o numero da população: \n");
    scanf("%d", &populacao);

    print("Digite o numero da area: \n");
    scanf("%f", &area);

    print("Digite o PIB: \n");
    scanf("%f", &pib);

    print("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    print("Estado: %c", estado);
    print("Código da Carta: %s", codigoCarta);
    print("Nome da Cidade: %s", cidade);
    print("População: %d", populacao);
    print("Área: %f", area);
    print("PIB: %f", pib);
    print("Número de Pontos Turísticos: %d", numeroPontosTuristicos);

    return 0;
}
