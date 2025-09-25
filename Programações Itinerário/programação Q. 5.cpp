#include <stdio.h>

int main() {
    int vetor[10], busca, encontrado = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero para buscar: ");
    scanf("%d", &busca);

    for(int i = 0; i < 10; i++) {
        if(vetor[i] == busca) {
            encontrado = 1;
            break;
        }
    }

    if(encontrado) printf("Numero encontrado no vetor!\n");
    else printf("Numero nao encontrado.\n");

    return 0;
}
