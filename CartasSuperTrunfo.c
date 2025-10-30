#include <stdio.h>

/*
   Trabalho: Nível Mestre - Movimentação de Peças de Xadrez 
   Curso: Ads- Estácio 
   Autor: João Vitor 
   Linguagem: C
   Descrição
      - Torre, Bispo, Rainha com recursividade 
      - Cavalo com loops aninhados e controle de fluxo (break / continue)
*/

/* ===========================
   FUNÇÕES RECURSIVAS 
   =========================== */

   // Função recursivas para movimentar a Torre (horizontal e vertical) 
   void moverTorre(int casas, int passo) {
       if (passo == casas) return;
       
       printf("Direita\n");
       moverTorre(casas, passo + 1);
   } 

   // Função recursiva auxiliar para o Bispo (movimento diagonal)
   void moverBispoDiagonal(int vertical, int horizontal) {
       if (vertical == 0 || horizontal == 0) return;

       printf("Cima-Direita\n");
       moverBispoDiagonal(vertical - 1, horizontal - 1);
   }
   
   // Função principal para o Bispo - combina recursividade e loops aninhados 
   void moverBispo(int casas) {
       for( int i = 1; i <= casas; i++) { // Loop externo (vertical)
          for ( int j = 1; j <= casas; j++) { // Loop interno (horizontal) 
              if (i == j) {
                  printf("Diagonal %d: ", i);
                  moverBispoDiagonal(i, j);
                  
              }
            }
        }
    }

    // Função recursiva para movimentar a Rainha (combina Torre + Bispo)
    void moverRainha(int casas, int passo) {
        if (passo == casas) return;

        // Movimento horizontal
        printf("Direita\n");

        moverRainha(casas, passo + 1);
    } 

    /* =========================
        CAVALO - LOOPS COMPLEXOS 
       ========================= */

    void moverCavalo() {
         int movimentos = 2; // número de movimentos verticais 
         int deslocamento = 1; // número de movimentos horizontais 

         printf("Movimentação do Cavalo:\n");

         for (int i = 0; i < movimentos; i++) { //  Movimento vertical 
             for (int j = 0; j < deslocamento; j++) { // Movimento horizontal 
                 if (i == 1 && j == 0) {
                    printf("Cima\n");
                    continue; // pula uma iteração para simular o salto 
                 }
                 if (i == 1 && j == 1) {
                    printf("Direita\n");
                    break; // encerra o loop interno após completar o "L"
                 }
                }
            }
        }

        /* =====================
           FUNÇÃO PRINCIPAL 
           ===================== */

        int main() {
            int casas = 3; // número de casas para movimentar cada peça 
            
            printf("===== MOVIMENTO DA TORRE =====\n");
            moverTorre(casas, 0);

            printf(" ===== MOVIMENTO DO BISPO =====\n");
            moverBispo(casas);

            printf("\n ===== MOVIMENTO DA RAINHA =====\n");
            moverRainha(casas, 0);

            printf("\n ===== MOVIMENTO DO CAVALO =====\n");
            moverCavalo();

            printf("\n===== FIM DO PROGRAMA ======\n");

            return 0;
        }
       
            
        
     
                
        

     
        
   
        























  
     




    
