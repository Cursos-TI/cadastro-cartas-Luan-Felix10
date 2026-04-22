#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
  char estado1[50]; // Variável para armazenar o estado (UF) da cidade
  char codigo1[10]; // Variável para armazenar o código da carta
  char cidade1[50]; // Variável para armazenar o nome da cidade
  int populacao1; // Variável para armazenar a população da cidade
  float area1; // Variável para armazenar a área da cidade
  float pib1; // Variável para armazenar o PIB da cidade
  int pontos_turisticos1; // Variável para armazenar o número de pontos turísticos da cidade

  // Carta 2
  char estado2[50];
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  // Área para entrada de dados

  printf("=== Cadastro - Carta 1 ===\n"); // Mensagem para indicar o início do cadastro da carta 1
  printf("Digite o estado (UF): "); // Solicitação para o usuário digitar o estado (UF) da cidade
  scanf("%s", estado1);
  printf("Digite o codigo da carta: "); // Solicitação para o usuário digitar o código da carta
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: "); // Solicitação para o usuário digitar o nome da cidade
  scanf("%s", cidade1);
  printf("Digite a populacao: "); // Solicitação para o usuário digitar a população da cidade
  scanf("%d", &populacao1);
  printf("Digite a area (km2): "); // Solicitação para o usuário digitar a área da cidade
  scanf("%f", &area1);
  printf("Digite o PIB: "); // Solicitação para o usuário digitar o PIB da cidade 
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos: "); // Solicitação para o usuário digitar o número de pontos turísticos da cidade
  scanf("%d", &pontos_turisticos1);

  printf("\n=== Cadastro - Carta 2 ===\n");
  printf("Digite o estado (UF): ");
  scanf("%s", estado2);
  printf("Digite o codigo da carta: ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a populacao: ");
  scanf("%d", &populacao2);
  printf("Digite a area (km2): ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  printf("\n=== Carta 1 ===\n"); // Mensagem para indicar o início da exibição dos dados da carta 1
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos_turisticos1);

  printf("\n=== Carta 2 ===\n"); // Mensagem para indicar o início da exibição dos dados da carta 2
  printf("Estado: %s\n", estado2); // Exibição do estado (UF) da cidade
  printf("Codigo: %s\n", codigo2); // Exibição do código da carta
  printf("Cidade: %s\n", cidade2); // Exibição do nome da cidade
  printf("Populacao: %d\n", populacao2); // Exibição da população da cidade
  printf("Area: %.2f km2\n", area2); // Exibição da área da cidade
  printf("PIB: %.2f\n", pib2); // Exibição do PIB da cidade
  printf("Pontos Turisticos: %d\n", pontos_turisticos2); // Exibição do número de pontos turísticos da cidade

  return 0;
} 
