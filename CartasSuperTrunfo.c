#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int codigo, pontost;
    float area, pib, populacao;
    float densidadep, resultado, pibpercapita;
    char estado;
    char nome[50];

    printf("digite a letra do estado\n");
    scanf("%c", &estado);

    printf("digite o codigo da cidade\n");
    scanf("%d", &codigo);

    printf("digite o nome da cidade\n");
    scanf("%s", &nome);

    printf("digite a quantidade populacional\n");
    scanf("%f", &populacao);

    printf("digite a area da cidade em km²\n");
    scanf("%f", &area);

    printf("digite o PIB\n");
    scanf("%f", &pib);

    printf("digite a quantidade de pontos turísticos\n");
    scanf("%d", &pontost);

    resultado = (populacao / area);

    printf("a densidade é: %f\n", resultado);

    pibpercapita = (pib / populacao);

    printf("o Pib Per Capita é: %f\n", pibpercapita);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
