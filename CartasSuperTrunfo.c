#include <stdio.h>

int main(){
    int populacao1, populacao2, pontost1, pontost2;
    float area1, area2, pib1, pib2;
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[30], cidade2[30];


    printf("Digite as informações da carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População da cidade: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontost1);


    printf("\n");
    printf("Digite as informações da carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População da cidade: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontost2);
    printf("\n");


    printf("\n");
    printf("Dados da carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d milhoões de habitantes\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f trilhões de reais\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontost1);

    printf("\n");
    printf("Dados da carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d milhões de habitantes\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f trilhões de reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontost2);
    printf("\n");
    printf("Informações das cartas concluídas!\n");
    printf("\n");

    return 0;
} 