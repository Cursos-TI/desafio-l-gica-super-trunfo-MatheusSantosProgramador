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

  // Área para exibição dos dados das cidades

    printf("\n***Carta 1***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibperCapita1);
    printf("Super poder Carta 1: %.2f\n", superPoder1);

    printf("\n***Carta 2***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibperCapita2);
    printf("Super poder Carta 2: %.2f\n", superPoder2);

    //COMPARAÇÃO ENTRE ATRIBUTOS DAS CARTAS

    //Declaração de variáveis 

    int atributo1, atributo2;
    int resultado1, resultado2; 

    //Menu para escolha do primeiro atributo

    printf("\n***Menu***\n");
    printf("1. - População\n");
    printf("2. - Área\n");
    printf("3. - PIB\n");
    printf("4. - Pontos Turísticos\n");
    printf("5. - Densidade Populacional (menor vence)\n");
    printf("6. - PIB per Capita\n");
    printf("7. - Superpoder\n");

    //Escolha do primeiro atributo
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        printf("Primeiro atributo: População\n");
        printf("Carta 1 População: %d\n", populacao1);
        printf("Carta 2 População: %d\n", populacao2);

        resultado1 = populacao1 > populacao2 ? 1 : ((populacao2 > populacao1) ? 2 : 0);
        break;

    case 2: 
        printf("Primeiro atributo: Área\n");
        printf("Carta 1 Área: %.2f\n", area1);
        printf("Carta 2 Área: %.2f\n", area2);

        resultado1 = area1 > area2 ? 1 : ((area2 > area1) ? 2 : 0);
        break;

    case 3: 
        printf("Primeiro atributo: PIB\n");
        printf("Carta 1 PIB: %.2f\n", pib1);
        printf("Carta 2 PIB: %.2f\n", pib2);

        resultado1 = pib1 > pib2 ? 1 : ((pib2 > pib1) ? 2 : 0);
        break;

    case 4:
        printf("Primeiro atributo: Pontos Turísticos\n");
        printf("Carta 1 Pontos Turísticos: %d\n", pontos_Turisticos1);
        printf("Carta 2 Pontos Turísticos: %d\n", pontos_Turisticos2);

        resultado1 = pontos_Turisticos1 > pontos_Turisticos2 ? 1 : ((pontos_Turisticos2 > pontos_Turisticos1) ? 2 : 0);
        break;

    case 5: 
        printf("Primeiro atributo: PIB per Capita\n");
        printf("Carta 1 PIB per Capita: %.2f\n", pibperCapita1);
        printf("Carta 2 PIB per Capita: %.2f\n", pibperCapita2);

        resultado1 = pibperCapita1 > pibperCapita2 ? 1 : ((pibperCapita2 > pibperCapita1) ? 2 : 0);
        break;

    case 6:
        printf("Primeiro atributo: Densidade\n");
        printf("Carta 1 Densidade: %.2f\n", densidade1);
        printf("Carta 2 Densidade: %.2f\n", densidade2);

        resultado1 = densidade1 < densidade2 ? 1 :  ((densidade2 < densidade1) ? 2 : 0);
        break;

    case 7:
        printf("Primeiro atributo: Superpoder\n");
        printf("Carta 1 Superpoder: %.2f\n", superPoder1);
        printf("Carta 2 Superpoder: %.2f\n", superPoder2);

        resultado1 = superPoder1 > superPoder2 ? 1 : ((superPoder2 > superPoder1) ? 2 : 0);
        break;


    default:
        printf("Opção inválida!");
        break;
    }

    //Escolha do segundo atributo

    printf("\nDeve ser escolhido um atributo diferente do primeiro.\n");
    printf("\nEscolha o segundo atributo: ");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
        printf("Opção inválida, atributo já escolhido!\n");
    } else {
        switch (atributo2)
    {
    case 1: 
        printf("Primeiro atributo: População\n");
        printf("Carta 1 População: %d\n", populacao1);
        printf("Carta 2 População: %d\n", populacao2);

        resultado2 = populacao1 > populacao2 ? 1 : ((populacao2 > populacao1) ? 2 : 0);
        break;

    case 2: 
        printf("Primeiro atributo: Área\n");
        printf("Carta 1 Área: %.2f\n", area1);
        printf("Carta 2 Área: %.2f\n", area2);

        resultado2 = area1 > area2 ? 1 : ((area2 > area1) ? 2 : 0);
        break;

    case 3: 
        printf("Primeiro atributo: PIB\n");
        printf("Carta 1 PIB: %.2f\n", pib1);
        printf("Carta 2 PIB: %.2f\n", pib2);

        resultado2 = pib1 > pib2 ? 1 : ((pib2 > pib1) ? 2 : 0);
        break;

    case 4: 
        printf("Primeiro atributo: Pontos Turísticos\n");
        printf("Carta 1 Pontos Turísticos: %d\n", pontos_Turisticos1);
        printf("Carta 2 Pontos Turísticos: %d\n", pontos_Turisticos2);

        resultado2 = pontos_Turisticos1 > pontos_Turisticos2 ? 1 : ((pontos_Turisticos2 > pontos_Turisticos1) ? 2 : 0);
        break;

    case 5: 
        printf("Primeiro atributo: PIB per Capita\n");
        printf("Carta 1 PIB per Capita: %.2f\n", pibperCapita1);
        printf("Carta 2 PIB per Capita: %.2f\n", pibperCapita2);

        resultado2 = pibperCapita1 > pibperCapita2 ? 1 : ((pibperCapita2 > pibperCapita1) ? 2 : 0);
        break;

    case 6: 
        printf("Primeiro atributo: Densidade\n");
        printf("Carta 1 Densidade: %.2f\n", densidade1);
        printf("Carta 2 Densidade: %.2f\n", densidade2);

        resultado2 = densidade1 < densidade2 ? 1 : ((densidade2 < densidade1) ? 2 : 0);
        break;

    case 7: 
        printf("Primeiro atributo: Superpoder\n");
        printf("Carta 1 Superpoder: %.2f\n", superPoder1);
        printf("Carta 2 Superpoder: %.2f\n", superPoder2);

        resultado2 = superPoder1 > superPoder2 ? 1 : ((superPoder2 > superPoder1) ? 2 : 0);
        break;
        
        default:
        printf("Opção invalida!\n");
            break;
        }

        printf("\n******RESULTADO*****\n");
        printf("Nome das cidades escolhidas: \n");
        printf("Cidade 1: %s\n", cidade1);
        printf("Cidade 2: %s\n", cidade2);

        if(resultado1 == 1 && resultado2 == 1){
            printf("Carta 1 Venceu!!!\n");
        } else if (resultado1 == 2 && resultado2 == 2){
            printf("Carta 2 Venceu!!!\n");
        }else {
            printf("Terminou em Empate!!!\n");
        }
    }

    return 0;
}