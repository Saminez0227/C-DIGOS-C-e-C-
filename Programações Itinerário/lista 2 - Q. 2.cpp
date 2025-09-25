#include <stdio.h>

int main() {
    int m[4][4], maior;

    printf("Digite os valores da matriz 4x4:\n");
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    maior = m[0][0];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            if(m[i][j] > maior) maior = m[i][j];

    printf("Maior elemento = %d\n", maior);
    return 0;
}
