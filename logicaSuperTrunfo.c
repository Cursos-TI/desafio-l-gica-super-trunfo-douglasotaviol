#include <stdio.h>

    int main() {

        printf("Carta 1:\n");

    // Estado
        char estado;
            printf("Digite a letra do estado: ");
            scanf(" %c", &estado);

        
    // Codigo
        char codigo [5];
            printf("Digite o codigo: ");
            scanf("%s", codigo);


    // Nome da cidade
        char cidade [20];
            printf("Digite o nome da cidade: ");
            scanf("%s", cidade);

    
    // População
        int populacao;
            printf("Digite o numero da populacao: ");
            scanf("%d", &populacao);


    // Area 
        float area;
            printf("Digite a area: ");
            scanf("%f", &area);


    // PIB
        float pib;
            printf("Digite o pib: ");
            scanf("%f", &pib);       
            
            
    // Pontos turisticos
        int pontos;
            printf("Digite a quantidade de pontos turisticos: \n");
            scanf("%d", &pontos);


    // Densidade Populacional 1: 

        float densidade1 = populacao / area;

    // PIB per capita: 
        float pibpercapita1 = pib / populacao;



    // Carta 2
     printf("Carta 2:\n");

    // Estado
        char estado2;
            printf("Digite a letra do estado: ");
            scanf(" %c", &estado2);

        
    // Codigo
        char codigo2 [5];
            printf("Digite o codigo: ");
            scanf("%s", codigo2);


    // Nome da cidade
        char cidade2 [20];
            printf("Digite o nome da cidade: ");
            scanf("%s", cidade2);

    
    // População
        int populacao2;
            printf("Digite o numero da populacao: ");
            scanf("%d", &populacao2);


    // Area 
        float area2;
            printf("Digite a area: ");
            scanf("%f", &area2);


    // PIB
        float pib2;
            printf("Digite o pib: ");
            scanf("%f", &pib2);       
            
            
    // Pontos turisticos
        int pontos2;
            printf("Digite a quantidade de pontos turisticos: ");
            scanf("%d", &pontos2);

    
    // Densidade Populacional 2:

        float densidade2 = populacao / area;

    // PIB per capita: 
        float pibpercapita2 = pib / populacao;


    // Comparação das cartas

        
    printf("Carta 1 - %s (%s): %d", cidade, estado, populacao);
    printf("Carta 2 - %s (%s): %d", cidade2, estado2, populacao2);

        if (populacao > populacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", cidade);
            
        }
        else {
            printf("Rsultado: Carta 2 (%s venceu!)", cidade2);
        }
        
 return 0;
    }