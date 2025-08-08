#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontost1, pontost2;
    float area1, area2, pib1, pib2;
    float dpopulacional1, dpopulacional2, pibc1, pibc2;

    ////

    printf("***** SUPER TRUNFO *****\n");
    printf("Digite as informações da carta 1: \n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km2²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontost1);

    dpopulacional1 = (float) populacao1 / area1;
    pibc1 = (float) pib1 / populacao1;

    printf("\n");
    

    printf("Digite as informações da carta 2: \n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontost2);

    dpopulacional2 = (float) populacao2 / area2;
    pibc2 = (float) pib2 / populacao2;

    printf("\n");

    printf("\n");

    printf("Informações da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d milhões de habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontost1);
    printf("Densidade populacional: %.2f hab/km²\n", dpopulacional1);
    printf("PIB per capita: %.2f reais\n", pibc1);

    printf("\n");

    printf("Informações da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d milhões de habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontost2);
    printf("Densidade populacional: %.2f hab/km²\n", dpopulacional2);
    printf("PIB per capita: %.2f reais\n", pibc2);

    printf("\n");
    printf("Informações das cartas concluídas!\n");
    printf("\n");

    return 0; 
}