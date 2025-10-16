#include <stdio.h>

int main() {
    int m[3][2], t[2][3];

    printf("Digite os valores da matriz 3x2:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &m[i][j]);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++)
            t[j][i] = m[i][j];

    printf("Matriz transposta 2x3:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}
