#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    // Variáveis da Primeira Carta
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_Turisticos1;
    float densidade1;
    float pibperCapita1;
    float superPoder1;

    // Variáveis da Segunda Carta
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_Turisticos2;
    float densidade2;
    float pibperCapita2;
    float superPoder2;

    // Cadastro das Cartas:

    // Área para entrada de dados

    // Entrada de dados da Primeira Carta
    printf("Cadastro da Primeira Carta\n");

    printf("\nDigite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %50[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_Turisticos1);
    

    // Entrada de dados da Segunda Carta
    printf("\nCadastro da Segunda Carta\n");

    printf("\nDigite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %50[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_Turisticos2);

    //Calculo Densidade e PIB

    densidade1 = (float)populacao1 / area1;
    pibperCapita1 = (float)(pib1* 1000000000 / populacao1);
    
    
    densidade2 = (float)populacao2 / area2;
    pibperCapita2 = (float)pib2* 1000000000 / populacao2;

    //Calculo Super Poder

  superPoder1 = populacao1 + area1 + pib1 + pontos_Turisticos1 + pibperCapita1 + densidade1;
  superPoder2 = populacao2 + area2 + pib2 + pontos_Turisticos2 + pibperCapita2 + densidade2;

  //Menu
  int opcao;
  printf("Escolha uma opcao:\n");
    printf("1. - População\n");
    printf("2. - Área\n");
    printf("3. - PIB\n");
    printf("4. - Pontos Turísticos\n");
    printf("5. - Densidade Populacional (menor vence)\n");
    printf("6. - PIB per Capita\n");
    printf("7. - Superpoder\n");
    scanf("%d", &opcao);

// Lógica do Jogo
switch (opcao){
    case 1:
        if (populacao1 > populacao2){
            printf("%s venceu pela População!\n", cidade1);
        } else if (populacao2 > populacao1){
            printf("%s venceu pela População!\n", cidade2);
        } else {
            printf("Empate na População!\n");
        }
        break;

    case 2:
        if (area1 > area2){
            printf ("%s venceu pela Área!\n", cidade1);
        } else if (area2 > area1){
            printf ("%s venceu pela Área!\n", cidade2);
        } else {
            printf("Empate na Área!\n");
        }
        break;

    case 3:
        if (pib1 > pib2){
            printf("%s venceu pelo PIB!\n", cidade1);
        } else if (pib2 > pib1){
            printf("%s venceu pelo PIB!\n", cidade2);
        } else {
            printf("Empate pelo PIB!\n");
        }
        break;

    case 4:
        if (pontos_Turisticos1 > pontos_Turisticos2){
            printf("%s venceu pelos Pontos Turísticos!\n", cidade1);
        } else if (pontos_Turisticos2 > pontos_Turisticos1){
            printf("%s venceu pelos Pontos Turísticos!\n", cidade2);
        } else {
            printf("Empate nos Pontos Turísticos!\n");
        }
        break;

    case 5: 
        if (pibperCapita1 > pibperCapita2){
            printf("%s venceu pelo PIB per Capita!\n", cidade1);
        } else if (pibperCapita2 > pibperCapita1){
            printf("%s venceu pelo PIB per Capita!\n", cidade2);
        } else {
            printf("Empate no PIB per Capita!\n");
        }
        break;

    case 6:
        if (densidade1 < densidade2){
            printf("%s venceu pela Densidade Populacional!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("%s venceu pela Densidade Populacional!\n", cidade2);
        } else {
            printf("Empate na Densidade Populacional\n");
        }
        break;
    
    case 7: 
        if (superPoder1 > superPoder2){
            printf("%s venceu pelo Superpoder!\n", cidade1);
        } else if (superPoder2 > superPoder1){
            printf("%s venceu pelo Superpoder!\n", cidade2);
        } else {
            printf("Empate no Superpoder!\n");
        }
        break;

default:
        printf("Opção inválida!\n");
    break;
}
}