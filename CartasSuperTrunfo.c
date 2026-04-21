#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //carta 1
  char estado[50] = "A"; // Variável para armazenar o estado da cidade
  char código[] = "A01"; // Variável para armazenar o código da carta
  char cidade[] = "Natal"; // Variável para armazenar o nome da cidade
  int população = 1000000; // Variável para armazenar a população da cidade
  float area = 500.0; // Variável para armazenar a área da cidade
  float pib = 20000.0; // Variável para armazenar o PIB da cidade
  int pontos_turisticos = 5; // Variável para armazenar os pontos turísticos da cidade

  //carta 2
  char estado[50] = "B"; // Variável para armazenar o estado
  char código[] = "B01"; // Variável para armazenar o código da carta
  char cidade[] = "Recife"; // Variável para armazenar o nome da cidade
  int população = 1500000; // Variável para armazenar a população da cidade
  float area = 300.0; // Variável para armazenar a área da cidade
  float pib = 25000.0; // Variável para armazenar o PIB da cidade
  int pontos_turisticos = 7; // Variável para armazenar os pontos turísticos da cidade
  // Área para entrada de dados
printf("Digite o estado da cidade: ");
scanf("%s", estado);

  // Área para exibição dos dados da cidade


return 0;
} 
