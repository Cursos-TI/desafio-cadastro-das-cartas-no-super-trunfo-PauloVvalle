#include <stdio.h>

int main(){
    int populacao, numero_pontos_turisticios;
    char estado[50], cidade[50], codigo_carta[5];
    float area, pib;

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta);

    printf("Digite a classe do estado: \n");
    scanf("%s", estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade da população: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade da área da cidade: \n");
    scanf("%f", &area);

    printf("Digite a quantidade do PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticios);
    
    printf("\n");
    printf("carta: %s\n", codigo_carta);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f $\n", pib);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticios);
    printf("\n");

    printf("Agora crie sua nova carta!\n");

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta);

    printf("Digite a classe do estado: \n");
    scanf("%s", estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade da população: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade da área da cidade: \n");
    scanf("%f", &area);

    printf("Digite a quantidade do PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticios);

    printf("\n");
    printf("carta: %s\n", codigo_carta);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f $\n", pib);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticios);

    return 0;
}