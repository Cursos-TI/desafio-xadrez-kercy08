#include <stdio.h>

int main() {
    printf("Desafio do Xadrez!  \n");
    // Movimento da Torre: 5 casas para a direita
    print("Movimento da Torre: \n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); // Imprime a direção da movimentação da Torre
    }

    // Movimento do Bispo: 5 casas na diagonal (Cima e Direita)
    printf("\nMovimento do Bispo:\n");
    int casasBispo = 5; // Número de casas a serem movidas
    int contador = 0;
    while (contador < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a direção da movimentação do Bispo
        contador++; // Incrementa o contador
    }

    return 0;
}
