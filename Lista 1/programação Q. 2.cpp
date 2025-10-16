#include <stdio.h>

int main() {
    int vetor[15], maior, menor;

    for(int i = 0; i < 15; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0];

    for(int i = 1; i < 15; i++) {
        if(vetor[i] > maior) maior = vetor[i];
        if(vetor[i] < menor) menor = vetor[i];
    }

    printf("Maior = %d, Menor = %d\n", maior, menor);
    return 0;
}
