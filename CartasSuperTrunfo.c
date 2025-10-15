#include <stdio.h>

int main() {
    // ----------------------------
    // Cadrasto das Cartas 
    // ----------------------------


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


    // Entrada dos Dados da Carta 1  

    printf("Digite o Estado da carta 1 (ex: A): ");
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



    // Entrada dos Dados da Carta 2 

    printf("\nDigite o Estado da carta 2 (ex:B): ");
    scanf("%c", estado2);
    printf(" Digite a código da carta 2 (ex: B02): ");
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


    // -----------------------------
    // Cálculos dos Derivados
    // -----------------------------

    float densidade1= populacao1 / area1;
    float densidade2= populacao2 / area2;
    float pib_per_capita1 = ( pib1 * 1000000000 ) / populacao1; 
    float pib_per_capita2 = ( pib2 * 1000000000 ) / populacao2;

    
    // -----------------------------
    // Menu de Comparações 
    // -----------------------------

    int opcao;
    printf("/n--- Menu de Comparação --- \n");
    printf("Escolha um Atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n Comparando: %s (%c) vs %s (%c)\n", nome_cidade1, estado1, nome_cidade2, estado2);



    // ------------------------------
    // Lógica De Comparação
    // ------------------------------

    int opcao;
    printf("\n--- Menu de Comparação ---\n");
    printf("Escolha um Atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando: %s (%c) vs %s (%c)\n", nome_cidade1, estado1, nome_cidade2, estado2);

    




    




                    

            
























  
     




    
