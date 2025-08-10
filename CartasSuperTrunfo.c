#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int pontost1, pontost2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float dpopulacional1, dpopulacional2, pibc1, pibc2;
    float inversoDPOP1, inversoDPOP2, SuperPoder1, SuperPoder2;

    ////

    printf("***** SUPER TRUNFO *****\n");
    printf("Entre com as informações da Carta 1: \n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf(" %s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área em km2²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontost1);

    dpopulacional1 = (float) populacao1 / area1;
    pibc1 = (float) pib1 / populacao1;

    inversoDPOP1 = area1 / (float)populacao1;
    SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontost1 + pibc1 + inversoDPOP1;

    printf("\n");
    

    printf("Entre com as informações da Carta 2: \n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontost2);

    dpopulacional2 = (float) populacao2 / area2;
    pibc2 = (float) pib2 / populacao2;

    inversoDPOP2 = area2 / (float) populacao2;
    SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontost2 + pibc2 + inversoDPOP2;

    printf("\n");
    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Quantidade de Pontos Turísticos: %d\n", pontost1);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibc1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibc2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    printf("\n");
    printf("Informações das cartas completas!\n");
    printf("\n");

    printf("**Comparação entre as Cartas**\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontost1 > pontost2);
    printf("Densidade Populacional: %d\n", dpopulacional1 < dpopulacional2);
    printf("PIB per Capita: %d\n", pibc1 > pibc2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);

    printf("\n");
    printf("****FIM DE JOGO****");
    printf("\n");
    printf("\n");

    return 0; 
}
