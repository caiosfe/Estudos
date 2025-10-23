#include <stdio.h>

// Função recursiva para controle de casas a serem movimentadas da torre.
void mover_torre(int contador, int limite) {
    if (contador >= limite) {
        return; // Declaração de parada da função recursiva.
    }
    mover_torre(contador + 1, limite);
}

// Função recursiva para controle de casas a serem movimentadas da bispo.
void mover_bispo(int contador, int limite) {
    if (contador >= limite) {
        return; // Declaração de parada da função recursiva.
    }
    mover_bispo(contador + 1, limite);
}

// Função recursiva para controle de casas a serem movimentadas da rainha.
void mover_rainha(int contador, int limite) {
    if (contador >= limite) {
        return; // Declaração de parada da função recursiva.
    }
    mover_rainha(contador + 1, limite);
}

int main() {
    int contador_torre = 0, contador_bispo = 0, contador_cavalo = 0; // Variáveis para controle de casas percorridas
    int casas_torre = 5, casas_bispo = 5, casas_rainha = 8, casas_cavalo = 3; // Variáveis para controle do total de casas a percorrer

    // Código para movimentação da Torre
    printf("Movimentos da Torre:\n\n");
    while (contador_torre < casas_torre) {
        printf("Direita\n");
        contador_torre++;
        mover_torre(contador_torre, casas_torre);
    }

    // Código para movimentação do Bispo, com loops aninhados.
    printf("\nMovimentos do Bispo:\n\n");
    for (contador_bispo = 0; contador_bispo < casas_bispo; contador_bispo++) {
        for (int i = 0; i < 1; i++) {
            printf("Cima\n");
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }
        mover_bispo(contador_bispo, casas_bispo);
    }

    // Código para movimentação da Rainha.
    printf("\nMovimentos da Rainha:\n\n");
    for (int i = 0; i < casas_rainha; i++) {
        printf("Esquerda\n");
        mover_rainha(i, casas_rainha);
    }

    // Código para movimentação do Cavalo, com loops aninhados.
    printf("\nMovimentos do Cavalo:\n\n");
    while (contador_cavalo < casas_cavalo) {
        for (int i = 0; i < 2 && contador_cavalo < casas_cavalo; i++) {
            printf("Cima\n");
            contador_cavalo++;
        }

        if (contador_cavalo < casas_cavalo) {
            printf("Direita\n");
            contador_cavalo++;
        }
    }

    printf("\nFim da rodada!\n");
    return 0;
}

