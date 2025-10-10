#include <stdio.h>

// --- Funções Recursivas para as peças ---

// Função recursiva para o movimento da Torre
// A Torre se move 5 casas para a direita.
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        // Chamada recursiva, movendo para a próxima casa
        moverTorre(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
// A Rainha se move 8 casas para a esquerda.
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        // Chamada recursiva, movendo para a próxima casa
        moverRainha(casas - 1);
    }
}

// --- Funções com loops para as outras peças ---

// Função para o movimento do Cavalo com loops aninhados
// O Cavalo se move 2 casas para cima e 1 para a direita.
void moverCavalo() {
    int i, j;
    // O loop externo controla o movimento vertical
    for (i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    // O loop interno controla o movimento horizontal
    // Usamos 'break' para garantir que ele execute apenas uma vez
    for (j = 0; j < 2; j++) {
        if (j == 1) {
            break; // Sai do loop após a primeira execução
        }
        printf("Direita\n");
    }
}

// Função para o movimento do Bispo com loops aninhados
// O Bispo se move 5 casas na diagonal (cima e direita)
void moverBispo() {
    // Definimos o número de casas a serem percorridas
    int casas = 5;
    
    // O loop externo controla o movimento vertical
    for (int i = 0; i < casas; i++) {
        // O loop interno controla o movimento horizontal
        for (int j = 0; j < casas; j++) {
            // A condição verifica se os índices são iguais, o que representa a diagonal
            if (i == j) {
                printf("Cima, Direita\n");
            }
        }
    }
}

int main() {
    // --- Movimento da Torre (recursivo) ---
    printf("--- Movimento da Torre (recursivo) ---\n");
    moverTorre(5);

    // --- Movimento do Bispo (loops aninhados) ---
    printf("\n--- Movimento do Bispo (loops aninhados) ---\n");
    moverBispo();

    // --- Movimento da Rainha (recursivo) ---
    printf("\n--- Movimento da Rainha (recursivo) ---\n");
    moverRainha(8);

    // --- Movimento do Cavalo (loops complexos) ---
    printf("\n--- Movimento do Cavalo (loops complexos) ---\n");
    moverCavalo();

    return 0;
}
