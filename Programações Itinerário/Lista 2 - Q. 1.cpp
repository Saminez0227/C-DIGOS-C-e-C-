#include <stdio.h>

int somaMatriz(int m[3][3]) {
    int soma = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            soma += m[i][j];
    return soma;
}

int main() {
    int m[3][3];
    printf("Digite os valores da matriz 3x3:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    printf("Soma dos elementos = %d\n", somaMatriz(m));
    return 0;
}
