#include <stdio.h>

int main(){
    // carta 1
    int numero_pontos_turisticios1, carta_atual1;
    char estado1[50], cidade1[50], codigo_carta1[5];
    float area1, pib1, densidade_populacional1, pib_per_capita1, populacao1, super_trunfo1, densidade_populacional1_invertida1;
    // carta 2
    int numero_pontos_turisticios2, carta_atual2;
    char estado2[50], cidade2[50], codigo_carta2[5];
    float area2, pib2, densidade_populacional2, pib_per_capita2, populacao2, super_trunfo2, densidade_populacional1_invertida2;
    // resultado
    int resultadoP, resultadoA, resultadoPIB, resultadoPontos, resultadoD, resultadoPIBPC, resultadoSUPER;

    printf("Digite o numero da carta atual: \n");
    scanf("%d", &carta_atual1);

    printf("Digite o codigo da carta(A01): \n");
    scanf("%s", codigo_carta1);

    printf("Digite a classe do estado(A): \n");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a quantidade da população: \n");
    scanf("%f", &populacao1);

    printf("Digite a quantidade da área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite a quantidade do PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticios1);
    // carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib1 / populacao1;
    densidade_populacional1_invertida1 = (float) 1/densidade_populacional1;
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional1_invertida1);
    super_trunfo1 = (float) populacao1 + area1 + pib1 + numero_pontos_turisticios1 + densidade_populacional1_invertida1 + pib_per_capita1;

    printf("******************************************************\n");
    printf("carta: %d\n", carta_atual1);
    printf("carta: %s\n", codigo_carta1);
    printf("estado: %s\n", estado1);
    printf("cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f $\n", pib1);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticios1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f $\n", pib_per_capita1);
    printf("super trunfo: %.2f\n", super_trunfo1);
    printf("******************************************************\n");

    printf("Agora crie sua nova carta!\n");

    printf("Digite o numero da carta atual: \n");
    scanf("%d", &carta_atual2);

    printf("Digite o codigo da carta(B01): \n");
    scanf("%s", codigo_carta2);

    printf("Digite a classe do estado(B): \n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade da população: \n");
    scanf("%f", &populacao2);

    printf("Digite a quantidade da área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite a quantidade do PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticios2);

    //carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    densidade_populacional1_invertida2 = (float) 1/densidade_populacional2;
    printf("Densidade invertida: %.2f habitantes/km²\n", densidade_populacional1_invertida2);
    super_trunfo2 = (float) populacao2 + area2 + pib2 + numero_pontos_turisticios2 + densidade_populacional1_invertida2 + pib_per_capita2;

    // comparação entre as cartas
    resultadoP = populacao1 > populacao2;
    resultadoA = area1 > area2;
    resultadoPIB = pib1 > pib2;
    resultadoPontos = numero_pontos_turisticios1 > numero_pontos_turisticios2;
    resultadoD = densidade_populacional1 < densidade_populacional2;
    resultadoPIBPC = pib_per_capita1 > pib_per_capita2;
    resultadoSUPER = super_trunfo1 > super_trunfo2;



    printf("carta: %d\n", carta_atual2);
    printf("carta: %s\n", codigo_carta2);
    printf("estado: %s\n", estado2);
    printf("cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f $\n", pib2);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticios2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f $\n", pib_per_capita2);
    printf("super trunfo: %.2f\n", super_trunfo2);
    printf("******************************************************\n");

    // resultado da comparação

    printf("*************** RESULTADO *****************\n");
    printf("População: %d\n", resultadoP);
    printf("Área: %d\n", resultadoA);
    printf("PIB: %d\n", resultadoPIB);
    printf("Pontos turisticos: %d\n", resultadoPontos);
    printf("Densidade populacional: %d\n", resultadoD);
    printf("PIB per capita: %d\n", resultadoPIBPC);
    printf("super trunfo: %d\n", resultadoSUPER);
    printf("*******************************************\n");

    return 0;
}