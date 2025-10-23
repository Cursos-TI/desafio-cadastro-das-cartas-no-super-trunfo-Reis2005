#include <stdio.h>

// Função para pegar o nome do atributo baseado na opção 
const char* nomeAtributo(int escolha) {
    switch(escolha) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Atributo Inválido";
    }
}


// Função para pegar valor do atributo para cada carta 
float pegaValorAtributo(int escolha, int carta,
                        unsigned long int populacao1, unsigned long int populacao2,
                        float area1, float area2,
                        float pib1, float pib2,
                        int pontos_turisticos1, int pontos_turisticos2,
                        float densidade1, float densidade2) {
    switch (escolha) {
        case 1: return (carta == 1) ? (float)populacao1 : (float)populacao2;
        case 2: return (carta == 1) ? area1 : area2;
        case 3: return (carta == 1) ? pib1 : pib2;
        case 4: return (carta == 1) ? (float)pontos_turisticos1 : (float)pontos_turisticos2;
        case 5: return (carta == 1) ? densidade1 : densidade2;
        default: return 0;

    }
}           
                        

// Função para determinar vencedor de cada atributo
// Retorna 1 se carta 1 vence, 2 se carta 2 vence, 0 se empate
int vencedorAtributo(float val1, float val2, int atributo) {
    if (atributo == 5) // Densidade: menor vence 
        return (val1 < val2) ? 2 : 0;
    else // Maior vence
        return ( val1 > val2) ? 1 : (val2 > val1) ? 2 : 0;    
}


int main() {
    // Váriaveis das cartas 
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;



    // Entrada dos dados da carta 1 
    printf("Digite o Estado da carta 1 (ex:A): ");
    scanf("%c", &estado1);
    printf("Digite o código da carta 1 (ex:A01): "); 
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%[^\n]", nome_cidade1);
    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);



    // Entrada dos dados da carta 2 
    printf("\nDigite o Estado da carta 2 (ex: B): ");
    scanf("%c", &estado2);
    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite  o nome da cidade da carta 2: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("Digite a população da carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);



    // Cálculos derivados
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;


    // Menu para escolher os atributos
    int escolha1, escolha2;


    // Primeiro Atributo
    printf("\n--- Escolha o primeiro atributo para comparar ---\n");
    printf("1 População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &escolha1);
    while ( escolha1 < 1 || escolha1 > 5) {
        printf("Opção Inválida. Digite novamente: ");
        scanf("%d", &escolha1);
    }
    


    // Segundo Atributo
    printf("\n--- Escolha o segundo atributo para comparar ---\n");
    for (int i = 1; i <= 5; i++) {
        if (i != escolha1) {
            printf("%d - %s\n", i, nomeAtributo(i));
        }
    }
    printf("Digite sua opção: ");
    scanf("%d", &escolha2);
    while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("Opção Inválida ou repetida. Digite novamente: ");
        scanf("%d", &escolha2);
    }



    // Obter valores dos atributos para cada carta 
    float val_c1_atr1 = pegaValorAtributo(escolha1, 1, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2);
    float val_c2_atr1 = pegaValorAtributo(escolha1, 2, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2);
    float val_c1_atr2 = pegaValorAtributo(escolha2, 1, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2);
    float val_c2_atr2 = pegaValorAtributo(escolha2, 2, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2);



    // Comparar atributos individualmente 
    int vencedor_atr1 = vencedorAtributo( val_c1_atr1, val_c2_atr1, escolha1);
    int vencedor_atr2 = vencedorAtributo( val_c1_atr2, val_c2_atr2, escolha2);



    // Somar valores dos atributos para cada carta 
    float soma_carta1 = val_c1_atr1 + val_c1_atr2;
    float soma_carta2 = val_c2_atr1 + val_c2_atr2;


     
    // Exibir resultados 
    printf("\n --- Resultado da comparação --- \n");
    printf(" Comparação entre %s (%c) e %s (%c)\n", nome_cidade1, estado1, nome_cidade2, estado2);



    // Atributo 1 
    printf("\nAtributo1: %s\n", nomeAtributo(escolha1));
    printf("Valores: %.2f vs %.2f\n", val_c1_atr1, val_c2_atr1);
    if (vencedor_atr1 == 1) printf("Vencedor deste atributo: %s\n", nome_cidade1);
    else if (vencedor_atr1 == 2) printf("Vencedor deste atributo: %s\n", nome_cidade2);
    else printf("Empate neste atributo!\n"); 
    
    

    // Atributo 2 
    printf("\nAtributo2: %s\n", nomeAtributo(escolha2));
    printf("Valores: %.2f vs %.2f\n", val_c1_atr2, val_c2_atr2);
    if (vencedor_atr2 == 1) printf("Vencedor deste atributo: %s\n", nome_cidade1);
    else if (vencedor_atr2 == 2) printf("Vencedor deste atributo: %s\n", nome_cidade2);
    else printf("Empate neste atributo!\n");



    // Soma dos atributos 
    printf("\nSoma dos atributos: %.2f vs %2f\n", soma_carta1, soma_carta2);



    // Resultado final 
    if (soma_carta1 > soma_carta2) printf("Resultado final: Vencedor é %s\n", nome_cidade1);
    else if (soma_carta2 > soma_carta1) ("Resultado final: Vencedor é %s\n", nome_cidade2);
    else printf("Resultado final: Empate!\n");


    return 0; 
}


                        





















  
     




    
