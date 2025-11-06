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

// Função para posicionar alguns navios (valor 3)
void posicionarNavios(int tabuleiro[TAM][TAM]) {
    // Apenas alguns exemplos fíxos de navios 
    tabuleiro [2][2] = 3;
    tabuleiro [2][3] = 3;
    tabuleiro [2][4] = 3; 
    tabuleiro [5][7] = 3;
    tabuleiro [6][7] = 3;
}

// ====================== MATRIZES DE HABILIDADE ========================

// Habilidade em formato de CONE (5x5) 
void criarCone(int cone[HAB][HAB]) {
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            // Cria o formato de cone (topo fino, base larga)
            if (i == 0 && j == HAB / 2) cone[i][j] = 1; 
            else if (i == 1 && (j >= HAB / 2 - 1 && j <= HAB / 2 + 1)) cone [i][j] = 1;
            else if (i == 2 && (j >= HAB / 2 - 2 && j <= HAB / 2 + 2)) cone [i][j] = 1;
            else if (i > 2) cone [i][j] = 0;
            else cone[i][j] = 0;
        }
    }
}

// Habilidade em formato de CRUZ (5x5) 
void criarCruz(int cruz[HAB][HAB]) {
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            // Linha central ou coluna central são 1 
            if (i == HAB / 2 || j == HAB / 2)
               cruz[i][j] = 1;
            else 
               cruz[i][j] = 0;
        }
    }
}
