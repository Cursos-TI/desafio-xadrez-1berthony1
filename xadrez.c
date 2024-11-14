#include <stdio.h>

#define MOVIMENTO_BISPO 5    // 5 casas na diagonal superior direita
#define MOVIMENTO_TORRE 5    // 5 casas para a direita
#define MOVIMENTO_RAINHA 8   // 8 casas para a esquerda
#define MOVIMENTO_CAVALO 1   // 1 vez em L para cima à direita

// Função recursiva para mover o Bispo (diagonal superior direita)
void moverBispo(int casas) {
    if (casas <= 0) return; // Base da recursão

    // Movimento do Bispo: Cima e Direita
    printf("Cima\n");
    printf("Direita\n");

    moverBispo(casas - 1);  // Recursão: continua movendo o bispo
}

// Função recursiva para mover a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Base da recursão

    printf("Direita\n");
    moverTorre(casas - 1);   // Recursão: continua movendo a torre
}

// Função recursiva para mover a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // Base da recursão

    printf("Esquerda\n");
    moverRainha(casas - 1);  // Recursão: continua movendo a rainha
}

// Função para mover o Cavalo (1 vez em L para cima à direita)
void moverCavalo() {
    int i = 0, j = 0;
    
    // Loop aninhado para o movimento do cavalo
    for (i = 0; i < 1; i++) {  // Movimento do cavalo: 1 vez
        printf("Cima\n");
        for (j = 0; j < 1; j++) {  // Movimento do cavalo: 1 casa à direita
            printf("Direita\n");
        }
    }
}

// Função principal para executar as movimentações
int main() {
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    moverBispo(MOVIMENTO_BISPO);  // Move o bispo 5 casas
    printf("\n");

    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(MOVIMENTO_TORRE);  // Move a torre 5 casas
    printf("\n");

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(MOVIMENTO_RAINHA);  // Move a rainha 8 casas
    printf("\n");

    printf("Movimento do Cavalo (1 vez em L para cima à direita):\n");
    moverCavalo();  // Move o cavalo 1 vez em L
    printf("\n");

    return 0;
}
