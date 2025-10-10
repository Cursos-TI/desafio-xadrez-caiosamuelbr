#include <stdio.h>

int main() {
    // --- Movimento da Torre (usando for) ---
    // A Torre se move 5 casas para a direita.
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // --- Movimento do Bispo (usando while) ---
    // O Bispo se move 5 casas na diagonal (cima e direita).
    printf("\n--- Movimento do Bispo ---\n");
    int contador_bispo = 0;
    while (contador_bispo < 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    
    // --- Movimento da Rainha (usando do-while) ---
    // A Rainha se move 8 casas para a esquerda.
    printf("\n--- Movimento da Rainha ---\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);

    // --- Movimento do Cavalo (usando loops aninhados) ---
    // O Cavalo se move 2 casas para baixo e 1 para a esquerda.
    printf("\n--- Movimento do Cavalo ---\n");
    
    // O loop for externo controla o movimento principal (2 casas para baixo)
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // O loop do-while aninhado controla o movimento secundário (1 casa para a esquerda)
    int contador_cavalo = 0;
    do {
        printf("Esquerda\n");
        contador_cavalo++;
    } while (contador_cavalo < 1);

    return 0;
}
