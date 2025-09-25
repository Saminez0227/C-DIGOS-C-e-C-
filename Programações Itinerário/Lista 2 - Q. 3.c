#include <stdio.h>

int somaLinha(int m[5][5], int linha) {
    int soma = 0;
    for(int j = 0; j < 5; j++)
        soma += m[linha][j];
    return soma;
}

int main() {
    int m[5][5], linha;

    printf("Digite os valores da matriz 5x5:\n");
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            scanf("%d", &m[i][j]);

    printf("Digite o numero da linha (0 a 4): ");
    scanf("%d", &linha);

    printf("Soma da linha %d = %d\n", linha, somaLinha(m, linha));
    return 0;
}
