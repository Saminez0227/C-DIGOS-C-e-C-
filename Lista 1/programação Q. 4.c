#include <stdio.h>

int main() {
    int vetor[20], pares = 0, impares = 0;

    for(int i = 0; i < 20; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) pares++;
        else impares++;
    }

    printf("Pares = %d, Impares = %d\n", pares, impares);
    return 0;
}
