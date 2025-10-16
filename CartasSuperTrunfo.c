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
    
}
                        





















  
     




    
