#include <stdio.h>

int main() {
    int vetor[10], invertido[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++) {
        invertido[i] = vetor[9 - i];
    }

    printf("Vetor invertido:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", invertido[i]);
    }
    printf("\n");

    return 0;
}
