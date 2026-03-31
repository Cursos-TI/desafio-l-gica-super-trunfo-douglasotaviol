#include <stdio.h>

int main() {

    // -------- CARTA 1 --------
    char cidade[20];
    int populacao, pontos;
    float area, pib;

    printf("Carta 1\n");
    printf("Cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos);

    float densidade1 = populacao / area;

    // -------- CARTA 2 --------
    char cidade2[20];
    int populacao2, pontos2;
    float area2, pib2;

    printf("\nCarta 2\n");
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    float densidade2 = populacao2 / area2;

    // -------- MENU --------
    int opcao1, opcao2;

    printf("\n--- ESCOLHA O PRIMEIRO ATRIBUTO ---\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos\n5 - Densidade\n");
    scanf("%d", &opcao1);

    printf("\n--- ESCOLHA O SEGUNDO ATRIBUTO ---\n");

    // MENU DINÂMICO
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos\n"); break;
                case 5: printf("5 - Densidade\n"); break;
            }
        }
    }

    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    // -------- VARIÁVEIS --------
    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;
    char nomeAttr1[30], nomeAttr2[30];

    // -------- PRIMEIRO ATRIBUTO --------
    switch (opcao1) {
        case 1:
            valor1_c1 = populacao;
            valor1_c2 = populacao2;
            sprintf(nomeAttr1, "Populacao");
            break;
        case 2:
            valor1_c1 = area;
            valor1_c2 = area2;
            sprintf(nomeAttr1, "Area");
            break;
        case 3:
            valor1_c1 = pib;
            valor1_c2 = pib2;
            sprintf(nomeAttr1, "PIB");
            break;
        case 4:
            valor1_c1 = pontos;
            valor1_c2 = pontos2;
            sprintf(nomeAttr1, "Pontos");
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            sprintf(nomeAttr1, "Densidade");
            break;
    }

    // -------- SEGUNDO ATRIBUTO --------
    switch (opcao2) {
        case 1:
            valor2_c1 = populacao;
            valor2_c2 = populacao2;
            sprintf(nomeAttr2, "Populacao");
            break;
        case 2:
            valor2_c1 = area;
            valor2_c2 = area2;
            sprintf(nomeAttr2, "Area");
            break;
        case 3:
            valor2_c1 = pib;
            valor2_c2 = pib2;
            sprintf(nomeAttr2, "PIB");
            break;
        case 4:
            valor2_c1 = pontos;
            valor2_c2 = pontos2;
            sprintf(nomeAttr2, "Pontos");
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            sprintf(nomeAttr2, "Densidade");
            break;
    }

    // -------- COMPARAÇÃO --------
    int pontosCarta1 = 0, pontosCarta2 = 0;

    // ATRIBUTO 1
    if (opcao1 == 5) { // densidade (menor vence)
        if (valor1_c1 < valor1_c2) pontosCarta1++;
        else if (valor1_c2 < valor1_c1) pontosCarta2++;
    } else {
        if (valor1_c1 > valor1_c2) pontosCarta1++;
        else if (valor1_c2 > valor1_c1) pontosCarta2++;
    }

    // ATRIBUTO 2
    if (opcao2 == 5) {
        if (valor2_c1 < valor2_c2) pontosCarta1++;
        else if (valor2_c2 < valor2_c1) pontosCarta2++;
    } else {
        if (valor2_c1 > valor2_c2) pontosCarta1++;
        else if (valor2_c2 > valor2_c1) pontosCarta2++;
    }

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    // -------- RESULTADO --------
    printf("\n--- RESULTADO ---\n");

    printf("Cartas: %s vs %s\n", cidade, cidade2);

    printf("\nAtributo 1: %s\n", nomeAttr1);
    printf("%s: %.2f | %s: %.2f\n", cidade, valor1_c1, cidade2, valor1_c2);

    printf("\nAtributo 2: %s\n", nomeAttr2);
    printf("%s: %.2f | %s: %.2f\n", cidade, valor2_c1, cidade2, valor2_c2);

    printf("\nSoma:\n");
    printf("%s: %.2f | %s: %.2f\n", cidade, soma1, cidade2, soma2);

    if (soma1 > soma2)
        printf("\nVencedor: %s\n", cidade);
    else if (soma2 > soma1)
        printf("\nVencedor: %s\n", cidade2);
    else
        printf("\nEmpate!\n");

    return 0;
}