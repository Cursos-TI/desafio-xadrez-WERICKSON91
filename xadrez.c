#include <stdio.h>

int main() {
    // Torre - usando for
    int i;
    printf("Movimento da Torre:\n");
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Bispo - usando while
    int j = 0;
    printf("\nMovimento do Bispo:\n");
    while(j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Rainha - usando do-while
    int k = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while(k < 8);

    return 0;
}
 
