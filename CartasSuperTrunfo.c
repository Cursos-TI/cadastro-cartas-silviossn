#include <stdio.h>

// Desafio Super Trunfo - Países
// Desafio 1: ok!
// Desafio 2: ok!
// Desafio 3: ok!

int main() {
  //Variáveis da carta 1:
  char estado1[50];
  char cod_carta1[10];
  char nome_cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  float densidade1, perCapita1;
  float superPoder1;


  //Variáveis da carta 2:
  char estado2[50];
  char cod_carta2[10];
  char nome_cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade2, perCapita2;
  float superPoder2;

  //Pedindo as informações da Carta n 1 para o usuário:

  printf("Digite o Estado da Carta 1: de A até H: ");
  scanf(" %s", &estado1);
  
  printf("Digite o código da carta: ");
  scanf("%s", cod_carta1);

  printf("Nome da cidade: ");
  scanf("%s", nome_cidade1);

  printf("População: ");
  scanf("%lu", &populacao1);

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
  scanf("%lu", &populacao2);

  printf("Área em km²: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  //Calculando a densidade populacional e pib per capita

  densidade1 = (float)(populacao1) / (area1); //densidade populacional da carta1
  perCapita1 = (float)(pib1) / (populacao1); //pib per capita da carta1

  densidade2 = (float)(populacao2) / (area2); //densidade populacional da carta2
  perCapita2 = (float)(pib2) / (populacao2); //pib per capita da carta2

  //Calculando o Super poder

  superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + perCapita1 + (1 / densidade1);
  superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + perCapita2 + (1 / densidade2);

  //Exibindo as informações da Carta 1:
  printf("\n--- Carta 1 ---\n");
  printf("Estado: %s\n", estado1);
  printf("Código da Carta: %s\n", cod_carta1);
  printf("Nome da cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área em km²: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos1);
  printf("A Densidade populacional é: %.2f\n", densidade1);
  printf("O PIB per capita é: %.2f\n", perCapita1);

  //Exibindo as informações da Carta 2:
  printf("\n--- Carta 2 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Código da Carta: %s\n", cod_carta2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área em km²: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos2);
  printf("A Densidade populacional é: %.2f\n", densidade2);
  printf("O PIB per capita é: %.2f\n", perCapita2);

  //Efetuando a comparação entre as cartas

  printf("\nComparacao de Cartas:\n\n");
  printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos turisticos: Carta 1 venceu: (%d)\n", pontos_turisticos1 > pontos_turisticos2);

  //Comparação entre as densidades

  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", perCapita1 > perCapita2);
  printf("Super poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

return 0;
} 