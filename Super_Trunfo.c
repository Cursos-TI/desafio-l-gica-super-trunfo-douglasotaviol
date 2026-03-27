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
            printf("Digite a quantidade de pontos turisticos: ");
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

        int opcao;    

        printf("--- Super trunfo ---\n");
        printf("Escolha o atributo para comparar as cartas:\n");
        printf("Nome do pais: 1\n");
        printf("Populacao: 2\n");
        printf("Area: 3\n");
        printf("PIB: 4\n");
        printf("Numero de pontos turisticos: 5\n");
        printf("Densidade populacional: 6\n");
            scanf("%d", &opcao);switch (opcao)
        {
        case 1:
            printf("Nomes: %s; %s", estado, estado2);
            
            break;
        case 2:
            if (populacao > populacao2)
            {
                printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: Populacao\n");
                printf("Carta 1: %d||Carta 2: %d\n", populacao, populacao2 );
                printf("Carta 1 ganhou!");
            } else {
                 printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: Populacao\n");
                printf("Carta 1: %d||Carta 2: %d\n", populacao, populacao2 );
                printf("Carta 2 ganhou!");
            }
            break;
        case 3:
            if (area > area2)
            {
                printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: Area\n");
                printf("Carta 1: %f||Carta 2: %f\n", area, area2 );
                printf("Carta 1 ganhou!");
            } else {
                 printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: Area\n");
                printf("Carta 1: %f||Carta 2: %f\n", area, area2 );
                printf("Carta 2 ganhou!");
            }
            break; 
        case 4:
            if (pib > pib2)
            {
                printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: PIB\n");
                printf("Carta 1: %f||Carta 2: %f\n", pib, pib2 );
                printf("Carta 1 ganhou!");
            } else {
               printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: PIB\n");
                printf("Carta 1: %f||Carta 2: %f\n", pib, pib2 );
                printf("Carta 2 ganhou!");
            }
            break;
        case 5:
            if (pontos > pontos2)
            {
               printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: Pontos Turisticos\n");
                printf("Carta 1: %d||Carta 2: %d\n", pontos, pontos2 );
                printf("Carta 1 ganhou!");
            } else {
                printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: Pontos Turisticos\n");
                printf("Carta 1: %d||Carta 2: %d\n", pontos, pontos2 );
                printf("Carta 2 ganhou!");
            }
            break;
        case 6:
            if (densidade1 < densidade2)
            {
                printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: Densidade Populacional");
                printf("Carta 1: %f\nCarta 2: %f\n", densidade1, densidade2 );
                printf("Carta 1 ganhou!");
            } else {
                printf("Nome dos paises: %s; %s\n", cidade, cidade2);
                printf("Criterio usado: Densidade Populacional\n");
                printf("Carta 1: %f||Carta 2: %f\n", densidade1, densidade2 );
                printf("Carta 2 ganhou!");
            }
            
            break;   
        
        default:
            printf("Invalido");
            break;
        }
        
 return 0;
    }