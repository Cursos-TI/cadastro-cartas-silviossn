#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 //Variáveis da carta 1:
  char estado1[50];
  char cod_carta1[10];
  char nome_cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  //Variáveis da carta 2:
  char estado2[50];
  char cod_carta2[10];
  char nome_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  //Pedindo as informações da Carta n 1 para o usuário:

  printf("Digite o Estado da Carta 1: de A até H: ");
  scanf(" %s", &estado1);
  
  printf("Digite o código da carta: ");
  scanf("%s", cod_carta1);

  printf("Nome da cidade: ");
  scanf("%s", nome_cidade1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área em km²: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);
  
//Pedindo as informações da Carta n 2 para o usuário:

  printf("\nDigite o Estado da Carta 2: de A até H: ");
  scanf(" %s", &estado2);
  
  printf("Digite o código da carta: ");
  scanf("%s", cod_carta2);

  printf("Nome da cidade: ");
  scanf("%s", nome_cidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área em km²: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

//Exibindo as informações da Carta 1:
  printf("\n--- Carta 1 ---\n");
  printf("Estado: %s\n", estado1);
  printf("Código da Carta: %s\n", cod_carta1);
  printf("Nome da cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área em km²: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos1);

  //Exibindo as informações da Carta 2:
  printf("\n--- Carta 2 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Código da Carta: %s\n", cod_carta2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área em km²: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos2);

return 0;
} 