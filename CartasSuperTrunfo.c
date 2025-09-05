#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1 

    char codigo1[4];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;


    // Declaração das variáveis da carta 2 

    char codigo2[4];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // Leitura dos dados da carta 1 

    printf("Digite o código da carta 1 (ex: a01): ");
    scanf("%s", codigo1);
    printf("Digite a população da Carta 1: ");
    scanf("%d", &pontos_turisticos1);


    // leitura dos dados da carta 2 

    printf("\nDigite o código da carta 2 (ex:B03): ");
    scanf("%s", codigo2);
    printf(" Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);


    // Cálculo dos atributos derivados

    float densidade1= populacao1 / area1;
    float densidade2= populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;
    

    // Cálculo do Super Poder

    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);
    

    // Exibição dos dados carta 1 




    




