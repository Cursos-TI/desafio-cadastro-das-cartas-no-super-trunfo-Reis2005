#include <stdio.h>

#define TAM 10   // Tamanho do tabuleiro
#define HAB 5    // Tamanho das matrizes de habilidades (5x5)

// Função para exibir o tabuleiro 
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n===== TABULEIRO =====\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro [i][j] = 0;
        }
    }
}

