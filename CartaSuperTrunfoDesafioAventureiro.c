#include <stdio.h>

int main(){
    int numero_pontos_turisticios, carta_atual;
    char estado[50], cidade[50], codigo_carta[5];
    float area, pib, densidade_populacional, pib_per_capita, populacao;

    printf("Digite o numero da carta atual: \n");
    scanf("%d", &carta_atual);

    printf("Digite o codigo da carta(A01): \n");
    scanf("%s", codigo_carta);

    printf("Digite a classe do estado(A): \n");
    scanf("%s", estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade da população: \n");
    scanf("%f", &populacao);

    printf("Digite a quantidade da área da cidade: \n");
    scanf("%f", &area);

    printf("Digite a quantidade do PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticios);
    
    densidade_populacional = (float) populacao / area;
    pib_per_capita = (float) pib / populacao;

    printf("******************************************************\n");
    printf("carta: %d\n", carta_atual);
    printf("carta: %s\n", codigo_carta);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("População: %.0f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f $\n", pib);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticios);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f $\n", pib_per_capita);
    printf("******************************************************\n");

    printf("Agora crie sua nova carta!\n");

    printf("Digite o numero da carta atual: \n");
    scanf("%d", &carta_atual);

    printf("Digite o codigo da carta(B01): \n");
    scanf("%s", codigo_carta);

    printf("Digite a classe do estado(B): \n");
    scanf("%s", estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade da população: \n");
    scanf("%f", &populacao);

    printf("Digite a quantidade da área da cidade: \n");
    scanf("%f", &area);

    printf("Digite a quantidade do PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticios);

    printf("******************************************************\n");
    printf("carta: %d\n", carta_atual);
    printf("carta: %s\n", codigo_carta);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("População: %.0f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f $\n", pib);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticios);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f $\n", pib_per_capita);
    printf("******************************************************\n");

    return 0;
}