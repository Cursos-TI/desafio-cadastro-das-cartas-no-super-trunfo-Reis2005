#include <stdio.h>

int main() {
    // Carta 1 
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;


    // Carta 2  
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;


    // Leitura dos dados da carta 1 

    printf("Digite o Estado da carta 1 (ex: A)");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", nome_cidade1);
    printf(" Digite a população da carta 1 ");
    scanf("%lu", &populacao1);
    printf(" Digite a área da carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);



    // leitura dos dados da carta 2 

    printf("\nDigite o estado da carta 2 (ex:B): ");
    scanf("%c", codigo2);
    printf(" Digite a código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%[^\n]", nome_cidade2);
    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2 (em bilhõesde reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);



    // Cálculo dos atributos derivados

    float densidade1= populacao1 / area1;
    float densidade2= populacao2 / area2;
    float pib_per_capita1 = ( pib1 * 1000000000 ) / populacao1; // PIB em reais
    float pib_per_capita2 = ( pib2 * 1000000000 ) / populacao2;
    
    

    // Exibição dos dados carta 1 

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %,2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    


    // Exibição dos dados carta 2 

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);


    // Comparações 

    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta  1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)" super_poder1 > super_poder2);

    
    return 0;
 }
     




    




