#include <stdio.h>

int main() {
    // Dados fixos das cidades (para facilitar o teste)
    char estado1[] = "P";
    char codigo1[] = "PE01";
    char nomeCidade1[] = "Recife";
    int populacao1 = 1653461;          // População aproximada
    float area1 = 218.84;             // km²
    float pib1 = 88.0;                // PIB em bilhões de reais
    int pontosTuristicos1 = 25;

    char estado2[] = "M";
    char codigo2[] = "MA01";
    char nomeCidade2[] = "São Luís";
    int populacao2 = 1108975;
    float area2 = 834.78;
    float pib2 = 32.5;
    int pontosTuristicos2 = 20;

    // Variáveis para cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos resultados
    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparações (sem if/else — apenas usando expressões e multiplicando por -1 se necessário)
    printf("\n=== Comparacoes ===\n");
    printf("Maior densidade populacional: %s\n",
           (densidade1 > densidade2 ? nomeCidade1 : nomeCidade2));
    printf("Maior PIB per Capita: %s\n",
           (pibPerCapita1 > pibPerCapita2 ? nomeCidade1 : nomeCidade2));

    return 0;
}





























