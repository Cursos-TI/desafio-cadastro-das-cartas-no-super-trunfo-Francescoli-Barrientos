#include <stdio.h>
#include <stdlib.h>

int main() {
    int nivel;

    // Menu de escolha de nível
    printf("--- Desafio Super Trunfo - Países ---\n");
    printf("Escolha o nivel do desafio:\n");
    printf("1 - Nivel Novato (Cadastro Basico)\n");
    printf("2 - Nivel Aventureiro (Calculo de Atributos)\n");
    printf("3 - Nivel Mestre (Comparacao e Super Poder)\n");
    printf("Digite o numero do nivel: ");
    scanf("%d", &nivel);

    // --- Declaracao de variaveis que serao usadas em todos os niveis ---
    unsigned long int populacao_c1, populacao_c2;
    float area_c1, area_c2;
    float pib_c1, pib_c2;
    int pontos_turisticos_c1, pontos_turisticos_c2;
    float densidade_pop_c1, densidade_pop_c2;
    float pib_per_capita_c1, pib_per_capita_c2;
    float super_poder_c1, super_poder_c2;

    // --- Cadastro das Cartas (comum a todos os niveis) ---
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite a populacao: ");
    scanf("%lu", &populacao_c1);
    printf("Digite a area: ");
    scanf("%f", &area_c1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_c1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_c1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite a populacao: ");
    scanf("%lu", &populacao_c2);
    printf("Digite a area: ");
    scanf("%f", &area_c2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_c2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_c2);

    // --- Logica dos Niveis ---
    if (nivel == 1) { // Nivel Novato
        printf("\n===================================\n");
        printf("--- Dados da Carta 1 ---\n");
        printf("Populacao: %lu\n", populacao_c1);
        printf("Area: %.2f\n", area_c1);
        printf("PIB: %.2f\n", pib_c1);
        printf("Pontos Turisticos: %d\n", pontos_turisticos_c1);

        printf("\n--- Dados da Carta 2 ---\n");
        printf("Populacao: %lu\n", populacao_c2);
        printf("Area: %.2f\n", area_c2);
        printf("PIB: %.2f\n", pib_c2);
        printf("Pontos Turisticos: %d\n", pontos_turisticos_c2);
    } 
    else if (nivel == 2) { // Nivel Aventureiro
        // Calculos
        densidade_pop_c1 = (float)populacao_c1 / area_c1;
        pib_per_capita_c1 = pib_c1 / (float)populacao_c1;

        densidade_pop_c2 = (float)populacao_c2 / area_c2;
        pib_per_capita_c2 = pib_c2 / (float)populacao_c2;

        printf("\n===================================\n");
        printf("--- Dados da Carta 1 ---\n");
        printf("Populacao: %lu\n", populacao_c1);
        printf("Area: %.2f\n", area_c1);
        printf("PIB: %.2f\n", pib_c1);
        printf("Pontos Turisticos: %d\n", pontos_turisticos_c1);
        printf("Densidade Populacional: %.2f\n", densidade_pop_c1);
        printf("PIB per Capita: %.2f\n", pib_per_capita_c1);

        printf("\n--- Dados da Carta 2 ---\n");
        printf("Populacao: %lu\n", populacao_c2);
        printf("Area: %.2f\n", area_c2);
        printf("PIB: %.2f\n", pib_c2);
        printf("Pontos Turisticos: %d\n", pontos_turisticos_c2);
        printf("Densidade Populacional: %.2f\n", densidade_pop_c2);
        printf("PIB per Capita: %.2f\n", pib_per_capita_c2);
    } 
    else if (nivel == 3) { // Nivel Mestre
        // Calculos
        densidade_pop_c1 = (float)populacao_c1 / area_c1;
        pib_per_capita_c1 = pib_c1 / (float)populacao_c1;

        densidade_pop_c2 = (float)populacao_c2 / area_c2;
        pib_per_capita_c2 = pib_c2 / (float)populacao_c2;

        // Calculo do Super Poder
        super_poder_c1 = (float)populacao_c1 + area_c1 + pib_c1 + (float)pontos_turisticos_c1 + (1.0f / densidade_pop_c1) + pib_per_capita_c1;
        super_poder_c2 = (float)populacao_c2 + area_c2 + pib_c2 + (float)pontos_turisticos_c2 + (1.0f / densidade_pop_c2) + pib_per_capita_c2;
        
        printf("\n===================================\n");
        printf("--- Resultado da Comparacao ---\n");
        printf("Carta 1 vence (1) | Carta 2 vence (0)\n");

        printf("Populacao: %d\n", populacao_c1 > populacao_c2);
        printf("Area: %d\n", area_c1 > area_c2);
        printf("PIB: %d\n", pib_c1 > pib_c2);
        printf("Pontos Turisticos: %d\n", pontos_turisticos_c1 > pontos_turisticos_c2);
        printf("Densidade Populacional: %d\n", densidade_pop_c1 < densidade_pop_c2);
        printf("PIB per Capita: %d\n", pib_per_capita_c1 > pib_per_capita_c2);
        printf("Super Poder: %d\n", super_poder_c1 > super_poder_c2);
        
        printf("\nSuper Poder Carta 1: %.2f\n", super_poder_c1);
        printf("Super Poder Carta 2: %.2f\n", super_poder_c2);
    } 
    else {
        printf("\nOpcao invalida. Por favor, reinicie o programa e escolha um nivel valido (1, 2 ou 3).\n");
    }

    return 0;
}
